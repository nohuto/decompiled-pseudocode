/*
 * XREFs of ?DrawBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@@Z @ 0x1801E40F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000A2C0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18004B8A0 (-GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?IsOfType@CCachedVisualImage@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801E4210 (-IsOfType@CCachedVisualImage@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E4228 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderDataBounds::DrawBitmap(CRenderDataBounds *this, struct CResource *a2)
{
  __int64 (__fastcall *v4)(struct CResource *, __int64); // rax
  char v5; // al
  CCachedVisualImage *v6; // rcx
  __int64 (__fastcall *v7)(CCachedVisualImage *, struct IBitmapRealization **); // rax
  int CurrentRenderingRealization; // eax
  char v9; // al
  struct D2D_RECT_F *v10; // rdx
  struct IBitmapRealization *v12[2]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v13[64]; // [rsp+30h] [rbp-29h] BYREF
  int v14; // [rsp+70h] [rbp+17h]
  struct D2D_RECT_F v15; // [rsp+80h] [rbp+27h] BYREF
  __int128 v16; // [rsp+90h] [rbp+37h] BYREF

  v4 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 64LL);
  if ( (char *)v4 == (char *)CCachedVisualImage::IsOfType )
    v5 = CCachedVisualImage::IsOfType(a2, 85LL);
  else
    v5 = v4(a2, 85LL);
  if ( v5 )
  {
    v12[0] = 0LL;
    v6 = (struct CResource *)((char *)a2 + 72);
    v7 = *(__int64 (__fastcall **)(CCachedVisualImage *, struct IBitmapRealization **))(*((_QWORD *)a2 + 9) + 64LL);
    if ( v7 == CCachedVisualImage::GetCurrentRenderingRealization )
      CurrentRenderingRealization = CCachedVisualImage::GetCurrentRenderingRealization(v6, v12);
    else
      CurrentRenderingRealization = v7(v6, v12);
    if ( CurrentRenderingRealization >= 0 )
    {
      v14 = 0;
      v15 = 0LL;
      v9 = (*(__int64 (__fastcall **)(struct IBitmapRealization *, _BYTE *, struct D2D_RECT_F *))(*(_QWORD *)v12[0]
                                                                                                + 40LL))(
             v12[0],
             v13,
             &v15);
      v10 = &v15;
      if ( v9 )
      {
        v16 = 0LL;
        CMILMatrix::Transform2DBoundsHelper<1>((__int64)v13, &v15, (float *)&v16);
        v10 = (struct D2D_RECT_F *)&v16;
      }
      CRenderDataBounds::AddBounds(this, v10);
    }
    if ( v12[0] )
      (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  }
  return 0LL;
}
