/*
 * XREFs of ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x180188F34
 * Callers:
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18018BB40 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 * Callees:
 *     ?IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18009E960 (-IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CSecondarySysmemBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180188FCC (-Update@CSecondarySysmemBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CD2DBitmapCache::UpdateSysmemBitmap(CD2DBitmapCache *this)
{
  _DWORD *v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  v2 = (_DWORD *)(*((_QWORD *)this + 5) + 24LL);
  v3 = 0;
  v6 = 0LL;
  if ( !(unsigned __int8)CSecondaryBitmap::IsRegionValid(v2, 0LL, (__int64)&v6) )
  {
    v4 = CSecondarySysmemBitmap::Update(*((_QWORD *)this + 5), &v6, *((_QWORD *)this + 3));
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x174u, 0LL);
  }
  return v3;
}
