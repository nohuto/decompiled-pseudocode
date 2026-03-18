/*
 * XREFs of ?DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z @ 0x180049258
 * Callers:
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x180031468 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ @ 0x180048A30 (-DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ.c)
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1800495FC (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 * Callees:
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x18007EFA0 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CWindowNode::DiscardOldestGdiSpriteBitmaps(CWindowNode *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  CPtrArrayBase *i; // rsi
  struct CResource *v6; // rax

  v2 = 0LL;
  for ( i = (CWindowNode *)((char *)this + 832); v2 < a2; ++v2 )
  {
    v6 = (struct CResource *)__A__CPtrArray___CBX__QEBAPEBX_K_Z(i, v2);
    *((_BYTE *)v6 + 149) = 0;
    CResource::UnRegisterNotifierInternal(this, v6);
  }
  CPtrArrayBase::RemoveAt(i, 0LL, a2);
}
