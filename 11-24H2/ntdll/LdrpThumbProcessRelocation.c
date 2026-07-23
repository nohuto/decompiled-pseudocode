/*
 * XREFs of LdrpThumbProcessRelocation @ 0x1800E0BE8
 * Callers:
 *     LdrProcessRelocationBlockLongLong @ 0x1800E09C0 (LdrProcessRelocationBlockLongLong.c)
 * Callees:
 *     LdrpArmProcessRelocation @ 0x1800E0B14 (LdrpArmProcessRelocation.c)
 */

__int64 __fastcall LdrpThumbProcessRelocation(unsigned __int16 *a1, __int64 a2, int a3)
{
  int v3; // r9d
  _WORD *v4; // rbx
  unsigned int v5; // edi
  __int16 v6; // r11
  unsigned __int16 v7; // r9
  unsigned int v8; // r10d
  __int16 v9; // ax
  __int16 v10; // cx

  v3 = *a1 >> 12;
  v4 = (_WORD *)(a2 + (*a1 & 0xFFE));
  v5 = 1;
  if ( v3 == 7 )
  {
    v6 = v4[2];
    v7 = v4[1];
    v8 = a3
       + ((unsigned __int8)v7 | (v7 >> 4) & 0x700 | (unsigned __int16)(2 * ((*v4 << 11) | *v4 & 0x400)) | (((unsigned __int8)v4[3] | ((unsigned __int16)v4[3] >> 4) & 0x700 | (unsigned __int16)(2 * ((v6 << 11) | v6 & 0x400))) << 16));
    *v4 = *v4 & 0xFBF0 | ((unsigned __int16)(((unsigned __int16)v8 >> 11) | v8 & 0x800) >> 1);
    v9 = (unsigned __int8)v8;
    v10 = v8 & 0x700;
    v8 >>= 16;
    v4[1] = v9 | v7 & 0x8F00 | (16 * v10);
    v4[3] &= 0x8F00u;
    v4[3] |= (unsigned __int8)v8 | (unsigned __int16)(16 * (v8 & 0x700));
    v4[2] = v6 & 0xFBF0 | ((unsigned __int16)(((unsigned __int16)v8 >> 11) | v8 & 0x800) >> 1);
  }
  else if ( v3 == 5 )
  {
    return (unsigned int)LdrpArmProcessRelocation(a1, a2, a3);
  }
  else
  {
    return 0;
  }
  return v5;
}
