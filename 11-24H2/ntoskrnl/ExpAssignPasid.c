/*
 * XREFs of ExpAssignPasid @ 0x1407C0B08
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x14065902C (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     ExpFreeAsid @ 0x140658CEC (ExpFreeAsid.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407741A4 (PsUpdateSvmProcessPasidAllThreads.c)
 *     ExIsSvmPasidMsrUpdateRequiredForProcess @ 0x1408A68E4 (ExIsSvmPasidMsrUpdateRequiredForProcess.c)
 */

__int64 __fastcall ExpAssignPasid(volatile signed __int32 *Object, signed __int32 a2)
{
  __int64 v5; // rcx

  PsReferenceSiloContext((void *)Object);
  if ( _InterlockedCompareExchange(Object + 384, a2, 0) )
  {
    ExpFreeAsid(a2 - 1, (void *)Object);
    ObfDereferenceObject((PVOID)Object);
    return 0LL;
  }
  else
  {
    if ( (unsigned __int8)ExIsSvmPasidMsrUpdateRequiredForProcess(Object) )
      PsUpdateSvmProcessPasidAllThreads(v5);
    return 1LL;
  }
}
