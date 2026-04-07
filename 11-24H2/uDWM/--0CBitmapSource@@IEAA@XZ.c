/*
 * XREFs of ??0CBitmapSource@@IEAA@XZ @ 0x180025BC4
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x18000A038 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z @ 0x18000AC9C (-Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x18000AF00 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180025AD8 (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180026794 (--0CBaseObject@@QEAA@XZ.c)
 */

CBitmapSource *__fastcall CBitmapSource::CBitmapSource(CBitmapSource *this)
{
  __int64 v1; // rcx

  CBaseObject::CBaseObject(this);
  *(_QWORD *)v1 = &CBitmapSource::`vftable';
  *(_QWORD *)(v1 + 16) = 0LL;
  *(_QWORD *)(v1 + 96) = 0LL;
  *(_DWORD *)(v1 + 80) = 0x80000000;
  *(_DWORD *)(v1 + 88) = 0x80000000;
  *(_DWORD *)(v1 + 84) = 0x80000000;
  *(_DWORD *)(v1 + 92) = 0x80000000;
  return (CBitmapSource *)v1;
}
