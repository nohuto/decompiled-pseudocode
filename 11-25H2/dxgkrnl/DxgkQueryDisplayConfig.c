/*
 * XREFs of DxgkQueryDisplayConfig @ 0x140295F40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x140373818 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
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
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  unsigned int i; // eax
  __int64 v26; // rax
  struct DXGPROCESS *v27; // rax
  int v28; // edx
  unsigned int *v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int DisplayConfigInternal; // ebx
  __int64 v36; // rcx
  __int64 v37; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v41; // [rsp+58h] [rbp-28h] BYREF
  char v42; // [rsp+60h] [rbp-20h]
  int v43; // [rsp+68h] [rbp-18h] BYREF
  __int64 v44; // [rsp+70h] [rbp-10h]
  char v45; // [rsp+78h] [rbp-8h]

  v43 = -1;
  v7 = (unsigned int)a1;
  v44 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v45 = 1;
    v43 = 2176;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 2176);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 2176);
  v8 = 0;
  v11 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 179);
  if ( *(_BYTE *)v11 )
  {
    WdLogNewEntry5_WdTrace(v10, v9, v12, v13);
    WdLogGlobalForLineNumber = 273;
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
      WdLogGlobalForLineNumber = 2925;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
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
    v42 = 0;
    v41 = v11 + 8;
    if ( v11 == -8 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 638;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(struct _KTHREAD **)(v41 + 24) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 645;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v41);
    v8 = *(_DWORD *)(v11 + 632);
    v24 = v11 + 56;
    for ( i = 0; ; ++i )
    {
      if ( i >= 0x12 )
        goto LABEL_34;
      if ( *(_BYTE *)v24 && *(_DWORD *)(v24 + 4) == (_DWORD)v7 )
        break;
      v24 += 32LL;
    }
    if ( v24 )
    {
      v26 = *(unsigned int *)(v24 + 8);
      if ( (unsigned int)v26 <= *a3 )
      {
        memmove(a4, *(const void **)(v24 + 16), 216 * v26);
        *a3 = *(_DWORD *)(v24 + 8);
        if ( a5 )
          *(_DWORD *)a5 = *(_DWORD *)(v24 + 24);
        v27 = DXGPROCESS::GetCurrent();
        v28 = *(_DWORD *)(v11 + 632);
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
          DxgkLogCodePointPacket(0x4Du, v31, *(_DWORD *)(v24 + 4), *(_DWORD *)(v24 + 28), 0LL);
        if ( v42 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v41);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
        if ( v45 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v43);
        }
        return 0LL;
      }
      WdLogSingleEntry3(3LL, v7, *(unsigned int *)(v24 + 8), *a3);
      WdLogGlobalForLineNumber = 311;
    }
    else
    {
LABEL_34:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20, v22, v23) + 24) = v7;
      WdLogGlobalForLineNumber = 300;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v41);
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit, v37, v43);
  return DisplayConfigInternal;
}
