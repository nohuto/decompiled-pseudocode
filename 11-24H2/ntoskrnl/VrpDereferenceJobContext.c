/*
 * XREFs of VrpDereferenceJobContext @ 0x140A297D8
 * Callers:
 *     VrpOriginalKeyNameParameterCleanup @ 0x140468510 (VrpOriginalKeyNameParameterCleanup.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall VrpDereferenceJobContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x67655256u);
}
