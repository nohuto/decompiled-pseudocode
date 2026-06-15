/*
 * XREFs of ?ReconnectStreamGroupsToNewSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@AEAV?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@W4ReconnectSaDeviceOptions@1@@Z @ 0x1800DF6BC
 * Callers:
 *     ?RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z @ 0x1800DF8B8 (-RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800517D0 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180051CB8 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?GetSaDeviceWrapper@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@5PEAPEAUISaDeviceProxy@@@Z @ 0x1800DECB4 (-GetSaDeviceWrapper@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEA.c)
 *     ?clear@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAAXXZ @ 0x1800E2490 (-clear@-$forward_list@UDisplacedStreamGroup@@V-$allocator@UDisplacedStreamGroup@@@std@@@std@@QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CBtAudioResourceManagerBase::ReconnectStreamGroupsToNewSaDevices(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *i; // rbx
  int SaDeviceWrapper; // eax
  unsigned int v7; // edi
  __int64 (__fastcall *v8)(struct IDeviceGraphManager *, __int64, __int64, bool, _QWORD); // rdi
  char v9; // al
  __int64 v10; // rdx
  __int64 v12; // [rsp+50h] [rbp-9h] BYREF
  __int64 v13; // [rsp+58h] [rbp-1h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+7h] BYREF
  _OWORD v15[2]; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v16; // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  memset(v15, 0, sizeof(v15));
  v16 = 0LL;
  for ( i = (_QWORD *)*a3; i; i = (_QWORD *)*i )
  {
    v14 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(i + 1, (__int64 *)&v14) >= 0 && v14 )
    {
      v12 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v14, &v12) >= 0 )
      {
        v13 = 0LL;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v13);
        SaDeviceWrapper = CBtAudioResourceManagerBase::GetSaDeviceWrapper(
                            a1,
                            a2,
                            i[2],
                            0,
                            0,
                            (__int64)v15,
                            (__int64)(i + 3),
                            0LL,
                            0LL,
                            (__int64)&v13);
        v7 = SaDeviceWrapper;
        if ( SaDeviceWrapper < 0 )
        {
          v10 = 1720LL;
          goto LABEL_13;
        }
        v8 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL);
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 240LL))(v12);
        SaDeviceWrapper = v8(g_DeviceGraphManager, v12, v13, v9 == 0, 0LL);
        v7 = SaDeviceWrapper;
        if ( SaDeviceWrapper < 0 )
        {
          v10 = 1772LL;
LABEL_13:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v10,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
            (const char *)(unsigned int)SaDeviceWrapper);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v13);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v12);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v14);
          return v7;
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v13);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v12);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v14);
  }
  std::forward_list<DisplacedStreamGroup>::clear(a1 + 104);
  return 0LL;
}
