/*
 * XREFs of ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801898F4
 * Callers:
 *     ?Update@CSecondarySysmemBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180188FCC (-Update@CSecondarySysmemBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1802E3170 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?Update@CSecondaryCrossAdapterDirectBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1802E3670 (-Update@CSecondaryCrossAdapterDirectBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNee.c)
 *     ?Update@CSecondaryCrossAdapterIndirectBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1802E38D0 (-Update@CSecondaryCrossAdapterIndirectBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotN.c)
 * Callees:
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800668C0 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CSecondaryBitmap::AddValidRect(__int64 a1, int *a2)
{
  int v2; // r9d
  int v3; // r10d
  int v4; // eax
  int v5; // r8d
  FastRegion::CRegion *v6; // [rsp+20h] [rbp-60h] BYREF
  _DWORD v7[3]; // [rsp+28h] [rbp-58h] BYREF
  _DWORD v8[2]; // [rsp+34h] [rbp-4Ch] BYREF
  _DWORD v9[13]; // [rsp+3Ch] [rbp-44h] BYREF
  __int64 savedregs; // [rsp+80h] [rbp+0h] BYREF

  v2 = *a2;
  v3 = a2[2];
  v4 = a2[1];
  v5 = a2[3];
  v6 = (FastRegion::CRegion *)v7;
  if ( v2 >= v3 || v4 >= v5 )
  {
    v7[0] = 0;
  }
  else
  {
    v8[0] = v4;
    v7[0] = 2;
    v7[1] = v2;
    v7[2] = v3;
    v8[1] = (unsigned int)&savedregs - 60 - (unsigned int)v8;
    v9[2] = v2;
    v9[3] = v3;
    v9[1] = (unsigned int)&savedregs - 60 - (unsigned int)v9 + 8;
    v9[0] = v5;
  }
  CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)(a1 + 16), &v6);
  FastRegion::CRegion::FreeMemory(&v6);
}
