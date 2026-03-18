/*
 * XREFs of GreScaleRgn @ 0x1C02A77E4
 * Callers:
 *     NtGdiScaleRgn @ 0x1C02C4180 (NtGdiScaleRgn.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C008E634 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C011C44C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreScaleRgn(HDC a1, HRGN a2)
{
  DC *v3; // rcx
  DC *v5[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v6[32]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v7[9]; // [rsp+50h] [rbp-48h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, a2, 0, 0);
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v7[0] && v5[0] )
  {
    if ( (unsigned int)DC::bDpiScaleTransform(v5[0]) )
    {
      RGNOBJ::vScale(
        v7,
        _mm_unpacklo_ps((__m128)*((unsigned int *)v3 + 131), (__m128)*((unsigned int *)v3 + 132)).m128_u64[0]);
      v3 = v5[0];
    }
    if ( v3 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v5);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v6);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
    return 1LL;
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v5);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
    return 0LL;
  }
}
