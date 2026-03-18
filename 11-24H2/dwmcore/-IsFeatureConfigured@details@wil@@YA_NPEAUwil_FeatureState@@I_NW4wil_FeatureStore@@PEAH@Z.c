/*
 * XREFs of ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x1801FF5EC
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1801FF580 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 * Callees:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1801FF6BC (wil_RtlStagingConfig_QueryFeatureState.c)
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1801FF7DC (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18020541C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1802139B0 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 */

bool __fastcall wil::details::IsFeatureConfigured(wil::details *a1, __int64 a2, unsigned __int8 a3, int a4, _DWORD *a5)
{
  unsigned int v5; // esi
  unsigned int v6; // ebp
  volatile __int32 *v7; // rbx
  unsigned int v10; // eax
  unsigned int v11; // edi
  bool v12; // si
  char v13; // al
  RTL_SRWLOCK *v14; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v15[2]; // [rsp+28h] [rbp-30h] BYREF
  volatile __int32 *v16; // [rsp+30h] [rbp-28h]
  int v17; // [rsp+78h] [rbp+20h] BYREF

  v5 = a3;
  v6 = a2;
  v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  if ( a4 )
    v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  if ( (*v7 & 3) == 2 )
    return 0;
  if ( (*v7 & 2) != 0 )
  {
    *a5 = 1;
    return (unsigned int)wil_RtlStagingConfig_QueryFeatureState(a1, a2, a3, 0LL) != 0;
  }
  else
  {
    v10 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v17 = 0;
    v11 = v10;
    *a5 = 1;
    v12 = (unsigned int)wil_RtlStagingConfig_QueryFeatureState(a1, v6, v5, &v17) != 0;
    v13 = _InterlockedExchange(v7, (v17 != 0) + 6);
    if ( !v17 && (v13 & 4) == 0 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&stru_1803F97D0);
      v14 = &stru_1803F97D0;
      if ( !v11
        || v11 != dword_1803F97E4
        || (v15[1] = 0,
            v15[0] = 0,
            v16 = v7,
            !wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&unk_1803F9818, v15, 0x10uLL)) )
      {
        _InterlockedAnd(v7, 0xFFFFF7C1);
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v14);
    }
    return v12;
  }
}
