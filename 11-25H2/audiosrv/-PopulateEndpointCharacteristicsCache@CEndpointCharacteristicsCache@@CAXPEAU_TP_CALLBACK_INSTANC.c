/*
 * XREFs of ?PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18006DC10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800263DC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$emplace_back@AEAPEAVCEndpointCharacteristics@@@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAVCEndpointCharacteristics@@@Z @ 0x180127A50 (--$emplace_back@AEAPEAVCEndpointCharacteristics@@@-$vector@V-$com_ptr_t@VCEndpointCharacteristic.c)
 *     ?EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXXZ @ 0x180132680 (-EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache(
        PTP_CALLBACK_INSTANCE Instance,
        _BYTE *Context,
        PTP_WORK Work)
{
  int v4; // eax
  unsigned int i; // edi
  _QWORD *v6; // rdi
  _QWORD *j; // rbx
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  LPVOID v9; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h] BYREF
  __int128 v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp-8h]
  LPVOID v13; // [rsp+88h] [rbp+28h] BYREF
  LPVOID pv; // [rsp+98h] [rbp+38h] BYREF

  if ( CoInitializeEx(0LL, 0) >= 0 )
  {
    v11 = 0LL;
    v12 = 0LL;
    if ( !Context[104] )
    {
      v8 = 0LL;
      if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, _QWORD, __int64 *))g_DeviceEnumerator->lpVtbl->GetDefaultAudioEndpoint)(
             g_DeviceEnumerator,
             0LL,
             0LL,
             &v8) >= 0 )
      {
        pv = 0LL;
        if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v8 + 40LL))(v8, &pv) >= 0 )
        {
          v13 = 0LL;
          (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, LPVOID *))(*(_QWORD *)Context + 24LL))(
            Context,
            pv,
            0LL,
            1LL,
            &v13);
          if ( v13 )
            std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::emplace_back<CEndpointCharacteristics * &>(
              &v11,
              &v13);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
        }
        CoTaskMemFree(pv);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
      if ( !Context[104] )
      {
        pv = 0LL;
        if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, __int64, _QWORD, LPVOID *))g_DeviceEnumerator->lpVtbl->GetDefaultAudioEndpoint)(
               g_DeviceEnumerator,
               1LL,
               0LL,
               &pv) >= 0 )
        {
          v13 = 0LL;
          if ( (*(int (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)pv + 40LL))(pv, &v13) >= 0 )
          {
            v10 = 0LL;
            (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)Context + 24LL))(
              Context,
              v13,
              0LL,
              1LL,
              &v10);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
          }
          CoTaskMemFree(v13);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pv);
      }
    }
    if ( !Context[104] )
    {
      v8 = 0LL;
      if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64, __int64 *))g_DeviceEnumerator->lpVtbl->GetDefaultAudioEndpoint)(
             g_DeviceEnumerator,
             0LL,
             2LL,
             &v8) >= 0 )
      {
        pv = 0LL;
        if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v8 + 40LL))(v8, &pv) >= 0 )
        {
          v13 = 0LL;
          (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, LPVOID *))(*(_QWORD *)Context + 24LL))(
            Context,
            pv,
            0LL,
            1LL,
            &v13);
          if ( v13 )
            std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::emplace_back<CEndpointCharacteristics * &>(
              &v11,
              &v13);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
        }
        CoTaskMemFree(pv);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
      if ( !Context[104] )
      {
        pv = 0LL;
        if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, __int64, __int64, LPVOID *))g_DeviceEnumerator->lpVtbl->GetDefaultAudioEndpoint)(
               g_DeviceEnumerator,
               1LL,
               2LL,
               &pv) >= 0 )
        {
          v13 = 0LL;
          if ( (*(int (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)pv + 40LL))(pv, &v13) >= 0 )
          {
            v10 = 0LL;
            (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)Context + 24LL))(
              Context,
              v13,
              0LL,
              1LL,
              &v10);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
          }
          CoTaskMemFree(v13);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pv);
        if ( !Context[104] )
        {
          v8 = 0LL;
          v4 = PerformEndpointDiscoveryForUnpluggedEndpoints();
          LODWORD(v13) = 0;
          if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, __int64, _QWORD, __int64 *))g_DeviceEnumerator->lpVtbl->EnumAudioEndpoints)(
                 g_DeviceEnumerator,
                 2LL,
                 v4 != 0 ? 9 : 1,
                 &v8) >= 0
            && (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v8 + 24LL))(v8, &v13) >= 0 )
          {
            for ( i = 0; !Context[104] && i < (unsigned int)v13; ++i )
            {
              v10 = 0LL;
              if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v8 + 32LL))(v8, i, &v10) >= 0 )
              {
                v9 = 0LL;
                if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v10 + 40LL))(v10, &v9) >= 0 )
                {
                  pv = 0LL;
                  (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, LPVOID *))(*(_QWORD *)Context + 24LL))(
                    Context,
                    v9,
                    0LL,
                    1LL,
                    &pv);
                  if ( pv )
                    std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::emplace_back<CEndpointCharacteristics * &>(
                      &v11,
                      &pv);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pv);
                }
                CoTaskMemFree(v9);
              }
              if ( v10 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            }
          }
          if ( v8 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
      }
    }
    v6 = (_QWORD *)*((_QWORD *)&v11 + 1);
    for ( j = (_QWORD *)v11; j != v6; ++j )
    {
      if ( !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*j + 56LL))(*j) )
        CSpatialProperties::EnsureSpatialSettingsAreInitialized((LPCRITICAL_SECTION)(*j + 448LL));
    }
    CoUninitialize();
    if ( (_QWORD)v11 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
        (__int64 *)v11,
        *((__int64 **)&v11 + 1));
      std::_Deallocate<16,0>((char *)v11, (const struct std::nothrow_t *)((v12 - v11) & 0xFFFFFFFFFFFFFFF8uLL));
    }
  }
}
