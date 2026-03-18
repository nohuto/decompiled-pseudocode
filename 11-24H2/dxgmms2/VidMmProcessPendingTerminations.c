/*
 * XREFs of VidMmProcessPendingTerminations @ 0x1400E1108
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400EE3E0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ?GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1400355F0 (-GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 */

char __fastcall VidMmProcessPendingTerminations(KSPIN_LOCK **a1, char a2, bool *a3)
{
  char v6; // bl
  struct VIDMM_ALLOC *NextPendingTermination; // rsi
  KSPIN_LOCK *v8; // rcx
  _QWORD v10[12]; // [rsp+40h] [rbp-78h] BYREF
  bool v11; // [rsp+C0h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v12; // [rsp+D8h] [rbp+20h] BYREF

  v6 = 0;
  do
  {
    NextPendingTermination = VIDMM_GLOBAL::GetNextPendingTermination(*a1, a3);
    if ( !NextPendingTermination )
      break;
    memset(v10, 0, 0x58uLL);
    v8 = *a1;
    v12 = 0LL;
    v10[2] = NextPendingTermination;
    LODWORD(v10[0]) = 200;
    v11 = 0;
    VIDMM_GLOBAL::ProcessDeferredCommand(
      (VIDMM_GLOBAL *)v8,
      (struct _VIDMM_DEFERRED_COMMAND *)v10,
      &v11,
      0,
      0LL,
      0LL,
      0,
      &v12);
    v6 = 1;
  }
  while ( a2 );
  return v6;
}
