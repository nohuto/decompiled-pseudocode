/*
 * XREFs of ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x1801D5A0C
 * Callers:
 *     ?CreateSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1801D55F4 (-CreateSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x1801D5970 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x1801D5AA4 (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 */

__int64 __fastcall CaptureBitsResponse::CalcSectionBitmapSize(CaptureBitsResponse *this)
{
  int v1; // eax
  unsigned int *v2; // r8
  __int64 v3; // r11
  unsigned int v4; // ebx
  unsigned __int64 v5; // rcx

  v1 = HrCalcDWordAlignedScanlineStride(
         *((_DWORD *)this + 481),
         *((enum DXGI_FORMAT *)this + 483),
         (unsigned int *)this + 491);
  v4 = v1;
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v1, 0xD5u, 0LL);
  }
  else
  {
    v5 = *v2 * (unsigned __int64)*(unsigned int *)(v3 + 1928);
    if ( v5 <= 0xFFFFFFFF )
    {
      *(_DWORD *)(v3 + 1960) = v5;
      return 0;
    }
    else
    {
      v4 = -2147024362;
      *(_DWORD *)(v3 + 1960) = -1;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xD7u, 0LL);
    }
  }
  return v4;
}
