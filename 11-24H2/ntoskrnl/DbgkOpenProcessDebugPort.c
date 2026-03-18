/*
 * XREFs of DbgkOpenProcessDebugPort @ 0x140A6B414
 * Callers:
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1409E85CC (PsTestProtectedProcessIncompatibility.c)
 */

__int64 __fastcall DbgkOpenProcessDebugPort(__int64 a1, KPROCESSOR_MODE a2, HANDLE *a3)
{
  unsigned int v6; // ebx
  void *v8; // rdi
  __int64 v9; // rcx

  if ( !*(_QWORD *)(a1 + 776) )
    return (unsigned int)-1073740973;
  ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
  v8 = *(void **)(a1 + 776);
  if ( v8 )
    PsReferenceSiloContext(*(void **)(a1 + 776));
  KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
  if ( v8 )
  {
    LOBYTE(v9) = a2;
    if ( PsTestProtectedProcessIncompatibility(v9, (__int64)KeGetCurrentThread()->ApcState.Process, a1) )
      v6 = -1073740014;
    else
      v6 = ObOpenObjectByPointer(v8, a2 == 0 ? 0x200 : 0, 0LL, 0x2000000u, DbgkDebugObjectType, a2, a3);
    ObfDereferenceObject(v8);
  }
  else
  {
    return (unsigned int)-1073740973;
  }
  return v6;
}
