/*
 * XREFs of ExpAssignPasid @ 0x1407B1338
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x14064D138 (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExpFreeAsid @ 0x14064CDF8 (ExpFreeAsid.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407647D4 (PsUpdateSvmProcessPasidAllThreads.c)
 *     ExIsSvmPasidMsrUpdateRequiredForProcess @ 0x1408F3CDC (ExIsSvmPasidMsrUpdateRequiredForProcess.c)
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
