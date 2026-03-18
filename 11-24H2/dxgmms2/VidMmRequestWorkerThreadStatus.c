/*
 * XREFs of VidMmRequestWorkerThreadStatus @ 0x1400FEEF4
 * Callers:
 *     VidMmInitializeWorkerThread @ 0x140098EC4 (VidMmInitializeWorkerThread.c)
 *     VidMmTerminateWorkerThread @ 0x140099010 (VidMmTerminateWorkerThread.c)
 *     ?SuspendWorkerThread@VIDMM_GLOBAL@@QEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@@Z @ 0x1400FEEA0 (-SuspendWorkerThread@VIDMM_GLOBAL@@QEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@@Z.c)
 *     ?ResumeWorkerThread@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400FEED4 (-ResumeWorkerThread@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     VidMmTransitionToState @ 0x1400FF8B8 (VidMmTransitionToState.c)
 */

void __fastcall VidMmRequestWorkerThreadStatus(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // [rsp+50h] [rbp-18h] BYREF
  char v11; // [rsp+58h] [rbp-10h]

  v3 = a1 + 136;
  v4 = a2;
  v10 = a1 + 136;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *(_QWORD *)(v3 + 8) = KeGetCurrentThread();
  v8 = *(_BYTE *)(a1 + 212) == 5;
  v11 = 1;
  if ( !v8 || a3 || (_BYTE)v4 == 3 )
  {
    if ( *(_BYTE *)(a1 + 213) != (_BYTE)v4 )
    {
      LOBYTE(v7) = v4;
      VidMmTransitionToState(a1, v7);
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, v4);
    WdLogGlobalForLineNumber = 893;
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
  }
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v10);
}
