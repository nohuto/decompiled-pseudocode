/*
 * XREFs of PpmContinueTimeAccumulation @ 0x1403E8B08
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x1403E8944 (PpmPerfApplyProcessorState.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x14031C3F0 (PpmUpdatePerformanceFeedback.c)
 *     PpmContinueActiveTimeAccumulation @ 0x1403E99A0 (PpmContinueActiveTimeAccumulation.c)
 *     PpmGetIdleGenerationCounter @ 0x1403E9B8C (PpmGetIdleGenerationCounter.c)
 */

char __fastcall PpmContinueTimeAccumulation(struct _KPRCB *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 IdleGenerationCounter; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  if ( KeGetCurrentPrcb() == a1 )
  {
    PpmContinueActiveTimeAccumulation();
    LOBYTE(IdleGenerationCounter) = 1;
  }
  else
  {
    IdleGenerationCounter = PpmGetIdleGenerationCounter(a1, a2, a3, a4);
    v6 = IdleGenerationCounter;
    if ( IdleGenerationCounter )
    {
      LOBYTE(IdleGenerationCounter) = PpmUpdatePerformanceFeedback((__int64)a1, 0, 1, 0, 0LL);
      if ( (_BYTE)IdleGenerationCounter )
        LOBYTE(IdleGenerationCounter) = v6 == PpmGetIdleGenerationCounter(a1, v7, v8, v9);
    }
  }
  return IdleGenerationCounter;
}
