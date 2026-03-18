/*
 * XREFs of DEC_SHARE_REF_CNT @ 0x1400358C0
 * Callers:
 *     <none>
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 */

__int64 __fastcall DEC_SHARE_REF_CNT(struct _BASEOBJECT *a1)
{
  return HmgDecrementShareReferenceCountEx(a1, 0LL);
}
