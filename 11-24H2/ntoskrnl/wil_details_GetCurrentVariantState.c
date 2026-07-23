/*
 * XREFs of wil_details_GetCurrentVariantState @ 0x1405B4A80
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x1405B496C (wil_details_FeatureStateCache_ReevaluateCachedVariantState.c)
 * Callees:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1403F9D40 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x140AA307C (wil_RtlStagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_details_GetCurrentVariantState(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  bool v4; // cf
  bool v5; // zf
  int v7; // eax
  int v8; // ebp
  char v9; // r14
  int v10; // r15d
  __int64 *v11; // rsi
  __int64 v12; // rax
  char CachedFeatureEnabledState; // al
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp+8h]

  v3 = *(unsigned int *)(a1 + 24);
  v4 = *(_BYTE *)(a1 + 28) == 2;
  v5 = *(_BYTE *)(a1 + 28) == 3;
  *a2 = 1;
  v15 = 0LL;
  v16 = 0LL;
  v7 = wil_RtlStagingConfig_QueryFeatureState(&v15, v3, v4 | (unsigned __int8)v5, 0LL);
  v8 = ((_DWORD)v16 != 0 ? 0x400 : 0) | (HIDWORD(v16) != 0 ? 0x800 : 0);
  if ( v7 )
  {
    v9 = BYTE4(v15);
    v10 = HIDWORD(v15);
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 40);
    v10 = *(_DWORD *)(a1 + 48);
  }
  v11 = *(__int64 **)(a1 + 32);
  if ( v11 )
  {
    while ( 1 )
    {
      v12 = *v11;
      if ( !*v11 )
        break;
      if ( *(_BYTE *)(v12 + 30) || *(_BYTE *)(v12 + 29) )
      {
        if ( !*(_BYTE *)(v12 + 31) )
        {
LABEL_9:
          LODWORD(v17) = v8;
          goto LABEL_10;
        }
        ++v11;
      }
      else
      {
        CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(*(_DWORD **)v12, *v11++);
        if ( (CachedFeatureEnabledState & 1) == 0 )
          goto LABEL_9;
      }
    }
  }
  if ( v9 )
  {
    LODWORD(v17) = v8 ^ ((v9 & 0x3F) << 12);
    if ( DWORD2(v15) )
      HIDWORD(v17) = v10;
    else
LABEL_10:
      HIDWORD(v17) = *(_DWORD *)(a1 + 48);
  }
  else
  {
    HIDWORD(v17) = *(_DWORD *)(a1 + 48);
    LODWORD(v17) = v8 | ((*(_BYTE *)(a1 + 40) & 0x3F) << 12);
  }
  return v17;
}
