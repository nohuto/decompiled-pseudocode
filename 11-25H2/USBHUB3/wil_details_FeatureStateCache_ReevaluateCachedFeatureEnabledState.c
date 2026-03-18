/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14001029C
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14001029C (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_IsEnabledFallback @ 0x14001056C (wil_details_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14001029C (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // r12d
  signed __int32 v5; // ebx
  char v7; // cl
  BOOL v8; // r14d
  bool v9; // cf
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // edi
  int v13; // edx
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // edi
  int v20; // r9d
  unsigned int v21; // ecx
  int v22; // eax
  int v23; // edi
  unsigned int ***v24; // rsi
  unsigned int **v25; // rcx
  unsigned __int8 v26; // al
  BOOL v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // edi
  signed __int32 v30; // eax
  char i; // cl
  signed __int32 v32; // esi
  __int64 v35; // [rsp+20h] [rbp-50h]
  __int64 v36; // [rsp+28h] [rbp-48h]
  __int64 v37; // [rsp+30h] [rbp-40h] BYREF
  __int128 v38; // [rsp+38h] [rbp-38h]
  __int64 v39; // [rsp+48h] [rbp-28h]
  __int64 v40; // [rsp+50h] [rbp-20h] BYREF
  int v41; // [rsp+58h] [rbp-18h]

  v3 = 0;
  v5 = a2;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    v3 = g_wil_details_ensureSubscribedToFeatureConfigurationChanges(a1);
  v7 = *(_BYTE *)(a3 + 28) - 2;
  v38 = 0LL;
  v8 = 1;
  v9 = v7 == 0;
  v10 = v7 == 1;
  v11 = *(unsigned int *)(a3 + 24);
  v37 = 0LL;
  v12 = 0;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0;
  v13 = RtlQueryFeatureConfiguration(v11, !v9 && !v10, &v37, &v40, a2);
  if ( v13 )
  {
    v15 = 0;
    v16 = 0;
    v10 = v13 == 279;
    v14 = v38;
    if ( v10 )
    {
      v12 = 1;
      v17 = ((HIDWORD(v40) >> 7) & 1) << 10;
      goto LABEL_9;
    }
  }
  else
  {
    v12 = 1;
    v14 = (HIDWORD(v40) >> 4) & 3;
    v15 = (HIDWORD(v40) >> 7) & 1;
    LODWORD(v38) = v14;
    v16 = (HIDWORD(v40) >> 6) & 1;
  }
  v17 = v15 << 10;
  if ( v16 )
  {
    v18 = 2048;
    goto LABEL_10;
  }
LABEL_9:
  v18 = 0;
LABEL_10:
  v19 = -v12;
  v20 = v18 | v17 | (((unsigned __int8)v14 & (unsigned __int8)-(v19 != 0) & 3) << 7);
  if ( ((unsigned __int8)v14 & (unsigned __int8)-(v19 != 0) & 3) != 0 )
  {
    v22 = 0;
    if ( v14 == 2 )
      v22 = 64;
    v21 = v22 | v20;
  }
  else
  {
    v21 = v20 | (*(_BYTE *)(a3 + 31) != 0 ? 0x40 : 0);
  }
  v23 = v21 ^ (v21 ^ (v21 >> 6)) & 1;
  if ( (v21 & 0x40) != 0 )
  {
    v24 = *(unsigned int ****)(a3 + 32);
    if ( v24 )
    {
      do
      {
        v25 = *v24;
        if ( !*v24 )
          break;
        if ( *((_BYTE *)v25 + 30) || *((_BYTE *)v25 + 29) )
        {
          v28 = (v23 & 1) != 0 && *((_BYTE *)v25 + 31);
          v29 = v23 & 0xFFFFFFFE;
        }
        else
        {
          v36 = **v25;
          v26 = (v36 & 2) != 0
              ? **v25
              : wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*v25, v36, v25);
          v27 = ((unsigned __int8)v23 & v26 & 1) != 0;
          v28 = v23 & 0xFFFFFFFE;
          v29 = v27;
        }
        v23 = v28 | v29;
        ++v24;
      }
      while ( (v23 & 1) != 0 );
    }
  }
  if ( !*(_BYTE *)(a3 + 28) )
    v8 = v3 != 0;
  v30 = v5;
  for ( i = v5; ; i = v30 )
  {
    LODWORD(v35) = v30;
    v32 = v30;
    if ( v8 )
    {
      LODWORD(v35) = v30;
      if ( (i & 2) == 0 )
      {
        v32 = v30 ^ ((unsigned __int16)v30 ^ (unsigned __int16)v23) & 0x9C1 | 2;
        LODWORD(v35) = v32;
      }
    }
    if ( (v5 & 4) == 0 )
    {
      v32 = v32 ^ ((unsigned __int16)v23 ^ (unsigned __int16)v32) & 0x400 | 4;
      LODWORD(v35) = v32;
    }
    v30 = _InterlockedCompareExchange(a1, v32, v5);
    if ( v5 == v30 )
      break;
    v5 = v30;
  }
  if ( (v5 & 4) == 0 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    g_wil_details_subscribeFeatureStateCacheToConfigurationChanges(a1, *(unsigned __int8 *)(a3 + 28), v3);
  if ( !v8 )
    LODWORD(v35) = v32 ^ ((unsigned __int16)v32 ^ (unsigned __int16)v23) & 0x9C1;
  return v35;
}
