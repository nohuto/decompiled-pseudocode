/*
 * XREFs of Lanczos::Sinc @ 0x180292190
 * Callers:
 *     Lanczos::Lanczos @ 0x180292128 (Lanczos--Lanczos.c)
 * Callees:
 *     sin_0 @ 0x1802E8914 (sin_0.c)
 */

double __fastcall Lanczos::Sinc(double a1)
{
  if ( a1 == 0.0 )
    return DOUBLE_1_0;
  else
    return sin_0(a1) / a1;
}
