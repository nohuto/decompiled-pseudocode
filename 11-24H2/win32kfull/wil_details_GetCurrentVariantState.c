/*
 * XREFs of wil_details_GetCurrentVariantState @ 0x14027F4E0
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x14027F3CC (wil_details_FeatureStateCache_ReevaluateCachedVariantState.c)
 * Callees:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x14026E920 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1403D17E4 (wil_RtlStagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_details_GetCurrentVariantState(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  _BOOL8 v5; // r8
  int v6; // eax
  int v7; // ebp
  char v8; // r14
  int v9; // r15d
  __int64 *v10; // rsi
  __int64 v11; // rax
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp+8h]

  v3 = *(unsigned int *)(a1 + 24);
  v5 = (unsigned __int8)(*(_BYTE *)(a1 + 28) - 2) <= 1u;
  *a2 = 1;
  v13 = 0LL;
  v14 = 0LL;
  v6 = wil_RtlStagingConfig_QueryFeatureState(&v13, v3, v5);
  v7 = ((_DWORD)v14 != 0 ? 0x400 : 0) | (HIDWORD(v14) != 0 ? 0x800 : 0);
  if ( v6 )
  {
    v8 = BYTE4(v13);
    v9 = HIDWORD(v13);
  }
  else
  {
    v8 = *(_BYTE *)(a1 + 40);
    v9 = *(_DWORD *)(a1 + 48);
  }
  v10 = *(__int64 **)(a1 + 32);
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = *v10;
      if ( !*v10 )
        break;
      if ( *(_BYTE *)(v11 + 30) || *(_BYTE *)(v11 + 29) )
      {
        if ( !*(_BYTE *)(v11 + 31) )
        {
LABEL_9:
          LODWORD(v15) = v7;
          goto LABEL_10;
        }
        ++v10;
      }
      else
      {
        ++v10;
        if ( (wil_details_FeatureStateCache_GetCachedFeatureEnabledState(*(unsigned int **)v11) & 1) == 0 )
          goto LABEL_9;
      }
    }
  }
  if ( v8 )
  {
    LODWORD(v15) = v7 ^ ((v8 & 0x3F) << 12);
    if ( DWORD2(v13) )
      HIDWORD(v15) = v9;
    else
LABEL_10:
      HIDWORD(v15) = *(_DWORD *)(a1 + 48);
  }
  else
  {
    HIDWORD(v15) = *(_DWORD *)(a1 + 48);
    LODWORD(v15) = v7 | ((*(_BYTE *)(a1 + 40) & 0x3F) << 12);
  }
  return v15;
}
