/*
 * XREFs of ?GetPixelColor@CSectionBitmapRealization@@UEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z @ 0x180040BF0
 * Callers:
 *     ?GetPixelColor@CGdiSpriteBitmap@@QEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z @ 0x180040B18 (-GetPixelColor@CGdiSpriteBitmap@@QEBA-AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z.c)
 * Callees:
 *     ?GetPixelColor@CSystemMemoryBitmap@@UEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z @ 0x180040A40 (-GetPixelColor@CSystemMemoryBitmap@@UEBA-AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VIBitmapSource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042020 (-InternalQueryInterface@-$CMILCOMBaseT@VIBitmapSource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _D3DCOLORVALUE *__fastcall CSectionBitmapRealization::GetPixelColor(
        CSectionBitmapRealization *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct D2D_POINT_2U *a3)
{
  CSystemMemoryBitmap *v4; // rcx
  __int64 (__fastcall *v6)(CSystemMemoryBitmap *); // rax
  int Interface; // eax
  struct _D3DCOLORVALUE *(__fastcall *v8)(CSystemMemoryBitmap *, struct _D3DCOLORVALUE *__return_ptr, const struct D2D_POINT_2U *); // rax
  struct _D3DCOLORVALUE *PixelColor; // rax
  CSystemMemoryBitmap *v11; // [rsp+20h] [rbp-28h] BYREF
  _D3DCOLORVALUE v12; // [rsp+28h] [rbp-20h] BYREF

  *(_OWORD *)&retstr->r = 0LL;
  v4 = (CSystemMemoryBitmap *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    v11 = 0LL;
    v6 = **(__int64 (__fastcall ***)(CSystemMemoryBitmap *))v4;
    if ( v6 == CMILCOMBaseT<IBitmapSource,IBitmapSource,CMilObjectDeleter>::InternalQueryInterface )
      Interface = CMILCOMBaseT<IBitmapSource,IBitmapSource,CMilObjectDeleter>::InternalQueryInterface(v4);
    else
      Interface = ((__int64 (__fastcall *)(CSystemMemoryBitmap *, GUID *, CSystemMemoryBitmap **))v6)(
                    v4,
                    &GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8,
                    &v11);
    if ( Interface >= 0 )
    {
      v8 = *(struct _D3DCOLORVALUE *(__fastcall **)(CSystemMemoryBitmap *, struct _D3DCOLORVALUE *__return_ptr, const struct D2D_POINT_2U *))(*(_QWORD *)v11 + 24LL);
      if ( v8 == CSystemMemoryBitmap::GetPixelColor )
        PixelColor = CSystemMemoryBitmap::GetPixelColor(v11, &v12, a3);
      else
        PixelColor = v8(v11, &v12, a3);
      *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)&PixelColor->r;
    }
    if ( v11 )
      (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return retstr;
}
