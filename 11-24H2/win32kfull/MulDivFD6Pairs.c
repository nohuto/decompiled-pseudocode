/*
 * XREFs of MulDivFD6Pairs @ 0x14013F334
 * Callers:
 *     HT_CreateDeviceHalftoneInfo @ 0x140127DF4 (HT_CreateDeviceHalftoneInfo.c)
 *     ComputeColorSpaceXForm @ 0x14013F51C (ComputeColorSpaceXForm.c)
 *     ComputeBGRMappingTable @ 0x1402F3914 (ComputeBGRMappingTable.c)
 * Callees:
 *     U64DivU32RoundUp @ 0x14013EE58 (U64DivU32RoundUp.c)
 */

__int64 __fastcall MulDivFD6Pairs(int *a1)
{
  int v1; // r15d
  int *v2; // rsi
  BOOL v3; // ebx
  signed int v4; // r10d
  unsigned int v5; // r11d
  signed int v6; // r9d
  int v7; // ebp
  int v8; // r14d
  int v9; // r12d
  int v10; // eax
  int v11; // r14d
  unsigned int v12; // r8d
  unsigned int v13; // edx
  int v14; // ebp
  unsigned int v15; // edi
  unsigned int v16; // eax
  unsigned int v17; // r8d
  int v18; // edi
  unsigned int v19; // edx
  __int64 result; // rax
  signed int v21; // ecx
  unsigned int v22; // r11d

  v1 = *(unsigned __int16 *)a1;
  v2 = a1;
  if ( !*(_WORD *)a1 )
    return 0LL;
  v3 = 1;
  v4 = 0;
  if ( (*((_BYTE *)a1 + 2) & 1) != 0 )
  {
    v4 = a1[1];
    if ( v4 == 1000000 )
      v4 = 0;
  }
  v5 = 0;
  v6 = 0;
  do
  {
    v2 += 2;
    --v1;
    v7 = *v2;
    v8 = v2[1];
    if ( *v2 <= 0 )
    {
      v7 = -v7;
      if ( !v7 )
        continue;
      v9 = 1;
    }
    else
    {
      v9 = 0;
    }
    if ( v8 <= 0 )
    {
      v8 = -v8;
      if ( !v8 )
        continue;
      v9 ^= 1u;
    }
    v10 = (unsigned __int16)v8;
    v11 = v8 >> 16;
    v12 = v10 * (unsigned __int16)v7;
    v13 = (unsigned __int16)v7 * v11;
    v14 = v7 >> 16;
    v15 = v10 * v14;
    v16 = (unsigned __int16)(v10 * v14) + HIWORD(v12) + (unsigned __int16)v13;
    v17 = (v16 << 16) | (unsigned __int16)v12;
    v18 = HIWORD(v13) + v14 * v11 + HIWORD(v16) + HIWORD(v15);
    if ( v9 )
    {
      v17 = -v17;
      v18 = ~v18;
      if ( !v17 )
        ++v18;
    }
    v5 += v17;
    if ( v5 < v17 )
      ++v6;
    v6 += v18;
  }
  while ( v1 );
  if ( v6 < 0 )
  {
    v5 = -v5;
    v6 = ~v6;
    if ( !v5 )
      ++v6;
  }
  else
  {
    v3 = 0;
  }
  if ( v4 )
  {
    if ( v4 < 0 )
    {
      v4 = -v4;
      v3 = !v3;
    }
    v19 = U64DivU32RoundUp(v6, v5, v4);
  }
  else
  {
    v21 = v6 + 1;
    v22 = v5 + 500000;
    if ( v22 >= 0x7A120 )
      v21 = v6;
    v19 = ((((v22 >> 20) | (v21 << 12)) / 0xF424) << 16) | (((unsigned __int16)(v22 >> 4) | ((((v22 >> 20) | (v21 << 12))
                                                                                            + 3036
                                                                                            * (((v22 >> 20) | (v21 << 12))
                                                                                             / 0xF424)) << 16))
                                                          / 0xF424);
  }
  result = -v19;
  if ( !v3 )
    return v19;
  return result;
}
