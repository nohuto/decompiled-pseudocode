/*
 * XREFs of Lanczos::Sinc @ 0x180286BF0
 * Callers:
 *     Lanczos::Lanczos @ 0x180286B88 (Lanczos--Lanczos.c)
 * Callees:
 *     sin_0 @ 0x1802DF674 (sin_0.c)
 */

double __fastcall Lanczos::Sinc(double a1)
{
  if ( a1 == 0.0 )
    return DOUBLE_1_0;
  else
    return sin_0(a1) / a1;
}
