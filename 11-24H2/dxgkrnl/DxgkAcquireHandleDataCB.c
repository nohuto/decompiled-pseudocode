/*
 * XREFs of DxgkAcquireHandleDataCB @ 0x1403284D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140010864 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402AC210 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1402E5A50 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1402E5AAC (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

ULONG_PTR __fastcall DxgkAcquireHandleDataCB(unsigned int *a1, struct _EX_RUNDOWN_REF **a2)
{
  __int64 v4; // rcx
  ULONG_PTR Count; // rdi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v8; // rbp
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v10; // rsi
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGTHREAD *DxgThread; // rbx
  volatile signed __int32 *v14; // rbp
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rsi
  int v19; // edx
  struct _EX_RUNDOWN_REF *v20; // rsi
  __int64 v21; // r9
  struct DXGPROCESS *v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rsi
  int v25; // edx
  __int64 v26; // rsi
  __int64 v27; // r9
  struct DXGTHREAD *v29; // [rsp+50h] [rbp-78h] BYREF
  char v30[8]; // [rsp+58h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v30);
  Count = 0LL;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 169;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"nullptr != pReleaseHandle", 169LL, 0LL, 0LL, 0LL, 0LL);
  }
  CurrentProcess = PsGetCurrentProcess(v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_10;
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v10 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( v10 )
      goto LABEL_11;
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2926;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_10;
  }
  v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  if ( !v10 )
LABEL_10:
    v10 = v8;
LABEL_11:
  v29 = 0LL;
  if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v29) >= 0 )
  {
    DxgThread = v29;
    if ( !v29 )
    {
      DxgThread = DxgkThreadObjectCreateDxgThread(1);
      v29 = DxgThread;
    }
  }
  else
  {
    DxgThread = 0LL;
  }
  v14 = (volatile signed __int32 *)((char *)v10 + 248);
  if ( v10 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v10 + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v10 + 248));
  v16 = a1[1];
  if ( v16 == 1 )
  {
    v17 = (*a1 >> 6) & 0xFFFFFF;
    if ( v17 < *((_DWORD *)v10 + 74)
      && (v18 = 16LL * v17 + *((_QWORD *)v10 + 35),
          v19 = *(_DWORD *)(v18 + 8),
          ((*a1 >> 25) & 0x60) == (*(_BYTE *)(v18 + 8) & 0x60))
      && ((v19 & 0x2000) == 0 || (v19 & 0x4000) != 0)
      && (*(_DWORD *)(v18 + 8) & 0x1F) == 5
      && (v20 = *(struct _EX_RUNDOWN_REF **)v18) != 0LL )
    {
      if ( KeGetCurrentIrql() >= 2u )
      {
        v21 = *(_QWORD *)(*(_QWORD *)(v20[1].Count + 16) + 16LL);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
        {
          WdLogSingleEntry5(0LL, 275LL, 20LL, v21, 0LL, 0LL);
          WdLogGlobalForLineNumber = 196;
        }
      }
      DxgkReferenceDxgAllocation(v20);
      if ( DxgThread )
        ++*((_DWORD *)DxgThread + 12);
      *a2 = v20;
      if ( (a1[2] & 1) != 0 )
        Count = v20[4].Count;
      else
        Count = *(_QWORD *)(v20[6].Count + 16);
    }
    else
    {
      WdLogSingleEntry1(3LL, *a1);
      WdLogGlobalForLineNumber = 230;
    }
    goto LABEL_50;
  }
  if ( v16 != 2 )
  {
    WdLogSingleEntry1(3LL, (int)a1[1]);
    WdLogGlobalForLineNumber = 291;
    goto LABEL_50;
  }
  v22 = DXGPROCESS::GetCurrent(v15);
  v23 = (*a1 >> 6) & 0xFFFFFF;
  if ( v23 >= *((_DWORD *)v22 + 74)
    || (v24 = *((_QWORD *)v22 + 35) + 16LL * v23,
        v25 = *(_DWORD *)(v24 + 8),
        ((*a1 >> 25) & 0x60) != (*(_BYTE *)(v24 + 8) & 0x60))
    || (v25 & 0x2000) != 0 && (v25 & 0x4000) == 0
    || (*(_DWORD *)(v24 + 8) & 0x1F) != 4
    || (v26 = *(_QWORD *)v24) == 0 )
  {
    WdLogSingleEntry1(3LL, *a1);
    WdLogGlobalForLineNumber = 285;
LABEL_50:
    _InterlockedDecrement(v14 + 4);
    ExReleasePushLockSharedEx(v14, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_51;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
    {
      WdLogSingleEntry5(0LL, 275LL, 20LL, v27, 0LL, 0LL);
      WdLogGlobalForLineNumber = 245;
    }
  }
  DxgkReferenceDxgResource((struct _EX_RUNDOWN_REF *)v26);
  if ( DxgThread )
    ++*((_DWORD *)DxgThread + 12);
  _InterlockedDecrement(v14 + 4);
  ExReleasePushLockSharedEx(v14, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v26 + 80));
  *a2 = (struct _EX_RUNDOWN_REF *)v26;
  Count = *(_QWORD *)(v26 + 56);
  if ( (*(_DWORD *)(v26 + 4) & 1) != 0 )
    Count = *(_QWORD *)(Count + 16);
LABEL_51:
  if ( v30[0] )
    KeUnstackDetachProcess(&ApcState);
  return Count;
}
