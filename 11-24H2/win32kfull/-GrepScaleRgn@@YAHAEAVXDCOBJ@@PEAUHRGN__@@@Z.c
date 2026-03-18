/*
 * XREFs of ?GrepScaleRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x14020FEAC
 * Callers:
 *     NtGdiScaleRgn @ 0x14020FE50 (NtGdiScaleRgn.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140062DFC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1400C71CC (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 */

__int64 __fastcall GrepScaleRgn(DC **a1, HRGN a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  _QWORD v6[9]; // [rsp+20h] [rbp-48h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, a2, 0, 0);
  v3 = 0;
  if ( v6[0] )
  {
    if ( (unsigned int)DC::bDpiScaleTransform(*a1) )
      RGNOBJ::vScale(
        v6,
        _mm_unpacklo_ps((__m128)*(unsigned int *)(v4 + 524), (__m128)*(unsigned int *)(v4 + 528)).m128_u64[0]);
    v3 = 1;
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
  return v3;
}
