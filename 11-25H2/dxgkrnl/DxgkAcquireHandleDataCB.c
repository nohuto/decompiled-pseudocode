/*
 * XREFs of DxgkAcquireHandleDataCB @ 0x140330870
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140016D04 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_1276945721__private_IsEnabledDeviceUsageNoInline @ 0x14006BAE0 (Feature_1276945721__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402A5DC0 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1402E1770 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1402E17CC (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

ULONG_PTR __fastcall DxgkAcquireHandleDataCB(unsigned int *a1, struct _EX_RUNDOWN_REF **a2)
{
  __int64 v4; // rcx
  ULONG_PTR Count; // rdi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v8; // rsi
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v10; // r14
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGTHREAD *DxgThread; // rsi
  volatile signed __int32 *v14; // rbp
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v19; // edx
  unsigned int v20; // ecx
  __int64 v21; // rdx
  int v22; // ecx
  struct _EX_RUNDOWN_REF *v23; // rbx
  __int64 v24; // r9
  int v25; // edx
  __int64 v26; // r9
  struct DXGPROCESS *v27; // rax
  unsigned int v28; // ebx
  struct DXGPROCESS *v29; // r14
  int v30; // eax
  unsigned int v31; // edx
  unsigned int v32; // ecx
  __int64 v33; // rdx
  int v34; // ecx
  __int64 v35; // rbx
  __int64 v36; // r9
  int v37; // ecx
  struct DXGTHREAD *v39; // [rsp+50h] [rbp-78h] BYREF
  char v40[8]; // [rsp+58h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v40);
  Count = 0LL;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 169;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"nullptr != pReleaseHandle", 169LL, 0LL, 0LL, 0LL, 0LL);
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
    WdLogGlobalForLineNumber = 2925;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_10;
  }
  v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  if ( !v10 )
LABEL_10:
    v10 = v8;
LABEL_11:
  v39 = 0LL;
  if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v39) >= 0 )
  {
    DxgThread = v39;
    if ( !v39 )
    {
      DxgThread = DxgkThreadObjectCreateDxgThread(1);
      v39 = DxgThread;
    }
  }
  else
  {
    DxgThread = 0LL;
  }
  v14 = (volatile signed __int32 *)((char *)v10 + 248);
  if ( v10 != (struct DXGPROCESS *)-248LL )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( *((struct _KTHREAD **)v10 + 32) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1575;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1575LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v10 + 248));
  v16 = a1[1];
  if ( v16 == 1 )
  {
    v17 = *a1;
    IsEnabledDeviceUsageNoInline = Feature_1276945721__private_IsEnabledDeviceUsageNoInline();
    v19 = *((_DWORD *)v10 + 74);
    v20 = (v17 >> 6) & 0xFFFFFF;
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( v20 < v19 )
      {
        v21 = *((_QWORD *)v10 + 35) + 16LL * v20;
        v22 = *(_DWORD *)(v21 + 8);
        if ( ((v17 >> 25) & 0x60) == (*(_BYTE *)(v21 + 8) & 0x60)
          && ((v22 & 0x2000) == 0 || (v22 & 0x4000) != 0)
          && (*(_DWORD *)(v21 + 8) & 0x1F) == 5 )
        {
          v23 = *(struct _EX_RUNDOWN_REF **)v21;
          goto LABEL_34;
        }
      }
    }
    else if ( v20 < v19 )
    {
      v24 = *((_QWORD *)v10 + 35) + 16LL * v20;
      if ( ((v17 >> 25) & 0x60) == (*(_BYTE *)(v24 + 8) & 0x60) && (*(_DWORD *)(v24 + 8) & 0x2000) == 0 )
      {
        v25 = *(_DWORD *)(v24 + 8) & 0x1F;
        if ( v25 )
        {
          if ( v25 == 5 )
          {
            v23 = *(struct _EX_RUNDOWN_REF **)v24;
LABEL_34:
            if ( v23 )
            {
              if ( KeGetCurrentIrql() >= 2u )
              {
                v26 = *(_QWORD *)(*(_QWORD *)(v23[1].Count + 16) + 16LL);
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
                {
                  WdLogSingleEntry5(0LL, 275LL, 20LL, v26, 0LL, 0LL);
                  WdLogGlobalForLineNumber = 196;
                }
              }
              DxgkReferenceDxgAllocation(v23);
              if ( DxgThread )
                ++*((_DWORD *)DxgThread + 12);
              *a2 = v23;
              if ( (a1[2] & 1) != 0 )
                Count = v23[4].Count;
              else
                Count = *(_QWORD *)(v23[6].Count + 16);
              goto LABEL_66;
            }
            goto LABEL_32;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
LABEL_32:
    WdLogSingleEntry1(3LL, *a1);
    WdLogGlobalForLineNumber = 230;
LABEL_66:
    _InterlockedDecrement(v14 + 4);
    ExReleasePushLockSharedEx(v14, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_67;
  }
  if ( v16 != 2 )
  {
    WdLogSingleEntry1(3LL, (int)a1[1]);
    WdLogGlobalForLineNumber = 291;
    goto LABEL_66;
  }
  v27 = DXGPROCESS::GetCurrent(v15);
  v28 = *a1;
  v29 = v27;
  v30 = Feature_1276945721__private_IsEnabledDeviceUsageNoInline();
  v31 = *((_DWORD *)v29 + 74);
  v32 = (v28 >> 6) & 0xFFFFFF;
  if ( v30 )
  {
    if ( v32 >= v31 )
      goto LABEL_64;
    v33 = *((_QWORD *)v29 + 35) + 16LL * v32;
    v34 = *(_DWORD *)(v33 + 8);
    if ( ((v28 >> 25) & 0x60) != (*(_BYTE *)(v33 + 8) & 0x60) || (v34 & 0x2000) != 0 && (v34 & 0x4000) == 0 )
      goto LABEL_64;
    if ( (*(_DWORD *)(v33 + 8) & 0x1F) != 4 )
      goto LABEL_64;
  }
  else
  {
    if ( v32 >= v31 )
      goto LABEL_64;
    v33 = *((_QWORD *)v29 + 35) + 16LL * v32;
    if ( ((v28 >> 25) & 0x60) != (*(_BYTE *)(v33 + 8) & 0x60) )
      goto LABEL_64;
    if ( (*(_DWORD *)(v33 + 8) & 0x2000) != 0 )
      goto LABEL_64;
    v37 = *(_DWORD *)(v33 + 8) & 0x1F;
    if ( !v37 )
      goto LABEL_64;
    if ( v37 != 4 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_64;
    }
  }
  v35 = *(_QWORD *)v33;
  if ( !*(_QWORD *)v33 )
  {
LABEL_64:
    WdLogSingleEntry1(3LL, *a1);
    WdLogGlobalForLineNumber = 285;
    goto LABEL_66;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 8) + 16LL) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
    {
      WdLogSingleEntry5(0LL, 275LL, 20LL, v36, 0LL, 0LL);
      WdLogGlobalForLineNumber = 245;
    }
  }
  DxgkReferenceDxgResource((struct _EX_RUNDOWN_REF *)v35);
  if ( DxgThread )
    ++*((_DWORD *)DxgThread + 12);
  _InterlockedDecrement(v14 + 4);
  ExReleasePushLockSharedEx(v14, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v35 + 80));
  *a2 = (struct _EX_RUNDOWN_REF *)v35;
  Count = *(_QWORD *)(v35 + 56);
  if ( (*(_DWORD *)(v35 + 4) & 1) != 0 )
    Count = *(_QWORD *)(Count + 16);
LABEL_67:
  if ( v40[0] )
    KeUnstackDetachProcess(&ApcState);
  return Count;
}
