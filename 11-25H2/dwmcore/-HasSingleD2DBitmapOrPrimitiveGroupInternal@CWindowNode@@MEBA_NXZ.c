/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ @ 0x1801D4F20
 * Callers:
 *     <none>
 * Callees:
 *     ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x1800D1450 (-HasNonEmptyContent@CVisual@@UEBA_NXZ.c)
 *     ?HasSpriteContent@CWindowNode@@AEBA_NXZ @ 0x1801D4F60 (-HasSpriteContent@CWindowNode@@AEBA_NXZ.c)
 *     ?HasFlipExContent@CWindowNode@@AEBA_NXZ @ 0x1801D4F94 (-HasFlipExContent@CWindowNode@@AEBA_NXZ.c)
 */

bool __fastcall CWindowNode::HasSingleD2DBitmapOrPrimitiveGroupInternal(CWindowNode *this)
{
  CWindowNode *v1; // rcx
  bool HasFlip; // al
  CVisual *v3; // rcx
  char v4; // dl

  CWindowNode::HasSpriteContent(this);
  HasFlip = CWindowNode::HasFlipExContent(v1);
  if ( v4 )
  {
    if ( !HasFlip )
      return !CVisual::HasNonEmptyContent(v3);
    return 0;
  }
  else
  {
    if ( HasFlip )
      return !CVisual::HasNonEmptyContent(v3);
    return CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(v3);
  }
}
