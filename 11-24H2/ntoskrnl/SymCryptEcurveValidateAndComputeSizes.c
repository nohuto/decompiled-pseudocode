/*
 * XREFs of SymCryptEcurveValidateAndComputeSizes @ 0x140520404
 * Callers:
 *     SymCryptEcurveAllocate @ 0x14051FC64 (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptDigitsFromBits @ 0x14052103C (SymCryptDigitsFromBits.c)
 *     SymCryptSizeofIntFromDigits @ 0x140521914 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModulusFromDigits @ 0x140521944 (SymCryptSizeofModulusFromDigits.c)
 *     SymCryptSizeofEcpointEx @ 0x140528AC4 (SymCryptSizeofEcpointEx.c)
 */

char __fastcall SymCryptEcurveValidateAndComputeSizes(_DWORD *a1, unsigned int *a2)
{
  char v3; // bp
  unsigned int v4; // ecx
  unsigned int v6; // edi
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // r8d
  unsigned int v14; // eax
  unsigned int v15; // r9d
  int v16; // edx
  int v17; // edx
  __int64 v18; // rdi
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  int v21; // eax
  unsigned int v22; // r9d
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned int v25; // r10d
  unsigned int v26; // r8d
  unsigned int v27; // eax
  int v28; // ecx

  v3 = 0;
  v4 = a1[3];
  if ( v4 <= 0x80 && a1[4] <= 0x81u )
  {
    v6 = 2;
    if ( a1[5] <= 2u && a1[6] <= 0x100u )
    {
      *a2 = SymCryptDigitsFromBits(8 * v4);
      a2[1] = SymCryptDigitsFromBits((unsigned int)(8 * a1[4]));
      v7 = SymCryptDigitsFromBits((unsigned int)(8 * a1[5]));
      v8 = *a2;
      a2[2] = v7;
      v9 = SymCryptSizeofModulusFromDigits(v8);
      v10 = a2[1];
      a2[4] = v9;
      v11 = SymCryptSizeofModulusFromDigits(v10);
      v12 = a2[2];
      a2[7] = v11;
      a2[8] = SymCryptSizeofIntFromDigits(v12);
      v13 = (((unsigned int)(8 * a1[3]) >> 9) + ((((8 * a1[3]) & 0x1FFu) + 511) >> 9)) << 6;
      a2[5] = v13;
      switch ( a1[1] )
      {
        case 1:
          a2[10] = 67;
          v6 = 3;
          break;
        case 2:
          a2[10] = 84;
          v6 = 4;
          break;
        case 3:
          a2[10] = 98;
          break;
        default:
          return v3;
      }
      v14 = SymCryptSizeofEcpointEx(v13, v6);
      v3 = 1;
      v15 = a2[5];
      v16 = a2[4] + 672;
      a2[6] = v14;
      v17 = a2[7] + a2[8] + v16 + 2 * v15;
      a2[3] = v17;
      if ( (unsigned int)(a1[1] - 1) <= 1 )
        v14 *= 16;
      a2[3] = v17 + v14;
      v18 = *a2 << 8;
      v19 = (unsigned int)(v18 + 64);
      v20 = (*a2 << 6) + 64LL + v19 + 2 * ((*a2 << 6) + 64LL) + v18;
      v21 = SymCryptSizeofEcpointEx(v15, 4LL);
      v22 = *a2;
      if ( v19 <= v20 )
        LODWORD(v19) = v20;
      v23 = v19 + v21 + 8 * a2[5];
      v24 = *a2;
      if ( v22 <= a2[1] )
        v24 = a2[1];
      v25 = (v24 << 8) + 192;
      v26 = 16 * v24;
      if ( 16 * v24 <= v25 )
        v27 = (v24 << 8) + 192;
      else
        v27 = 16 * v24;
      v28 = 2 * v24;
      if ( v23 <= v27 )
      {
        if ( v26 <= v25 )
          v23 = (v28 << 7) + 192;
        else
          v23 = v26;
      }
      if ( v23 <= (v22 << 8) + 64 )
        v23 = (v22 << 8) + 64;
      a2[9] = v23;
    }
  }
  return v3;
}
