/*
 * XREFs of ?MoveDisplacedPrimaryProfileStreamGroupsToSaDevice@CBtAudioResourceManagerBase@@IEAAJPEAUISaDeviceProxy@@@Z @ 0x1800D93CC
 * Callers:
 *     ?CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D3E40 (-CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristic.c)
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D42D0 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDes.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002307C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180023F34 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?clear@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAAXXZ @ 0x1800DDB54 (-clear@-$forward_list@UDisplacedStreamGroup@@V-$allocator@UDisplacedStreamGroup@@@std@@@std@@QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBtAudioResourceManagerBase::MoveDisplacedPrimaryProfileStreamGroupsToSaDevice(
        CBtAudioResourceManagerBase *this,
        struct ISaDeviceProxy *a2)
{
  char *v3; // rsi
  _QWORD *i; // rbx
  __int64 (__fastcall *v5)(struct IDeviceGraphManager *, __int64, struct ISaDeviceProxy *, bool, _QWORD); // rdi
  char v6; // al
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v11; // [rsp+50h] [rbp+20h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+30h] BYREF

  v3 = (char *)this + 104;
  for ( i = (_QWORD *)*((_QWORD *)this + 13); i; i = (_QWORD *)*i )
  {
    v12 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(i + 1, (__int64 *)&v12) >= 0 && v12 )
    {
      v11 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v12, &v11) >= 0 )
      {
        (*(void (__fastcall **)(struct ISaDeviceProxy *, _QWORD))(*(_QWORD *)a2 + 80LL))(a2, i[2]);
        v5 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, struct ISaDeviceProxy *, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL);
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 240LL))(v11);
        v7 = v5(g_DeviceGraphManager, v11, a2, v6 == 0, 0LL);
        v8 = v7;
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x538,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
            (const char *)(unsigned int)v7);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v11);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v12);
          return v8;
        }
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v11);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v12);
  }
  std::forward_list<DisplacedStreamGroup>::clear(v3);
  return 0LL;
}
