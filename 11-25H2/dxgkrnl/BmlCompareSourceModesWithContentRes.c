/*
 * XREFs of BmlCompareSourceModesWithContentRes @ 0x1402C7A9C
 * Callers:
 *     BmlCompareSourceModes @ 0x1402C7150 (BmlCompareSourceModes.c)
 * Callees:
 *     Feature_PreferSourceModeGreaterThanContentSize__private_IsEnabledDeviceUsageNoInline @ 0x14008F9AC (Feature_PreferSourceModeGreaterThanContentSize__private_IsEnabledDeviceUsageNoInline.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1402C80F4 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlCompareModeRegions @ 0x1403BF8C8 (BmlCompareModeRegions.c)
 *     ?BmlCompareModeResolution@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1403E98D0 (-BmlCompareModeResolution@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

__int64 __fastcall BmlCompareSourceModesWithContentRes(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r10
  __int64 v7; // r11
  __int64 v8; // rbx
  int v9; // r10d
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // r10

  v5 = 120LL * a2;
  v7 = a1;
  if ( (*(_DWORD *)(a1 + 8) & 3) == 0 )
  {
    v8 = v5 + a1 + 108;
    if ( (unsigned int)BmlCompareModeExtents(v8, v5 + a1 + 52) != 1 )
    {
      if ( !(unsigned int)Feature_PreferSourceModeGreaterThanContentSize__private_IsEnabledDeviceUsageNoInline() )
        return 0LL;
      BmlCompareModeResolution(a4 + 76, v8);
      if ( (unsigned int)BmlCompareModeResolution(a3 + 76, v8) != -1 )
        return v9 == -1;
      if ( v9 == -1 )
        return 0LL;
      return 0xFFFFFFFFLL;
    }
  }
  if ( (unsigned int)BmlCompareModeResolution(a4 + 76, v5 + v7 + 108) != -1
    && (unsigned int)BmlCompareModeResolution(v12, v11) != -1 )
  {
    return BmlCompareModeRegions(v13, v14);
  }
  if ( (unsigned int)BmlCompareModeResolution(v13, v11) != -1 )
    return 0xFFFFFFFFLL;
  return (unsigned int)BmlCompareModeResolution(v16, v15) != -1;
}
