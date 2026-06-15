/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_a864ae59f54d482ad77cb6b00d8cf543___ @ 0x1800B6D1C
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_NPEAVCAudioSessionManager@@66PEAPEAUISaDeviceProxy@@@Z @ 0x18009FF94 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@P.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_a864ae59f54d482ad77cb6b00d8cf543___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *i; // r14
  __int64 (__fastcall *v8)(struct IDeviceGraphManager *, _QWORD, _QWORD, bool, _QWORD); // rsi
  char v9; // al
  int v10; // eax
  _QWORD *result; // rax

  for ( i = a2; i != a3; ++i )
  {
    v8 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, _QWORD, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                              + 32LL);
    v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 240LL))(*i);
    v10 = v8(g_DeviceGraphManager, *i, *a4, v9 == 0, 0LL);
    if ( v10 < 0 )
      AudSrvTraceLoggingErrorHelper(
        "CAudioResourceManager::GetSaDeviceForSharedStream::<lambda_a864ae59f54d482ad77cb6b00d8cf543>::operator ()",
        2253,
        v10);
  }
  result = a1;
  *a1 = a4;
  return result;
}
