/*
 * XREFs of VrpDereferenceJobContext @ 0x140A357C8
 * Callers:
 *     VrpOriginalKeyNameParameterCleanup @ 0x14046DC50 (VrpOriginalKeyNameParameterCleanup.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall VrpDereferenceJobContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x67655256u);
}
