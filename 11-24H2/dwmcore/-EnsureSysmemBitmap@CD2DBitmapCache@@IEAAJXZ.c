/*
 * XREFs of ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18018C690
 * Callers:
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x180198BE0 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CSecondarySysmemBitmap@@SAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x18018C74C (-Create@CSecondarySysmemBitmap@@SAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmapCache::EnsureSysmemBitmap(CD2DBitmapCache *this)
{
  unsigned int v1; // ebx
  struct CSecondarySysmemBitmap **v2; // rsi
  const struct PixelFormatInfo *v5; // rbx
  const struct D2D_SIZE_U *v6; // rax
  int v7; // eax
  _BYTE v8[8]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v9[16]; // [rsp+38h] [rbp-20h] BYREF

  v1 = 0;
  v2 = (struct CSecondarySysmemBitmap **)((char *)this + 40);
  if ( !*((_QWORD *)this + 5) )
  {
    *v2 = 0LL;
    v5 = (const struct PixelFormatInfo *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 3) + 24LL))(
                                           *((_QWORD *)this + 3),
                                           v9);
    v6 = (const struct D2D_SIZE_U *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 3) + 32LL))(
                                      *((_QWORD *)this + 3),
                                      v8);
    v7 = CSecondarySysmemBitmap::Create(v6, v5, v2);
    v1 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x163u, 0LL);
  }
  return v1;
}
