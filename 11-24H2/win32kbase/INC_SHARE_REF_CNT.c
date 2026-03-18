/*
 * XREFs of INC_SHARE_REF_CNT @ 0x1400357B0
 * Callers:
 *     <none>
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x1400357D0 (HmgIncrementShareReferenceCount.c)
 */

__int64 __fastcall INC_SHARE_REF_CNT(struct _BASEOBJECT *a1)
{
  return HmgIncrementShareReferenceCount(a1);
}
