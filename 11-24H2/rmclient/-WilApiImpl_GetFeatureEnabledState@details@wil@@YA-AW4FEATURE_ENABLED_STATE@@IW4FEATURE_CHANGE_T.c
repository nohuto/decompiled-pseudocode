/*
 * XREFs of ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18000C4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x18000C710 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180013030 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     wil_details_RtlQueryFeatureConfiguration @ 0x1800130D4 (wil_details_RtlQueryFeatureConfiguration.c)
 *     __security_check_cookie @ 0x18001C200 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details::WilApiImpl_GetFeatureEnabledState(wil::details *this, int a2, _DWORD *a3, int *a4)
{
  unsigned int v4; // esi
  char v5; // cl
  unsigned int v6; // edx
  volatile __int32 *v7; // rdi
  bool v9; // r12
  unsigned int v10; // ebx
  unsigned int v11; // r14d
  int v12; // eax
  char v13; // si
  int v14; // ecx
  int v16; // eax
  int v17; // [rsp+28h] [rbp-19h]
  __int64 v18; // [rsp+38h] [rbp-9h]
  __int64 v19; // [rsp+40h] [rbp-1h] BYREF
  __int64 v20; // [rsp+48h] [rbp+7h] BYREF
  __int64 v21; // [rsp+50h] [rbp+Fh] BYREF
  int v22; // [rsp+58h] [rbp+17h]
  __int64 v23; // [rsp+60h] [rbp+1Fh] BYREF
  int v24; // [rsp+68h] [rbp+27h]

  v4 = (unsigned int)this;
  v5 = a2;
  v6 = a2 & 0xFFFFFF7F;
  v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  v17 = 0;
  v9 = v6 - 2 <= 1;
  v18 = 0LL;
  v10 = 0;
  if ( v5 < 0 )
    v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  if ( (*v7 & 3) != 2 )
  {
    if ( (*v7 & 2) == 0 )
    {
      v11 = dword_18002FD6C;
      if ( !dword_18002FD6C )
        v11 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
      *a3 = 1;
      v19 = 0LL;
      v21 = 0LL;
      v22 = 0;
      v12 = wil_details_RtlQueryFeatureConfiguration(v4, !v9, &v19, &v21);
      if ( v12 )
      {
        if ( v12 == 279 )
        {
          v13 = 1;
          LODWORD(v18) = (HIDWORD(v21) >> 7) & 1;
        }
        else
        {
          v13 = 0;
          if ( v12 == -2147483614 )
          {
            if ( (_InterlockedExchange(v7, 6) & 4) == 0 )
              wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
                &wil::details::g_enabledStateManager,
                v7,
                0LL,
                v11);
LABEL_10:
            if ( v13 )
            {
              v14 = v18;
LABEL_12:
              v10 = v17;
              goto LABEL_13;
            }
            goto LABEL_21;
          }
        }
      }
      else
      {
        v13 = 1;
        v17 = (HIDWORD(v21) >> 4) & 3;
        HIDWORD(v18) = (HIDWORD(v21) >> 6) & 1;
        LODWORD(v18) = (HIDWORD(v21) >> 7) & 1;
      }
      _InterlockedExchange(v7, 7);
      goto LABEL_10;
    }
    *a3 = 1;
    v20 = 0LL;
    v23 = 0LL;
    v24 = 0;
    v16 = wil_details_RtlQueryFeatureConfiguration(v4, v6 - 2 > 1, &v20, &v23);
    if ( !v16 )
    {
      v10 = (HIDWORD(v23) >> 4) & 3;
      HIDWORD(v18) = (HIDWORD(v23) >> 6) & 1;
      v14 = (HIDWORD(v23) >> 7) & 1;
      goto LABEL_13;
    }
    if ( v16 == 279 )
    {
      v14 = (HIDWORD(v23) >> 7) & 1;
      goto LABEL_12;
    }
  }
LABEL_21:
  v14 = v18;
LABEL_13:
  if ( v14 )
    v10 |= 0x80u;
  if ( HIDWORD(v18) )
    v10 |= 0x40u;
  return v10;
}
