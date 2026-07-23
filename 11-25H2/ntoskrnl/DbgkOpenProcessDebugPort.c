/*
 * XREFs of DbgkOpenProcessDebugPort @ 0x140A689A0
 * Callers:
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1409BC040 (PsTestProtectedProcessIncompatibility.c)
 */

__int64 __fastcall DbgkOpenProcessDebugPort(__int64 a1, KPROCESSOR_MODE a2, HANDLE *a3)
{
  unsigned int v6; // ebx
  void *v8; // rdi

  if ( !*(_QWORD *)(a1 + 776) )
    return (unsigned int)-1073740973;
  ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
  v8 = *(void **)(a1 + 776);
  if ( v8 )
    PsReferenceSiloContext(*(void **)(a1 + 776));
  KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
  if ( v8 )
  {
    if ( PsTestProtectedProcessIncompatibility(
           a2,
           (PS_PROTECTION *)KeGetCurrentThread()->ApcState.Process,
           (PS_PROTECTION *)a1) )
    {
      v6 = -1073740014;
    }
    else
    {
      v6 = ObOpenObjectByPointer(v8, a2 == 0 ? 0x200 : 0, 0LL, 0x2000000u, DbgkDebugObjectType, a2, a3);
    }
    ObfDereferenceObject(v8);
  }
  else
  {
    return (unsigned int)-1073740973;
  }
  return v6;
}
