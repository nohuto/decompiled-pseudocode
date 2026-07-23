/*
 * XREFs of ExpAssignPasid @ 0x1407C0F58
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x1406576CC (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExpFreeAsid @ 0x14065738C (ExpFreeAsid.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407743C4 (PsUpdateSvmProcessPasidAllThreads.c)
 *     ExIsSvmPasidMsrUpdateRequiredForProcess @ 0x1408FCEF4 (ExIsSvmPasidMsrUpdateRequiredForProcess.c)
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
