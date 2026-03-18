/*
 * XREFs of ?vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x140300FAC
 * Callers:
 *     GreClientRgnUpdated @ 0x140060F88 (GreClientRgnUpdated.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1403007A8 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x140300D20 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     GreClientRgnDone @ 0x140301574 (GreClientRgnDone.c)
 *     GreDeleteWnd @ 0x140301670 (GreDeleteWnd.c)
 *     GreSetClientRgn @ 0x1403018D8 (GreSetClientRgn.c)
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x14032E380 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall TRACKOBJ::vUpdateDrv(TRACKOBJ *this, struct EWNDOBJ *a2, unsigned int a3)
{
  (*((void (__fastcall **)(struct EWNDOBJ *, _QWORD))this + 5))(a2, a3);
}
