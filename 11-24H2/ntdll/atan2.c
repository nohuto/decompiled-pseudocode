/*
 * XREFs of atan2 @ 0x1801217B0
 * Callers:
 *     <none>
 * Callees:
 *     _controlfp @ 0x180128140 (_controlfp.c)
 *     _handle_error @ 0x1801282A0 (_handle_error.c)
 */

double __cdecl atan2(double Y, double X)
{
  __int64 v2; // rbp
  double v3; // rbx
  __int64 v4; // r12
  unsigned __int64 v5; // r15
  double v6; // xmm9_8
  int v7; // edi
  double v8; // xmm8_8
  unsigned __int64 v9; // xmm6_8
  __int64 v10; // xmm0_8
  double v11; // xmm0_8
  unsigned __int64 v12; // rcx
  __int64 v13; // xmm0_8
  double v14; // xmm0_8
  double v15; // rdi
  double v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rdx
  _BOOL8 v20; // r9
  double v21; // xmm0_8
  double v22; // xmm5_8
  double v23; // xmm5_8
  __int64 v24; // rcx
  double v25; // xmm7_8
  double v26; // xmm10_8
  int v27; // kr00_4
  __int64 v28; // rdx
  __int64 v29; // rcx
  double v30; // xmm2_8
  double v31; // xmm4_8
  double v32; // xmm10_8

  v2 = (*(_QWORD *)&X >> 52) & 0x7FFLL;
  v3 = Y;
  v4 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  v5 = *(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFLL;
  v6 = X;
  v7 = ((*(_QWORD *)&Y >> 52) & 0x7FF) - v2;
  v8 = Y;
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FF0000000000000LL )
  {
    handle_error((unsigned int)"atan2", 16, LODWORD(X), 1, 0, 33, *(__int64 *)&X, *(__int64 *)&Y, 2);
    return Y;
  }
  if ( v5 > 0x7FF0000000000000LL )
  {
    handle_error((unsigned int)"atan2", 16, LODWORD(Y), 1, 0, 33, *(__int64 *)&X, *(__int64 *)&Y, 2);
    return Y;
  }
  if ( !v5 )
  {
    if ( X >= 0.0 )
      return Y;
    v9 = qword_1801CBAA8;
LABEL_52:
    if ( v3 >= 0.0 )
    {
LABEL_54:
      controlfp(0x10u, 0x10u);
      return *(double *)&v9;
    }
LABEL_53:
    v9 ^= _xmm;
    goto LABEL_54;
  }
  if ( !v4 )
  {
    if ( Y < 0.0 )
    {
      v9 = qword_1801CBAB0;
      goto LABEL_53;
    }
    controlfp(0x10u, 0x10u);
  }
  if ( (unsigned int)v2 < 0x3FD && ((unsigned __int16)(*(_QWORD *)&Y >> 52) & 0x7FFu) < 0x3FD )
  {
    if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) != 0 )
    {
      v12 = *(_QWORD *)&X + 0x4000000000000000LL;
    }
    else
    {
      v10 = *(_QWORD *)&X | 0x4010000000000000LL;
      if ( X >= 0.0 )
        v11 = *(double *)&v10 + -4.0;
      else
        v11 = *(double *)&v10 + 4.0;
      *(double *)&v12 = v11;
    }
    if ( (*(_QWORD *)&v3 & 0x7FF0000000000000LL) != 0 )
    {
      *(_QWORD *)&v15 = *(_QWORD *)&v3 + 0x4000000000000000LL;
    }
    else
    {
      v13 = *(_QWORD *)&v3 | 0x4010000000000000LL;
      if ( v3 >= 0.0 )
        v14 = *(double *)&v13 + -4.0;
      else
        v14 = *(double *)&v13 + 4.0;
      v15 = v14;
    }
    v6 = *(double *)&v12;
    v8 = v15;
    v7 = ((*(_QWORD *)&v15 >> 52) & 0x7FF) - ((v12 >> 52) & 0x7FF);
  }
  if ( v7 > 56 )
  {
    v9 = qword_1801CBAB0;
    goto LABEL_52;
  }
  if ( v7 >= -28 || X < 0.0 )
  {
    if ( v7 < -56 && X < 0.0 )
    {
      v9 = qword_1801CBAA8;
      goto LABEL_52;
    }
    if ( v5 == 0x7FF0000000000000LL && v4 == 0x7FF0000000000000LL )
    {
      if ( X >= 0.0 )
        v9 = qword_1801CBAB8;
      else
        v9 = qword_1801CBAC0;
      goto LABEL_52;
    }
    if ( X < 0.0 )
      *(_QWORD *)&v6 ^= _xmm;
    if ( v3 < 0.0 )
      *(_QWORD *)&v8 ^= _xmm;
    v20 = v8 > v6;
    if ( v8 > v6 )
    {
      v21 = v6;
      v6 = v8;
      v8 = v21;
    }
    v22 = v8 / v6;
    if ( v8 / v6 <= 0.0625 )
    {
      v26 = 0.0;
      if ( v22 >= 0.00000001 )
        v22 = v22
            + (v8
             - COERCE_DOUBLE(*(_QWORD *)&v22 & 0xFFFFFFFF00000000uLL)
             * COERCE_DOUBLE(*(_QWORD *)&v6 & 0xFFFFFFFF00000000uLL)
             - (v6 - COERCE_DOUBLE(*(_QWORD *)&v6 & 0xFFFFFFFF00000000uLL))
             * COERCE_DOUBLE(*(_QWORD *)&v22 & 0xFFFFFFFF00000000uLL)
             - (v22 - COERCE_DOUBLE(*(_QWORD *)&v22 & 0xFFFFFFFF00000000uLL)) * v6)
            / v6
            - (0.3333333333333317
             - (0.1999999999939322
              - (0.1428571356180717 - (0.1111073628351453 - v22 * v22 * 0.09002981028544979) * (v22 * v22))
              * (v22
               * v22))
             * (v22
              * v22))
            * (v22
             * v22
             * v22);
    }
    else
    {
      v23 = v22 * 256.0;
      v24 = (unsigned int)((int)(v23 + 0.5) - 16);
      v25 = qword_18018AFF0[v24];
      v26 = qword_18018A860[v24];
      v27 = 1023 - ((*(_QWORD *)&v6 >> 52) & 0x7FF);
      v28 = (__int64)(v27 / 2) << 52;
      v29 = (__int64)(v27 - v27 / 2) << 52;
      *(_QWORD *)&v30 = COERCE_UNSIGNED_INT64(COERCE_DOUBLE(v28 + 0x3FF0000000000000LL) * v6 * COERCE_DOUBLE(
                                                                                                 v29
                                                                                               + 0x3FF0000000000000LL)) & 0xFFFFFFFFF8000000uLL;
      v31 = (COERCE_DOUBLE(v28 + 0x3FF0000000000000LL) * v8 * COERCE_DOUBLE(v29 + 0x3FF0000000000000LL)
           - (double)(int)(v23 + 0.5) * 0.00390625 * v30
           - (COERCE_DOUBLE(v28 + 0x3FF0000000000000LL) * v6 * COERCE_DOUBLE(v29 + 0x3FF0000000000000LL) - v30)
           * ((double)(int)(v23 + 0.5)
            * 0.00390625))
          / ((double)(int)(v23 + 0.5)
           * 0.00390625
           * (COERCE_DOUBLE(v28 + 0x3FF0000000000000LL)
            * v8
            * COERCE_DOUBLE(v29 + 0x3FF0000000000000LL))
           + COERCE_DOUBLE(v28 + 0x3FF0000000000000LL) * v6 * COERCE_DOUBLE(v29 + 0x3FF0000000000000LL));
      v22 = v31 + v25 - (0.333333333332241 - v31 * v31 * 0.1999991803898914) * (v31 * v31) * v31;
    }
    if ( v20 )
    {
      v26 = *(double *)&qword_1801CBAD8 - v26;
      v22 = *(double *)&qword_1801CBAE0 - v22;
    }
    if ( X < 0.0 )
    {
      v26 = *(double *)&qword_1801CBAC8 - v26;
      v22 = *(double *)&qword_1801CBAD0 - v22;
    }
    v32 = v26 + v22;
    if ( v3 < 0.0 )
      *(_QWORD *)&v32 ^= _xmm;
    return v32;
  }
  else
  {
    if ( v7 >= -1074 )
    {
      if ( v7 >= -1022 )
        return v8 / v6;
      v16 = fabs(1.267650600228229e30 * v8 / v6);
      v17 = *(_QWORD *)&v16 >> 52;
      if ( (unsigned int)(*(_QWORD *)&v16 >> 52) <= 0x64 )
      {
        v19 = *(_QWORD *)&v16 & 0x800FFFFFFFFFFFFFuLL | 0x10000000000000LL;
        if ( 101 - (int)v17 <= 54 )
          v18 = ((v19 >> (100 - (unsigned __int8)v17)) & 1) + (v19 >> (100 - (unsigned __int8)v17) >> 1);
        else
          v18 = 0LL;
      }
      else
      {
        v18 = *(_QWORD *)&v16 & 0x800FFFFFFFFFFFFFuLL | (((unsigned int)v17 - 100LL) << 52);
      }
      v9 = v18 | COERCE_UNSIGNED_INT64(1.267650600228229e30 * v8 / v6) & 0x8000000000000000uLL;
      if ( (v18 & 0x7FF0000000000000LL) == 0 )
      {
        controlfp(0x12u, 0x12u);
        return *(double *)&v9;
      }
      return *(double *)&v9;
    }
    controlfp(0x12u, 0x12u);
    if ( v3 >= 0.0 )
      return 0.0;
    else
      return DOUBLE_N0_0;
  }
}
