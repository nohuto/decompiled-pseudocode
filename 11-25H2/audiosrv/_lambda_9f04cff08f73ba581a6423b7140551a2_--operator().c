/*
 * XREFs of _lambda_9f04cff08f73ba581a6423b7140551a2_::operator() @ 0x1800B78BC
 * Callers:
 *     wil::details::lambda_call__lambda_4eb20a21616a3254e45ae6c03be447d3___::_lambda_call__lambda_4eb20a21616a3254e45ae6c03be447d3___ @ 0x1800B734C (wil--details--lambda_call__lambda_4eb20a21616a3254e45ae6c03be447d3___--_lambda_call__lambda_4eb2.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800C06D8 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescript.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_9e8274ab863f63b0883b37bbcc41fb44___ @ 0x1800B6C48 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800B6C48.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_9f04cff08f73ba581a6423b7140551a2_::operator()(__int64 a1)
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
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      32LL,
      &WPP_376ec65dfd163502a9de53a59e5d86b2_Traceguids,
      (unsigned int)v3);
  }
  if ( v3 >= 0 )
  {
    v6 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_9e8274ab863f63b0883b37bbcc41fb44___(
      &v7,
      **(_QWORD ***)(a1 + 32),
      *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL),
      &v6);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v5);
  return 0LL;
}
