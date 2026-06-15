/*
 * XREFs of ?PreTokenAcquisitionCallback@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioResourceManager@@AEBVTokenEnumerator@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@PEA_N@Z @ 0x1800ED0FC
 * Callers:
 *     ??$AcquireToken@PEAUIBtAudioResourceManager@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAJAEBQEAUIBtAudioResourceManager@@_NPEAPEAUIUnknown@@PEA_N@Z @ 0x1800EB4CC (--$AcquireToken@PEAUIBtAudioResourceManager@@@-$TokenManager@VCBluetoothAudioEndpointResourceMan.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18006209C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$ForEachActiveToken@V_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@TokenEnumerator@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@QEBAX$$QEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@Z @ 0x1800EBA74 (--$ForEachActiveToken@V_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@TokenEnumerator@-$TokenManage.c)
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_16d7fa4f7751c846da917dbc52748634_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_16d7fa4f7751c846da917dbc52748634_@@@Z @ 0x1800EBADC (--$ForEachActiveToken_no_lock@AEAV_lambda_16d7fa4f7751c846da917dbc52748634_@@@-$TokenManager@VCB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *CBluetoothAudioEndpointResourceManagerProvider::PreTokenAcquisitionCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  void *v4; // rdx
  RTL_SRWLOCK *v5; // rdi
  void *v6; // rdx
  _BYTE *result; // rax
  RTL_SRWLOCK *v8; // [rsp+38h] [rbp+10h] BYREF
  _BYTE *v9; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _BYTE *);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2) )
  {
    v5 = *(RTL_SRWLOCK **)(a3 + 8);
    if ( *(_BYTE *)a3 )
    {
      AcquireSRWLockShared(v5);
      v8 = v5;
      TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::ForEachActiveToken_no_lock<_lambda_16d7fa4f7751c846da917dbc52748634_ &>(
        *(_QWORD *)(a3 + 8),
        v6);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v8);
    }
    else
    {
      TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::ForEachActiveToken_no_lock<_lambda_16d7fa4f7751c846da917dbc52748634_ &>(
        (__int64)v5,
        v4);
    }
  }
  else
  {
    va_copy((va_list)v8, va);
    TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::TokenEnumerator::ForEachActiveToken<_lambda_7e14a330c860f44adc21b4f588a4bc9b_>(a3);
  }
  result = v9;
  *v9 = 0;
  return result;
}
