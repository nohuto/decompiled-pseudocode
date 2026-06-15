/*
 * XREFs of ??$ForEachActiveToken@V_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@TokenEnumerator@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@QEBAX$$QEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@Z @ 0x1800F0A24
 * Callers:
 *     ?PreTokenAcquisitionCallback@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioResourceManager@@AEBVTokenEnumerator@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@PEA_N@Z @ 0x1800F215C (-PreTokenAcquisitionCallback@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioRe.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180054958 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@Z @ 0x1800F0BEC (--$ForEachActiveToken_no_lock@AEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@-$TokenManager@VCB.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::TokenEnumerator::ForEachActiveToken<_lambda_7e14a330c860f44adc21b4f588a4bc9b_>(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rdi
  RTL_SRWLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(RTL_SRWLOCK **)(a1 + 8);
  if ( *(_BYTE *)a1 )
  {
    AcquireSRWLockShared(v2);
    v3 = v2;
    TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::ForEachActiveToken_no_lock<_lambda_7e14a330c860f44adc21b4f588a4bc9b_ &>(*(_QWORD *)(a1 + 8));
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v3);
  }
  else
  {
    TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::ForEachActiveToken_no_lock<_lambda_7e14a330c860f44adc21b4f588a4bc9b_ &>(v2);
  }
}
