/*
 * XREFs of _pow_special @ 0x180129770
 * Callers:
 *     pow @ 0x180123250 (pow.c)
 * Callees:
 *     _handle_error @ 0x1801282A0 (_handle_error.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall pow_special(double a1, double a2, double a3, int a4)
{
  unsigned int v4; // r9d
  int v6; // [rsp+20h] [rbp-48h]
  unsigned int v7; // [rsp+28h] [rbp-40h]
  double v8; // [rsp+30h] [rbp-38h]
  double v9; // [rsp+38h] [rbp-30h]

  switch ( a4 )
  {
    case 2:
      v4 = 2;
      v9 = a2;
      v8 = a1;
      v7 = 34;
      v6 = 4;
      goto LABEL_6;
    case 3:
    case 4:
    case 5:
    case 6:
      v4 = 1;
      v9 = a2;
      v8 = a1;
      v7 = 33;
      v6 = 8;
      goto LABEL_6;
    case 7:
    case 8:
      v4 = 4;
      v9 = a2;
      v8 = a1;
      v7 = 34;
      v6 = 18;
      goto LABEL_6;
    case 9:
      v4 = 3;
      v9 = a2;
      v8 = a1;
      v7 = 34;
      v6 = 17;
LABEL_6:
      handle_error("pow", 29, *(__int64 *)&a3, v4, v6, v7, v8, v9, 2);
      break;
    default:
      break;
  }
  return *(__m128 *)&a3;
}
