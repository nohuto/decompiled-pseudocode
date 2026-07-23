/*
 * XREFs of PsDereferenceSession @ 0x140A03730
 * Callers:
 *     PsSessionCreate @ 0x1406F53F8 (PsSessionCreate.c)
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x140A03620 (MiCleanEmbryonicProcess.c)
 * Callees:
 *     PspDereferenceSessionFinal @ 0x14077B930 (PspDereferenceSessionFinal.c)
 */

void PsDereferenceSession()
{
  _KPROCESS *Process; // rbx

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Process[1].CycleTime, 0xFFFFFFFF) == 1 )
    PspDereferenceSessionFinal();
  _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0xFFFEFFFF);
}
