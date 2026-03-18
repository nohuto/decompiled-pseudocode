/*
 * XREFs of ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x180219F80
 * Callers:
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNPEAPEAUIWICBitmap@@@Z @ 0x1802130F0 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNPEAPEAUIWICBitmap@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::SetResolution(CBitmap *this, double a2, double a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  float v5; // xmm0_4
  float v6; // xmm1_4

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v5 = a2;
  v6 = a3;
  *((float *)this + 16) = v5;
  *((float *)this + 17) = v6;
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
