/*
 * XREFs of ?Update@CSecondarySysmemBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180188FCC
 * Callers:
 *     ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x180188F34 (-UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1801887CC (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180189140 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180189830 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801898F4 (-AddValidRect@CSecondaryBitmap@@QEAAXAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Update(__int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _DWORD *v9; // rax
  int v10; // ecx
  unsigned __int8 PixelFormatSize; // al
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 (__fastcall *v14)(__int64, _DWORD *, __int64, __int64, _QWORD); // r11
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int v18[2]; // [rsp+20h] [rbp-48h]
  _BYTE v19[16]; // [rsp+30h] [rbp-38h] BYREF

  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(a2)
    && (*v6 < *(_DWORD *)(a1 + 24)
     || v6[1] < *(_DWORD *)(a1 + 28)
     || v6[2] > *(_DWORD *)(a1 + 32)
     || v6[3] > *(_DWORD *)(a1 + 36))
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v7) )
  {
    v16 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xAAu, 0LL);
  }
  else
  {
    v9 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 24LL))(a3, v19);
    v10 = *(_DWORD *)(a1 + 124);
    if ( *v9 == v10 )
    {
      PixelFormatSize = GetPixelFormatSize(v10);
      v13 = *(_DWORD *)(a1 + 144) - (a2[1] * (int)v12 + *a2 * (PixelFormatSize >> 3));
      v14 = *(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64, _QWORD))(*(_QWORD *)a3 + 64LL);
      *(_QWORD *)v18 = *(_QWORD *)(a1 + 136) + a2[1] * (int)v12 + *a2 * (PixelFormatSize >> 3);
      if ( (char *)v14 == (char *)CD2DBitmap::CopyPixels )
        v15 = CD2DBitmap::CopyPixels(a3, a2, v12, v13, *(_QWORD *)v18);
      else
        v15 = v14(a3, a2, v12, v13, *(_QWORD *)v18);
      v16 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xBCu, 0LL);
      else
        CSecondaryBitmap::AddValidRect(a1 + 24, a2);
    }
    else
    {
      v16 = -2003292288;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292288, 0xAFu, 0LL);
    }
  }
  return v16;
}
