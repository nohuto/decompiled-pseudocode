/*
 * XREFs of ?StartVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1403C5450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BLTQUEUE_EMULATED_VSYNC_SOURCE::StartVSync(
        BLTQUEUE_EMULATED_VSYNC_SOURCE *this,
        struct _D3DDDI_RATIONAL a2)
{
  __int64 v2; // r10

  v2 = 0LL;
  if ( !*((_BYTE *)this + 8) )
    v2 = 10000000 * a2.Denominator / a2.Numerator;
  ExSetTimer(*((_QWORD *)this + 2), -10000000LL * a2.Denominator / a2.Numerator, v2, 0LL);
  return 0LL;
}
