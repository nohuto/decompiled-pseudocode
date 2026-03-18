/*
 * XREFs of ?vStamp@REGION@@QEAAXXZ @ 0x1C006C3C8
 * Callers:
 *     GreClientRgnUpdated @ 0x1C0051264 (GreClientRgnUpdated.c)
 *     bSpEnableSprites @ 0x1C006B140 (bSpEnableSprites.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C006BEF0 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C006BFA8 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C006C2FC (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0286B30 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C028700C (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     EngCreateWnd @ 0x1C0287260 (EngCreateWnd.c)
 *     GreSetClientRgn @ 0x1C0287AC0 (GreSetClientRgn.c)
 * Callees:
 *     <none>
 */

void __fastcall REGION::vStamp(REGION *this)
{
  *((_DWORD *)this + 18) = _InterlockedIncrement((volatile signed __int32 *)Gre::Base::Globals(this) + 1596);
}
