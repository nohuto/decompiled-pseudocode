/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x14009FDA0
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14009FC2C (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14009FC2C (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x140142418 (wil_RtlStagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  _BOOL8 v5; // r8
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // edx
  int v10; // ebx
  unsigned int ***v11; // rdi
  unsigned int **v12; // rcx
  int v13; // eax
  BOOL v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp+8h]
  __int64 v21; // [rsp+58h] [rbp+10h]

  v3 = *(unsigned int *)(a1 + 24);
  v5 = (unsigned __int8)(*(_BYTE *)(a1 + 28) - 2) <= 1u;
  *a2 = 1;
  v19 = 0LL;
  v18 = 0LL;
  v6 = wil_RtlStagingConfig_QueryFeatureState(&v18, v3, v5);
  HIDWORD(v20) = 0;
  v7 = (unsigned __int8)v18 & (unsigned __int8)-(v6 != 0) & 3;
  if ( v7 )
  {
    v8 = 0;
    if ( (_DWORD)v18 == 2 )
      v8 = 64;
  }
  else
  {
    v8 = *(_BYTE *)(a1 + 31) != 0 ? 0x40 : 0;
  }
  v9 = v8 | ((_DWORD)v19 != 0 ? 0x400 : 0) | (HIDWORD(v19) != 0 ? 0x800 : 0) | (v7 << 7);
  v10 = v9 ^ (v9 >> 6) & 1;
  LODWORD(v20) = v10;
  if ( (v8 & 0x40) != 0 )
  {
    v11 = *(unsigned int ****)(a1 + 32);
    if ( v11 )
    {
      LODWORD(v20) = v9 ^ (v9 >> 6) & 1;
      do
      {
        v12 = *v11;
        if ( !*v11 )
          break;
        if ( *((_BYTE *)v12 + 30) || *((_BYTE *)v12 + 29) )
        {
          v15 = (v10 & 1) != 0 && *((_BYTE *)v12 + 31);
          v16 = v10 & 0xFFFFFFFE;
        }
        else
        {
          v21 = **v12;
          if ( (v21 & 2) != 0 )
            v13 = **v12;
          else
            LOBYTE(v13) = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
                            (volatile signed __int32 *)*v12,
                            v21,
                            (__int64)v12);
          v14 = ((unsigned __int8)v10 & (unsigned __int8)v13 & 1) != 0;
          v15 = v10 & 0xFFFFFFFE;
          v16 = v14;
        }
        v10 = v15 | v16;
        ++v11;
        LODWORD(v20) = v10;
      }
      while ( (v10 & 1) != 0 );
    }
  }
  return v20;
}
