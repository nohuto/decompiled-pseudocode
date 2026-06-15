/*
 * XREFs of ??$ForEachActiveToken_no_lock@AEAV_lambda_16d7fa4f7751c846da917dbc52748634_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_16d7fa4f7751c846da917dbc52748634_@@@Z @ 0x1800EBADC
 * Callers:
 *     ?PreTokenAcquisitionCallback@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioResourceManager@@AEBVTokenEnumerator@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@PEA_N@Z @ 0x1800ED0FC (-PreTokenAcquisitionCallback@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioRe.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A43C4 (--1-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VBluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManagerProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800EC464 (--0-$com_ptr_t@VBluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManager.c)
 *     ??R_lambda_16d7fa4f7751c846da917dbc52748634_@@QEBA@_KPEAVBluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManagerProvider@@@Z @ 0x1800EC95C (--R_lambda_16d7fa4f7751c846da917dbc52748634_@@QEBA@_KPEAVBluetoothAudioResourceManagerTokenConte.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1800EDB80 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::ForEachActiveToken_no_lock<_lambda_16d7fa4f7751c846da917dbc52748634_ &>(
        __int64 a1,
        void *a2)
{
  struct IWeakReference **v2; // rbx
  struct IWeakReference **v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *(struct IWeakReference ***)(a1 + 8);
  v3 = *(struct IWeakReference ***)(a1 + 16);
  while ( v2 != v3 )
  {
    v7 = 0LL;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v7);
    if ( (int)wil::details::weak_query_policy::query(*v2, &GUID_00000000_0000_0000_c000_000000000046, &v7) >= 0 )
    {
      wil::com_ptr_t<CBluetoothAudioEndpointResourceManagerProvider::BluetoothAudioResourceManagerTokenContext,wil::err_returncode_policy>::com_ptr_t<CBluetoothAudioEndpointResourceManagerProvider::BluetoothAudioResourceManagerTokenContext,wil::err_returncode_policy>(
        &v6,
        (char *)v7 + 48);
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v7);
      _lambda_16d7fa4f7751c846da917dbc52748634_::operator()(v5, v4, v6);
      wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>(&v6);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v7);
    ++v2;
  }
}
