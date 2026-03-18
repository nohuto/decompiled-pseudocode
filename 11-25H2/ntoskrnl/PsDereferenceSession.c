/*
 * XREFs of PsDereferenceSession @ 0x140A05104
 * Callers:
 *     PsSessionCreate @ 0x1406EBB94 (PsSessionCreate.c)
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x140A04FF4 (MiCleanEmbryonicProcess.c)
 * Callees:
 *     PspDereferenceSessionFinal @ 0x14076BEE0 (PspDereferenceSessionFinal.c)
 */

void PsDereferenceSession()
{
  _KPROCESS *Process; // rbx

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Process[1].CycleTime, 0xFFFFFFFF) == 1 )
    PspDereferenceSessionFinal();
  _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0xFFFEFFFF);
}
