/*
 * XREFs of ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@H@Z @ 0x1800C5C48
 * Callers:
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@W4IconicRepresentationType@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800C5CF8 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA_ea_1800C5CF8.c)
 *     ?SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800C60E0 (-SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSour.c)
 * Callees:
 *     <none>
 */

struct CBitmapSource *__fastcall CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(
        CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *this,
        int a2)
{
  __int64 v2; // rdi
  unsigned int i; // esi
  __int64 v6; // rbx
  __int64 v7; // rbx

  v2 = 0LL;
  for ( i = 0; i < *((_DWORD *)this + 8); ++i )
  {
    v6 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(v6 + 8LL * i) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v6 + 8LL * i) + 24LL) > MulDiv(a2, 8, 10) )
      {
        v7 = *((_QWORD *)this + 1);
        if ( *(_DWORD *)(*(_QWORD *)(v7 + 8LL * i) + 24LL) < MulDiv(a2, 12, 10) )
          return *(struct CBitmapSource **)(*((_QWORD *)this + 1) + 8LL * i);
      }
    }
  }
  return (struct CBitmapSource *)v2;
}
