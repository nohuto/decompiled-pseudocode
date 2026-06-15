/*
 * XREFs of ?TsSessionIdIsStreamCategoryDucked@@YA_NKPEBGKH@Z @ 0x18003FB90
 * Callers:
 *     ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x18003C070 (-IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_00.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x1800098F0 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18000D6B0 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180013EA0 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?IsStreamCategoryDucked@CStreamClassPolicyGains@@QEAAHKH@Z @ 0x180043500 (-IsStreamCategoryDucked@CStreamClassPolicyGains@@QEAAHKH@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall TsSessionIdIsStreamCategoryDucked(__int64 a1, const unsigned __int16 *a2, unsigned int a3, int a4)
{
  DWORD v7; // ebx
  char v8; // di
  CStreamClassPolicyGains *v9; // rbx
  CStreamClassPolicyGains *v11; // [rsp+20h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v12[2]; // [rsp+28h] [rbp-10h] BYREF

  v7 = a1;
  CWindowsPolicyManager::Lock(a1, v12);
  v8 = 0;
  v11 = 0LL;
  if ( (int)TsSessionFromSessionId(v7, 1, &v11) >= 0 )
  {
    v9 = v11;
    v11 = 0LL;
    CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint(
      (CStreamClassPolicyGains *)((char *)v9 + 72),
      a2,
      &v11);
    if ( (unsigned int)CStreamClassPolicyGains::IsStreamCategoryDucked(v11, a3, a4)
      || (unsigned int)CStreamClassPolicyGains::IsStreamCategoryDucked(
                         (CStreamClassPolicyGains *)((char *)v9 + 136),
                         a3,
                         a4) )
    {
      v8 = 1;
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v12);
  return v8;
}
