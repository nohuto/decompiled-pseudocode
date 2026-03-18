/*
 * XREFs of ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1400B7860
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1400848F4 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?bUnMapImmediate@SURFACE@@QEAAHXZ @ 0x1400B788C (-bUnMapImmediate@SURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall SURFREFVIEW::bUnMapImmediate(SURFACE **this)
{
  __int64 result; // rax
  SURFACE *v3; // rcx

  result = 0LL;
  v3 = *this;
  if ( v3 )
    result = SURFACE::bUnMapImmediate(v3);
  *this = 0LL;
  return result;
}
