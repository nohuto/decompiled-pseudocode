/*
 * XREFs of INC_SHARE_REF_CNT_FAST @ 0x1401C2430
 * Callers:
 *     <none>
 * Callees:
 *     ?HmgIncrementShareReferenceCountFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@@Z @ 0x1401C1CA4 (-HmgIncrementShareReferenceCountFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@@Z.c)
 */

void __fastcall INC_SHARE_REF_CNT_FAST(struct Gre::Base::SESSION_GLOBALS *a1, struct _BASEOBJECT *a2)
{
  HmgIncrementShareReferenceCountFastOpt(a1, a2);
}
