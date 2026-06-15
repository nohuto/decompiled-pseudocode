/*
 * XREFs of _lambda_598bf403e3c92612e01cf389e2f05c9b_::operator() @ 0x1800B6F30
 * Callers:
 *     wil::details::lambda_call__lambda_1e28ec473f0cb29a9702bde7b7d50cfc___::_lambda_call__lambda_1e28ec473f0cb29a9702bde7b7d50cfc___ @ 0x1800B6790 (wil--details--lambda_call__lambda_1e28ec473f0cb29a9702bde7b7d50cfc___--_lambda_call__lambda_1e28.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800BF408 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescript.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_0ca2ce1a76ecae1f15d13965c996d09b___ @ 0x1800B5D10 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800B5D10.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_598bf403e3c92612e01cf389e2f05c9b_::operator()(__int64 a1)
{
  _QWORD *v2; // rdx
  int v3; // ebx
  __int64 v5; // [rsp+68h] [rbp+7h] BYREF
  __int64 v6; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v7; // [rsp+78h] [rbp+17h] BYREF
  _BYTE v8[40]; // [rsp+80h] [rbp+1Fh] BYREF

  v5 = 0LL;
  memset(v8, 0, sizeof(v8));
  v8[12] = 1;
  *(_DWORD *)&v8[8] = **(_DWORD **)a1;
  *(_QWORD *)v8 = 0LL;
  v2 = *(_QWORD **)(a1 + 8);
  *(_OWORD *)&v8[20] = *(_OWORD *)(*v2 + 48LL);
  *(_DWORD *)&v8[16] = *(_DWORD *)(*v2 + 8LL);
  v3 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, _QWORD, __int64, _DWORD, _BYTE *, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
         g_DeviceGraphManager,
         **(_QWORD **)(a1 + 16),
         *v2,
         2LL,
         0,
         v8,
         *(_QWORD *)(a1 + 24),
         0LL,
         0LL,
         &v5);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      31LL,
      &WPP_98fe4f38b3823383e11c83435e5ea7e3_Traceguids,
      (unsigned int)v3);
  }
  if ( v3 >= 0 )
  {
    v6 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_0ca2ce1a76ecae1f15d13965c996d09b___(
      &v7,
      **(_QWORD ***)(a1 + 32),
      *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL),
      &v6);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v5);
  return 0LL;
}
