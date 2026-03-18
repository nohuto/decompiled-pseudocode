/*
 * XREFs of PfSnAltProfileCleanup @ 0x1407475D0
 * Callers:
 *     PfSnSetAltPrefetchParam @ 0x140747784 (PfSnSetAltPrefetchParam.c)
 *     PfProcessExitNotification @ 0x1409398E0 (PfProcessExitNotification.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
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
