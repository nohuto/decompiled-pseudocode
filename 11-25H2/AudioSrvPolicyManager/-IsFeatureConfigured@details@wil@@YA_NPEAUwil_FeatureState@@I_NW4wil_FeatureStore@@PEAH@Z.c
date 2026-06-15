/*
 * XREFs of ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x180023C68
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x180026330 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180022778 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1800231A8 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180026A2C (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     wil_QueryFeatureState @ 0x1800270F0 (wil_QueryFeatureState.c)
 */

bool __fastcall wil::details::IsFeatureConfigured(wil::details *a1, int a2, unsigned __int8 a3, int a4, __int64 a5)
{
  int v5; // esi
  volatile __int32 *v7; // rbx
  int v8; // r14d
  volatile __int32 v9; // r9d
  unsigned int v11; // edi
  int v12; // r9d
  bool v13; // si
  char v14; // dl
  RTL_SRWLOCK *v15; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v16[2]; // [rsp+38h] [rbp-30h] BYREF
  volatile __int32 *v17; // [rsp+40h] [rbp-28h]
  int v18; // [rsp+88h] [rbp+20h] BYREF

  v5 = a3;
  v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  v8 = (int)a1;
  if ( a4 )
    v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  v9 = *v7;
  if ( (*v7 & 3) == 2 )
    return 0;
  if ( (v9 & 2) != 0 )
    return (unsigned int)wil_QueryFeatureState((_DWORD)a1, a2, a3, v9, 0LL, a5) != 0;
  v18 = 1;
  v11 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
  v13 = (unsigned int)wil_QueryFeatureState(v8, a2, v5, v12, (__int64)&v18, a5) != 0;
  v14 = _InterlockedExchange(v7, (v18 != 0) + 6);
  if ( !v18 && (v14 & 4) == 0 && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&SRWLock);
    v15 = &SRWLock;
    if ( !v11
      || v11 != dword_180066EA4
      || (v16[1] = 0,
          v16[0] = 0,
          v17 = v7,
          !wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&unk_180066ED8, v16, 0x10uLL)) )
    {
      _InterlockedAnd(v7, 0xFFFFF7C1);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v15);
  }
  return v13;
}
