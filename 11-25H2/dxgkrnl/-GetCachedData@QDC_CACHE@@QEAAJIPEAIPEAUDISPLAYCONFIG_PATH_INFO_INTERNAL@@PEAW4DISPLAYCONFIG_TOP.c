/*
 * XREFs of ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x14033B934
 * Callers:
 *     ?DxgkQueryDatabaseFromQDCCache@@YAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1401C0960 (-DxgkQueryDatabaseFromQDCCache@@YAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rdi
  __int64 v20; // rcx
  unsigned int i; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  struct DXGPROCESS *v25; // rsi
  struct DXGPROCESS *v26; // rax
  int v27; // edx
  unsigned int *v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // edx
  int *v31; // rbx
  __int64 result; // rax
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGTHREAD *v37; // rax
  struct _ETHREAD *v38; // rbx
  KSPIN_LOCK *v39; // rax
  struct _KTHREAD **v40; // [rsp+50h] [rbp-38h] BYREF
  char v41; // [rsp+58h] [rbp-30h]

  v6 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 273;
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
      WdLogGlobalForLineNumber = 2925;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
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
  v41 = 0;
  v40 = (struct _KTHREAD **)((char *)this + 8);
  if ( this == (QDC_CACHE *)-8LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v40[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v40);
  v19 = (char *)this + 56;
  v20 = *((unsigned int *)this + 158);
  *a6 = v20;
  for ( i = 0; ; ++i )
  {
    if ( i >= 0x12 )
      goto LABEL_36;
    if ( *v19 && *((_DWORD *)v19 + 1) == (_DWORD)v6 )
      break;
    v19 += 32;
  }
  if ( !v19 )
  {
LABEL_36:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v16, v17, v18) + 24) = v6;
    WdLogGlobalForLineNumber = 300;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v40);
    return 3221225495LL;
  }
  v22 = *((unsigned int *)v19 + 2);
  if ( (unsigned int)v22 > *a3 )
  {
    WdLogSingleEntry3(3LL, v6, *((unsigned int *)v19 + 2), *a3);
    WdLogGlobalForLineNumber = 311;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v40);
    return 3221225473LL;
  }
  memmove(a4, *((const void **)v19 + 2), 216 * v22);
  *a3 = *((_DWORD *)v19 + 2);
  if ( a5 )
    *(_DWORD *)a5 = *((_DWORD *)v19 + 6);
  v23 = PsGetCurrentProcess(a5);
  v24 = PsGetProcessDxgProcess(v23);
  v25 = (struct DXGPROCESS *)v24;
  if ( !v24 || (*(_DWORD *)(v24 + 408) & 0x80) != 0 )
  {
    v37 = DXGTHREAD::GetCurrent();
    if ( v37 )
    {
      v26 = (struct DXGPROCESS *)*((_QWORD *)v37 + 3);
      if ( v26 )
        goto LABEL_24;
    }
    else
    {
      v38 = KeGetCurrentThread();
      v39 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v26 = DXGGLOBAL::SearchDxgThreadList(v39, v38);
      if ( v26 )
        goto LABEL_24;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2925;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v26 = v25;
LABEL_24:
  v27 = *((_DWORD *)this + 158);
  v28 = (unsigned int *)((char *)v26 + 564);
  if ( v27 != *((_DWORD *)v26 + 142) )
  {
    *((_DWORD *)v26 + 142) = v27;
    *v28 = 0;
  }
  v29 = *v28;
  v30 = *v28 + 1;
  *v28 = v30;
  if ( (v29 & v30) == 0 && v30 != 2 )
    DxgkLogCodePointPacket(0x4Du, v30, *((_DWORD *)v19 + 1), *((_DWORD *)v19 + 7), 0LL);
  if ( v41 )
  {
    v31 = (int *)v40;
    v41 = 0;
    if ( v40[3] != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v40, 0LL, 0LL);
      WdLogGlobalForLineNumber = 570;
    }
    if ( v31[8] <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 573;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 573LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v31[8]-- == 1 )
    {
      *((_QWORD *)v31 + 3) = 0LL;
      ExReleasePushLockExclusiveEx(v31 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
