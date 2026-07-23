/*
 * XREFs of _decomp @ 0x1801293D0
 * Callers:
 *     _handle_exc @ 0x180128BE0 (_handle_exc.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall decomp(double a1, int *a2)
{
  int v3; // edx
  int v4; // r8d
  unsigned int v5; // ecx
  unsigned int v6; // eax

  if ( a1 == 0.0 )
  {
    *a2 = 0;
  }
  else if ( (HIWORD(a1) & 0x7FF0) == 0
         && ((v3 = _mm_cvtsi128_si32(*(__m128i *)&a1), (HIDWORD(a1) & 0xFFFFF) != 0) || v3) )
  {
    v4 = -1021;
    if ( (BYTE6(a1) & 0x10) == 0 )
    {
      v5 = HIDWORD(a1);
      do
      {
        v5 *= 2;
        v6 = HIWORD(v5);
        if ( v3 < 0 )
        {
          v5 |= 1u;
          v6 = HIWORD(v5);
        }
        v3 *= 2;
        --v4;
      }
      while ( (v6 & 0x10) == 0 );
    }
    *a2 = v4;
  }
  else
  {
    *a2 = ((HIWORD(a1) >> 4) & 0x7FF) - 1022;
  }
}
