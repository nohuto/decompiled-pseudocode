/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x14001A4AC
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14001A338 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x140019D5C (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_details_AreDependenciesEnabled @ 0x140019E28 (wil_details_AreDependenciesEnabled.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v2; // al
  int v4; // esi
  unsigned int v5; // edx
  int FeatureState; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // ebx
  int v10; // eax
  int v11; // r14d
  BOOL v12; // ecx
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp+8h]

  v2 = *(_BYTE *)(a1 + 28) - 2;
  v14 = 0LL;
  v4 = 1;
  *a2 = 1;
  v5 = *(_DWORD *)(a1 + 24);
  v15 = 0LL;
  FeatureState = wil_RtlStagingConfig_QueryFeatureState((__int64)&v14, v5, v2 <= 1u);
  HIDWORD(v16) = 0;
  v7 = (unsigned __int8)v14 & (unsigned __int8)-(FeatureState != 0) & 3;
  v8 = ((_DWORD)v15 != 0 ? 0x400 : 0) | (HIDWORD(v15) != 0 ? 0x800 : 0) | (v7 << 7);
  if ( v7 )
  {
    v10 = 0;
    if ( (_DWORD)v14 == 2 )
      v10 = 64;
    v9 = v10 | v8;
  }
  else
  {
    v9 = v8 | (*(_BYTE *)(a1 + 31) != 0 ? 0x40 : 0);
  }
  if ( (v9 & 0xC00) == 0xC00 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    if ( (v9 & 0x40) == 0 )
    {
LABEL_17:
      v4 = 0;
      goto LABEL_18;
    }
  }
  if ( *(_QWORD *)(a1 + 32) )
    v12 = wil_details_AreDependenciesEnabled(a1);
  else
    v12 = 1;
  if ( v11 && !v12 )
    v9 &= ~0x400u;
  if ( (v9 & 0x40) == 0 || !v12 )
    goto LABEL_17;
LABEL_18:
  LODWORD(v16) = v4 | v9 & 0xFFFFFFFE;
  return v16;
}
