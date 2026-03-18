/*
 * XREFs of ?GetPixelColor@CGdiSpriteBitmap@@QEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z @ 0x18005AFF0
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014BF30 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?GetPixelColor@CSectionBitmapRealization@@UEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z @ 0x18005B0D0 (-GetPixelColor@CSectionBitmapRealization@@UEBA-AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?QueryInterface@CGDISectionBitmapRealization@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D6E70 (-QueryInterface@CGDISectionBitmapRealization@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _D3DCOLORVALUE *__fastcall CGdiSpriteBitmap::GetPixelColor(
        CGdiSpriteBitmap *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct D2D_POINT_2U *a3)
{
  void (__fastcall ***v5)(_QWORD, GUID *, CSectionBitmapRealization **); // rcx
  void (__fastcall *v6)(_QWORD, GUID *, CSectionBitmapRealization **); // rax
  struct _D3DCOLORVALUE *(*v7)(CSectionBitmapRealization *__hidden, struct _D3DCOLORVALUE *__return_ptr __struct_ptr, const struct D2D_POINT_2U *); // rax
  struct _D3DCOLORVALUE *PixelColor; // rax
  CSectionBitmapRealization *v9; // rcx
  CSectionBitmapRealization *v11; // [rsp+20h] [rbp-28h] BYREF
  struct _D3DCOLORVALUE v12; // [rsp+28h] [rbp-20h] BYREF

  *(_OWORD *)&retstr->r = 0LL;
  if ( *((_QWORD *)this + 45) )
  {
    v5 = (void (__fastcall ***)(_QWORD, GUID *, CSectionBitmapRealization **))*((_QWORD *)this + 56);
    if ( v5 )
    {
      v11 = 0LL;
      v6 = **v5;
      if ( (char *)v6 == (char *)CGDISectionBitmapRealization::QueryInterface )
        CGDISectionBitmapRealization::QueryInterface(v5, &GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8, &v11);
      else
        v6(v5, &GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8, &v11);
      v7 = *(struct _D3DCOLORVALUE *(**)(CSectionBitmapRealization *__hidden, struct _D3DCOLORVALUE *__return_ptr __struct_ptr, const struct D2D_POINT_2U *))(*(_QWORD *)v11 + 24LL);
      if ( v7 == CSectionBitmapRealization::GetPixelColor )
        PixelColor = CSectionBitmapRealization::GetPixelColor(v11, &v12, a3);
      else
        PixelColor = (struct _D3DCOLORVALUE *)((__int64 (__fastcall *)(CSectionBitmapRealization *, struct _D3DCOLORVALUE *, const struct D2D_POINT_2U *))v7)(
                                                v11,
                                                &v12,
                                                a3);
      v9 = v11;
      *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)&PixelColor->r;
      if ( v9 )
        (*(void (__fastcall **)(CSectionBitmapRealization *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return retstr;
}
