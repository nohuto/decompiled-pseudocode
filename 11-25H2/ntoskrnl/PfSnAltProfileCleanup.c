/*
 * XREFs of PfSnAltProfileCleanup @ 0x14073B5B0
 * Callers:
 *     PfSnSetAltPrefetchParam @ 0x14073B764 (PfSnSetAltPrefetchParam.c)
 *     PfProcessExitNotification @ 0x14091D314 (PfProcessExitNotification.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PfSnAltProfileCleanup(__int64 a1)
{
  void *v1; // rcx
  LONG_PTR result; // rax

  v1 = *(void **)(a1 + 48);
  if ( v1 )
    return ObfDereferenceObjectWithTag(v1, 0x73576650u);
  return result;
}
