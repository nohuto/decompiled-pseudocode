/*
 * XREFs of _powf_special @ 0x14001B380
 * Callers:
 *     <none>
 * Callees:
 *     _handle_errorf @ 0x14001B0D0 (_handle_errorf.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall powf_special(float a1, float a2, double a3, int a4)
{
  int v4; // r9d
  int v6; // [rsp+20h] [rbp-58h]
  unsigned int v7; // [rsp+28h] [rbp-50h]
  float v8; // [rsp+30h] [rbp-48h]
  float v9; // [rsp+38h] [rbp-40h]

  switch ( a4 )
  {
    case 1:
      v9 = a2;
      v4 = 0;
      v8 = a1;
      v7 = 0;
      v6 = 8;
      goto LABEL_7;
    case 2:
      v4 = 2;
      v9 = a2;
      v8 = a1;
      v7 = 34;
      v6 = 4;
      goto LABEL_7;
    case 3:
    case 4:
    case 5:
    case 6:
      v4 = 1;
      v9 = a2;
      v8 = a1;
      v7 = 33;
      v6 = 8;
      goto LABEL_7;
    case 7:
      v4 = 4;
      v9 = a2;
      v8 = a1;
      v7 = 34;
      v6 = 18;
      goto LABEL_7;
    case 9:
      v4 = 3;
      v9 = a2;
      v8 = a1;
      v7 = 34;
      v6 = 17;
LABEL_7:
      handle_errorf("powf", 29, SLODWORD(a3), v4, v6, v7, v8, v9, 2);
      break;
    default:
      break;
  }
  return *(__m128 *)&a3;
}
