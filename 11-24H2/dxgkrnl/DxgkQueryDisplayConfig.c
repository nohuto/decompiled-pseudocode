/*
 * XREFs of DxgkQueryDisplayConfig @ 0x14029BAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14031CFA0 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 */

__int64 __fastcall DxgkQueryDisplayConfig(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        void *a4,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a5)
{
  __int64 v7; // r14
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v16; // rdi
  struct DXGPROCESS *v17; // rax
  __int64 v18; // rax
  bool v19; // cl
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbx
  unsigned int i; // eax
  __int64 v27; // rax
  struct DXGPROCESS *v28; // rax
  int v29; // edx
  unsigned int *v30; // rcx
  unsigned int v31; // eax
  unsigned int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned int DisplayConfigInternal; // ebx
  __int64 v37; // rcx
  __int64 v38; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v42; // [rsp+58h] [rbp-28h] BYREF
  char v43; // [rsp+60h] [rbp-20h]
  int v44; // [rsp+68h] [rbp-18h] BYREF
  __int64 v45; // [rsp+70h] [rbp-10h]
  char v46; // [rsp+78h] [rbp-8h]

  v44 = -1;
  v7 = (unsigned int)a1;
  v45 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v46 = 1;
    v44 = 2176;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 2176);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v44, 2176);
  v8 = 0;
  v11 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 183);
  if ( *(_BYTE *)v11 )
  {
    WdLogNewEntry5_WdTrace(v10, v9, v12, v13);
    WdLogGlobalForLineNumber = 275;
    goto LABEL_36;
  }
  CurrentProcess = PsGetCurrentProcess(v10);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v16 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_6;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v17 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( !v17 )
      goto LABEL_6;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v17 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( !v17 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2926;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
LABEL_6:
      v17 = v16;
    }
  }
  v18 = *((_QWORD *)v17 + 11);
  if ( v18 )
    v19 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v18 + 240))(0LL, 0LL, 0LL) != 0;
  else
    v19 = 0;
  if ( !v19 )
  {
    v20 = v11 + 8;
    v43 = 0;
    v42 = v11 + 8;
    if ( v11 == -8 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 637;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
      v20 = v42;
    }
    if ( *(struct _KTHREAD **)(v20 + 24) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 644;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v42);
    v8 = *(_DWORD *)(v11 + 632);
    v25 = v11 + 56;
    for ( i = 0; ; ++i )
    {
      if ( i >= 0x12 )
        goto LABEL_34;
      if ( *(_BYTE *)v25 && *(_DWORD *)(v25 + 4) == (_DWORD)v7 )
        break;
      v25 += 32LL;
    }
    if ( v25 )
    {
      v27 = *(unsigned int *)(v25 + 8);
      if ( (unsigned int)v27 <= *a3 )
      {
        memmove(a4, *(const void **)(v25 + 16), 216 * v27);
        *a3 = *(_DWORD *)(v25 + 8);
        if ( a5 )
          *(_DWORD *)a5 = *(_DWORD *)(v25 + 24);
        v28 = DXGPROCESS::GetCurrent();
        v29 = *(_DWORD *)(v11 + 632);
        v30 = (unsigned int *)((char *)v28 + 564);
        if ( v29 != *((_DWORD *)v28 + 142) )
        {
          *((_DWORD *)v28 + 142) = v29;
          *v30 = 0;
        }
        v31 = *v30;
        v32 = *v30 + 1;
        *v30 = v32;
        if ( (v31 & v32) == 0 && v32 != 2 )
          DxgkLogCodePointPacket(0x4Du, v32, *(_DWORD *)(v25 + 4), *(_DWORD *)(v25 + 28), 0LL);
        if ( v43 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v42);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
        if ( v46 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit, v34, v44);
        }
        return 0LL;
      }
      WdLogSingleEntry3(3LL, v7, *(unsigned int *)(v25 + 8), *a3);
      WdLogGlobalForLineNumber = 313;
    }
    else
    {
LABEL_34:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v22, v21, v23, v24) + 24) = v7;
      WdLogGlobalForLineNumber = 302;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v42);
  }
LABEL_36:
  DisplayConfigInternal = QueryDisplayConfigInternal(
                            v19,
                            v8,
                            v7,
                            a2,
                            a3,
                            (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)a4,
                            a5);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
  if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v37, (__int64)&EventProfilerExit, v38, v44);
  return DisplayConfigInternal;
}
