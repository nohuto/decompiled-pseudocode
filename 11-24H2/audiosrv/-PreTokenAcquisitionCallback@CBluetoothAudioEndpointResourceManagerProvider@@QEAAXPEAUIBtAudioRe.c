/*
 * XREFs of ?PreTokenAcquisitionCallback@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioResourceManager@@AEBVTokenEnumerator@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@PEA_N@Z @ 0x1800F215C
 * Callers:
 *     ??$AcquireToken@PEAUIBtAudioResourceManager@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAJAEBQEAUIBtAudioResourceManager@@_NPEAPEAUIUnknown@@PEA_N@Z @ 0x1800F047C (--$AcquireToken@PEAUIBtAudioResourceManager@@@-$TokenManager@VCBluetoothAudioEndpointResourceMan.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180054958 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$ForEachActiveToken@V_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@TokenEnumerator@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@QEBAX$$QEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@Z @ 0x1800F0A24 (--$ForEachActiveToken@V_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@TokenEnumerator@-$TokenManage.c)
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_0fa234ae80d704de24dec8d2b8264a81_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_0fa234ae80d704de24dec8d2b8264a81_@@@Z @ 0x1800F0A8C (--$ForEachActiveToken_no_lock@AEAV_lambda_0fa234ae80d704de24dec8d2b8264a81_@@@-$TokenManager@VCB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *CBluetoothAudioEndpointResourceManagerProvider::PreTokenAcquisitionCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  int v4; // ebx
  RTL_SRWLOCK *v5; // rsi
  _BYTE *result; // rax
  char v7; // [rsp+20h] [rbp-30h] BYREF
  int v8; // [rsp+24h] [rbp-2Ch] BYREF
  RTL_SRWLOCK *v9; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+30h] [rbp-20h] BYREF
  va_list v11; // [rsp+78h] [rbp+28h] BYREF
  _BYTE *v12; // [rsp+88h] [rbp+38h] BYREF
  va_list va; // [rsp+88h] [rbp+38h]
  va_list va1; // [rsp+90h] [rbp+40h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _BYTE *);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 104LL))(a2) )
  {
    v8 = 100;
    v4 = 3;
    v7 = 0;
    do
    {
      --v4;
      LOBYTE(v11) = 0;
      v10[0] = &v7;
      v10[1] = &v8;
      v10[2] = &v11;
      v5 = *(RTL_SRWLOCK **)(a3 + 8);
      if ( *(_BYTE *)a3 )
      {
        AcquireSRWLockShared(v5);
        v9 = v5;
        TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::ForEachActiveToken_no_lock<_lambda_0fa234ae80d704de24dec8d2b8264a81_ &>(
          *(_QWORD *)(a3 + 8),
          (__int64)v10);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v9);
      }
      else
      {
        TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::ForEachActiveToken_no_lock<_lambda_0fa234ae80d704de24dec8d2b8264a81_ &>(
          (__int64)v5,
          (__int64)v10);
      }
      if ( !(_BYTE)v11 )
        break;
      if ( v4 < 3 )
        v7 = 1;
    }
    while ( v4 > 0 );
  }
  else
  {
    va_copy(v11, va);
    TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::TokenEnumerator::ForEachActiveToken<_lambda_7e14a330c860f44adc21b4f588a4bc9b_>(a3);
  }
  result = v12;
  *v12 = 0;
  return result;
}
