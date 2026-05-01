/*
 * XREFs of ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x1801703F4
 * Callers:
 *     ?WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x180170360 (-WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18007F17C (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18010DBEC (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     wil_QueryFeatureState @ 0x18028D94C (wil_QueryFeatureState.c)
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x18028DA88 (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::details::IsFeatureConfigured(__int64 a1, unsigned int a2, unsigned __int8 a3, int a4, _DWORD *a5)
{
  char v5; // bl
  int v6; // r12d
  volatile __int32 *v7; // r14
  wil::details *v10; // rcx
  __int64 (*NtDllProcedureAddress)(void); // rax
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // r15d
  int v16; // r9d
  bool v17; // di
  char v18; // cl
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-28h]
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  int v22; // [rsp+48h] [rbp-18h]

  v5 = 0;
  v6 = a3;
  v20 = a2;
  v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  if ( a4 )
    v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  v10 = (wil::details *)*(unsigned int *)v7;
  if ( (*v7 & 3) == 2 )
    return 0;
  if ( ((unsigned __int8)v10 & 2) != 0 )
  {
    *a5 = 1;
    v21 = 0LL;
    v22 = 0;
    NtDllProcedureAddress = (__int64 (*)(void))g_wil_details_pfnRtlQueryFeatureConfiguration;
    v19 = 0LL;
    if ( !g_wil_details_pfnRtlQueryFeatureConfiguration )
    {
      NtDllProcedureAddress = wil_details_GetNtDllProcedureAddress("RtlQueryFeatureConfiguration");
      g_wil_details_pfnRtlQueryFeatureConfiguration = (__int64)NtDllProcedureAddress;
      if ( !NtDllProcedureAddress )
        return v5;
    }
    v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *, __int64 *))NtDllProcedureAddress)(a2, v6 ^ 1u, &v19, &v21);
    if ( v13 )
    {
      if ( v13 != 279 )
        return v5;
      *(_DWORD *)(a1 + 16) = (HIDWORD(v21) >> 7) & 1;
    }
    else
    {
      v14 = HIDWORD(v21);
      *(_DWORD *)a1 = (HIDWORD(v21) >> 4) & 3;
      *(_BYTE *)(a1 + 4) = BYTE1(v14) & 0x3F;
      *(_DWORD *)(a1 + 12) = v22;
      *(_DWORD *)(a1 + 8) = (unsigned __int16)v14 >> 14;
      *(_DWORD *)(a1 + 20) = (v14 >> 6) & 1;
      *(_DWORD *)(a1 + 16) = (v14 >> 7) & 1;
    }
    return 1;
  }
  LODWORD(v19) = 1;
  v15 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(v10);
  v17 = (unsigned int)wil_QueryFeatureState(a1, v20, v6, v16, (__int64)&v19, (__int64)a5) != 0;
  v18 = _InterlockedExchange(v7, ((_DWORD)v19 != 0) + 6);
  if ( !(_DWORD)v19 && (v18 & 4) == 0 )
    wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
      &wil::details::g_enabledStateManager,
      v7,
      0,
      v15);
  return v17;
}
