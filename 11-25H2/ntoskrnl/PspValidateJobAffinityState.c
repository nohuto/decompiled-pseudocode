/*
 * XREFs of PspValidateJobAffinityState @ 0x140A6C688
 * Callers:
 *     PspInsertProcess @ 0x1408F3D10 (PspInsertProcess.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PspCheckJobAccessState @ 0x140767B94 (PspCheckJobAccessState.c)
 */

__int64 __fastcall PspValidateJobAffinityState(__int64 a1, ULONG_PTR a2)
{
  int v4; // esi
  __int64 v5; // rcx

  v4 = 0;
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
  v5 = *(_QWORD *)(a1 + 528);
  if ( !v5 || (v4 = PspCheckJobAccessState(v5, a2), v4 >= 0) )
    _InterlockedOr((volatile signed __int32 *)(a2 + 500), 0x4000000u);
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  return (unsigned int)v4;
}
