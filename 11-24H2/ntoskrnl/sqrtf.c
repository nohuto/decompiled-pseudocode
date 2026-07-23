/*
 * XREFs of sqrtf @ 0x1404FCFE0
 * Callers:
 *     <none>
 * Callees:
 *     _handle_errorf @ 0x1404FFD50 (_handle_errorf.c)
 */

float __cdecl sqrtf(float X)
{
  if ( (LODWORD(X) & 0x7F800000) == 0x7F800000 )
  {
    if ( (LODWORD(X) & 0x7FFFFF) != 0 )
    {
      handle_errorf((unsigned int)"sqrtf", 5, LODWORD(X) | 0x400000, 1, 0, 33, LODWORD(X), 0, 1);
      return X;
    }
    if ( X < 0.0 )
      goto LABEL_5;
  }
  if ( (LODWORD(X) & 0x7FFFFFFF) == 0 || X >= 0.0 )
    return fsqrt(X);
LABEL_5:
  handle_errorf((unsigned int)"sqrtf", 5, -4194304, 1, 8, 33, LODWORD(X), 0, 1);
  return X;
}
