/*
 * XREFs of ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x14032D2A0
 * Callers:
 *     ?DxgkQueryDatabaseFromQDCCache@@YAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1401C4960 (-DxgkQueryDatabaseFromQDCCache@@YAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QDC_CACHE::GetCachedData(
        QDC_CACHE *this,
        __int64 a2,
        unsigned int *a3,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a5,
        unsigned int *a6)
{
  __int64 v6; // rsi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v12; // rdi
  struct DXGPROCESS *v13; // rax
  __int64 v14; // rax
  bool v15; // cl
  struct _KTHREAD **v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rdi
  __int64 v21; // rcx
  unsigned int i; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  struct DXGPROCESS *v26; // rsi
  struct DXGPROCESS *v27; // rax
  int v28; // edx
  unsigned int *v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // edx
  int *v32; // rbx
  __int64 result; // rax
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGTHREAD *v38; // rax
  struct _ETHREAD *v39; // rbx
  KSPIN_LOCK *v40; // rax
  struct _KTHREAD **v41; // [rsp+50h] [rbp-38h] BYREF
  char v42; // [rsp+58h] [rbp-30h]

  v6 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 275;
    return result;
  }
  CurrentProcess = PsGetCurrentProcess(this);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_4;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v13 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( !v13 )
      goto LABEL_4;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v13 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( !v13 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2926;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
LABEL_4:
      v13 = v12;
    }
  }
  v14 = *((_QWORD *)v13 + 11);
  if ( v14 )
    v15 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v14 + 240))(0LL, 0LL, 0LL) != 0;
  else
    v15 = 0;
  if ( v15 )
    return 3221225473LL;
  v16 = (struct _KTHREAD **)((char *)this + 8);
  v42 = 0;
  v41 = (struct _KTHREAD **)((char *)this + 8);
  if ( this == (QDC_CACHE *)-8LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
    v16 = v41;
  }
  if ( v16[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v41);
  v20 = (char *)this + 56;
  v21 = *((unsigned int *)this + 158);
  *a6 = v21;
  for ( i = 0; ; ++i )
  {
    if ( i >= 0x12 )
      goto LABEL_36;
    if ( *v20 && *((_DWORD *)v20 + 1) == (_DWORD)v6 )
      break;
    v20 += 32;
  }
  if ( !v20 )
  {
LABEL_36:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v17, v18, v19) + 24) = v6;
    WdLogGlobalForLineNumber = 302;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v41);
    return 3221225495LL;
  }
  v23 = *((unsigned int *)v20 + 2);
  if ( (unsigned int)v23 > *a3 )
  {
    WdLogSingleEntry3(3LL, v6, *((unsigned int *)v20 + 2), *a3);
    WdLogGlobalForLineNumber = 313;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v41);
    return 3221225473LL;
  }
  memmove(a4, *((const void **)v20 + 2), 216 * v23);
  *a3 = *((_DWORD *)v20 + 2);
  if ( a5 )
    *(_DWORD *)a5 = *((_DWORD *)v20 + 6);
  v24 = PsGetCurrentProcess(a5);
  v25 = PsGetProcessDxgProcess(v24);
  v26 = (struct DXGPROCESS *)v25;
  if ( !v25 || (*(_DWORD *)(v25 + 408) & 0x80) != 0 )
  {
    v38 = DXGTHREAD::GetCurrent();
    if ( v38 )
    {
      v27 = (struct DXGPROCESS *)*((_QWORD *)v38 + 3);
      if ( v27 )
        goto LABEL_24;
    }
    else
    {
      v39 = KeGetCurrentThread();
      v40 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v27 = DXGGLOBAL::SearchDxgThreadList(v40, v39);
      if ( v27 )
        goto LABEL_24;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2926;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v27 = v26;
LABEL_24:
  v28 = *((_DWORD *)this + 158);
  v29 = (unsigned int *)((char *)v27 + 564);
  if ( v28 != *((_DWORD *)v27 + 142) )
  {
    *((_DWORD *)v27 + 142) = v28;
    *v29 = 0;
  }
  v30 = *v29;
  v31 = *v29 + 1;
  *v29 = v31;
  if ( (v30 & v31) == 0 && v31 != 2 )
    DxgkLogCodePointPacket(0x4Du, v31, *((_DWORD *)v20 + 1), *((_DWORD *)v20 + 7), 0LL);
  if ( v42 )
  {
    v32 = (int *)v41;
    v42 = 0;
    if ( v41[3] != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v41, 0LL, 0LL);
      WdLogGlobalForLineNumber = 568;
    }
    if ( v32[8] <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 571;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 571LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v32[8]-- == 1 )
    {
      *((_QWORD *)v32 + 3) = 0LL;
      ExReleasePushLockExclusiveEx(v32 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
