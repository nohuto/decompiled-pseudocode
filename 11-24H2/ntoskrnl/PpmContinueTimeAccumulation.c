/*
 * XREFs of PpmContinueTimeAccumulation @ 0x1402AD8FC
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x1402ADC20 (PpmPerfApplyProcessorState.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x14036EAB0 (PpmUpdatePerformanceFeedback.c)
 *     PpmGetIdleGenerationCounter @ 0x14036F500 (PpmGetIdleGenerationCounter.c)
 *     PpmContinueActiveTimeAccumulation @ 0x14037009C (PpmContinueActiveTimeAccumulation.c)
 */

char __fastcall PpmContinueTimeAccumulation(struct _KPRCB *a1)
{
  __int64 v2; // rax
  int v3; // r8d
  __int64 v4; // rdi

  if ( KeGetCurrentPrcb() == a1 )
  {
    PpmContinueActiveTimeAccumulation();
    LOBYTE(v2) = 1;
  }
  else
  {
    v2 = ((__int64 (*)(void))PpmGetIdleGenerationCounter)();
    v4 = v2;
    if ( v2 )
    {
      LOBYTE(v3) = 1;
      LOBYTE(v2) = PpmUpdatePerformanceFeedback((_DWORD)a1, 0, v3, 0, 0LL);
      if ( (_BYTE)v2 )
        LOBYTE(v2) = v4 == PpmGetIdleGenerationCounter(a1);
    }
  }
  return v2;
}
