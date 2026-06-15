/*
 * XREFs of ?SetUserSelectedEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18012F494
 * Callers:
 *     s_epmSetCurrentEffectPackForEndpoint @ 0x180103080 (s_epmSetCurrentEffectPackForEndpoint.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800271C8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180055680 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ @ 0x18012BCE8 (-EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18012E6D0 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CEndpointCharacteristics::SetUserSelectedEffectPack(struct _RTL_CRITICAL_SECTION *this, IID *rclsid)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // esi
  LPOLESTR v10; // rax
  int v11; // eax
  LPOLESTR lpsz[2]; // [rsp+20h] [rbp-60h] BYREF
  PROPVARIANT v14[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+50h] [rbp-30h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v18; // [rsp+68h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+70h] [rbp-10h]
  char v20; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  (*(void (__fastcall **)(__int64, struct _RTL_CRITICAL_SECTION **, _QWORD))(*(_QWORD *)g_policyConfigInternal + 24LL))(
    g_policyConfigInternal,
    &v16,
    *(_QWORD *)&this[1].LockCount);
  v19 = this;
  v20 = 1;
  v4 = *(_QWORD *)&rclsid->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&rclsid->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v4 = *(_QWORD *)rclsid->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v4 )
  {
    *(IID *)v14 = *rclsid;
    v8 = CEndpointCharacteristics::SetCurrentEffectPackInternal(this, (struct _GUID *)v14);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x605,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v8);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)g_policyConfigInternal + 32LL))(
        g_policyConfigInternal,
        *(_QWORD *)&this[1].LockCount);
      v6 = v9;
      goto LABEL_17;
    }
    lpsz[0] = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)lpsz,
      0LL);
    if ( StringFromCLSID(rclsid, lpsz) >= 0 )
    {
      v14[0] = (PROPVARIANT)31;
      v15 = 0LL;
      v10 = lpsz[0];
      lpsz[0] = 0LL;
      v14[1] = v10;
      v11 = (*(__int64 (__fastcall **)(ULONG_PTR, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)this[1].SpinCount
                                                                                                + 48LL))(
              this[1].SpinCount,
              &PKEY_AudioEndpoint_UserSelectedEffectPack,
              v14);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1551LL,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v11);
      PropVariantClear(v14);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)lpsz);
LABEL_16:
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)g_policyConfigInternal + 32LL))(
      g_policyConfigInternal,
      *(_QWORD *)&this[1].LockCount);
    v6 = 0;
    goto LABEL_17;
  }
  v5 = CEndpointCharacteristics::EnsureRwFxPropertyStoreExists((CEndpointCharacteristics *)this);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *(_OWORD *)pvar = 0LL;
    v18 = 0LL;
    LOWORD(pvar[0]) = 19;
    LODWORD(pvar[1]) = 1;
    v7 = (*(__int64 (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)&this[2].LockCount + 48LL))(
           *(_QWORD *)&this[2].LockCount,
           &PKEY_AudioEndpoint_Disable_SysFx,
           pvar);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1537LL,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v7);
    PropVariantClear(pvar);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5FA,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v5);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)g_policyConfigInternal + 32LL))(
    g_policyConfigInternal,
    *(_QWORD *)&this[1].LockCount);
LABEL_17:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
  return v6;
}
