/*
 * XREFs of floor @ 0x180122B50
 * Callers:
 *     <none>
 * Callees:
 *     _handle_error @ 0x1801282A0 (_handle_error.c)
 */

double __cdecl floor(double X)
{
  double v1; // r8
  __int64 v2; // xmm1_8
  unsigned __int64 v3; // rdx
  int v4; // r8d
  double v5; // rax

  v1 = X;
  v2 = *(_QWORD *)&X;
  v3 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) < 0x4340000000000000LL )
  {
    if ( v3 >= 0x3FF0000000000000LL )
    {
      *(_QWORD *)&v5 = *(_QWORD *)&X & ~((1LL << (51 - (unsigned __int8)(*(_QWORD *)&X >> 52))) - 1);
      X = v5;
      if ( *(_QWORD *)&v1 != v3 && *(_QWORD *)&v5 != *(_QWORD *)&v1 )
        return v5 - 1.0;
    }
    else if ( v3 )
    {
      if ( *(_QWORD *)&X == v3 )
        return 0.0;
      else
        return DOUBLE_N1_0;
    }
  }
  else if ( v3 > 0x7FF0000000000000LL )
  {
    v4 = LODWORD(X);
    X = 0.0;
    handle_error((unsigned int)"floor", 11, v4, 1, 0, 33, v2, 0LL, 1);
  }
  return X;
}
