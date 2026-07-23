/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x1403F9E88
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1403F9D78 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_AreDependenciesEnabled @ 0x14053A33C (wil_details_AreDependenciesEnabled.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x140AA307C (wil_RtlStagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v3; // al
  __int64 v4; // rdx
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // r14d
  int v13; // ecx
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp+8h]

  v3 = *(_BYTE *)(a1 + 28) - 2;
  v4 = *(unsigned int *)(a1 + 24);
  v6 = 1;
  *a2 = 1;
  v15 = 0LL;
  v16 = 0LL;
  v7 = wil_RtlStagingConfig_QueryFeatureState(&v15, v4, v3 <= 1u, 0LL);
  HIDWORD(v17) = 0;
  v8 = (unsigned __int8)v15 & (unsigned __int8)-(v7 != 0) & 3;
  v9 = ((_DWORD)v16 != 0 ? 0x400 : 0) | (HIDWORD(v16) != 0 ? 0x800 : 0) | (v8 << 7);
  if ( v8 )
  {
    v11 = 0;
    if ( (_DWORD)v15 == 2 )
      v11 = 64;
    v10 = v11 | v9;
  }
  else
  {
    v10 = v9 | (*(_BYTE *)(a1 + 31) != 0 ? 0x40 : 0);
  }
  if ( (v10 & 0xC00) == 0xC00 )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( (v10 & 0x40) == 0 )
    {
LABEL_17:
      v6 = 0;
      goto LABEL_18;
    }
  }
  if ( *(_QWORD *)(a1 + 32) )
    v13 = wil_details_AreDependenciesEnabled(a1);
  else
    v13 = 1;
  if ( v12 && !v13 )
    v10 &= ~0x400u;
  if ( (v10 & 0x40) == 0 || !v13 )
    goto LABEL_17;
LABEL_18:
  LODWORD(v17) = v6 | v10 & 0xFFFFFFFE;
  return v17;
}
