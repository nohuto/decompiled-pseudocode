/*
 * XREFs of PfSnAltProfileCleanup @ 0x1407458C0
 * Callers:
 *     PfSnSetAltPrefetchParam @ 0x140745A74 (PfSnSetAltPrefetchParam.c)
 *     PfProcessExitNotification @ 0x14094BDC4 (PfProcessExitNotification.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
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
