/*
 * XREFs of LdrpArmProcessRelocation @ 0x1800E0B14
 * Callers:
 *     LdrProcessRelocationBlockLongLong @ 0x1800E09C0 (LdrProcessRelocationBlockLongLong.c)
 *     LdrpThumbProcessRelocation @ 0x1800E0BE8 (LdrpThumbProcessRelocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpArmProcessRelocation(_WORD *a1, __int64 a2, int a3)
{
  unsigned int *v3; // r10
  __int16 v4; // bx
  unsigned int v5; // r11d
  unsigned int v6; // r9d
  unsigned int v7; // r8d

  v3 = (unsigned int *)(a2 + (*a1 & 0xFFC));
  v4 = a3;
  v5 = 1;
  if ( (*a1 & 0xF000) == 0x5000 )
  {
    v6 = v3[1];
    v7 = (a3
        + (*v3 & 0xFFF | (*v3 >> 4) & 0xF000 | ((v6 & 0xFFF) << 16) | ((unsigned __int16)(v6 >> 4) << 16) & 0xF0000000)) >> 16;
    *v3 = *v3 & 0xFFF0F000 | (v4 + (*v3 & 0xFFF | (*v3 >> 4) & 0xF000)) & 0xFFF | (16
                                                                                 * ((v4
                                                                                   + (*v3 & 0xFFF | (*v3 >> 4) & 0xF000)) & 0xF000));
    v3[1] = v6 & 0xFFF0F000 | v7 & 0xFFF | (16 * (v7 & 0xF000));
  }
  else
  {
    return 0;
  }
  return v5;
}
