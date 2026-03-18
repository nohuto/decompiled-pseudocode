/*
 * XREFs of ?DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z @ 0x1801321F8
 * Callers:
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x180106D38 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x180130214 (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ @ 0x180204570 (-DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ.c)
 * Callees:
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x180021770 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CWindowNode::DiscardOldestGdiSpriteBitmaps(CWindowNode *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 *i; // rsi
  unsigned __int64 *v6; // rax

  v2 = 0LL;
  for ( i = (__int64 *)((char *)this + 824); v2 < a2; ++v2 )
  {
    v6 = __A__CPtrArray___CBX__QEBAPEBX_K_Z(i, v2);
    *((_BYTE *)v6 + 149) = 0;
    CResource::UnRegisterNotifierInternal(this, (struct CResource *)v6);
  }
  CPtrArrayBase::RemoveAt((CPtrArrayBase *)i, 0LL, a2);
}
