/*
 * XREFs of _lambda_2a34e4181bb0fe573315be9c90b0dac4_::operator() @ 0x1800B4EF8
 * Callers:
 *     ?GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PEAPEAUIAudioModeEffectsWatcher@@@Z @ 0x18002AC74 (-GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800517D0 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall lambda_2a34e4181bb0fe573315be9c90b0dac4_::operator()(__int128 **a1, __int64 *a2)
{
  char v4; // si
  int (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v6)(_QWORD, GUID *, __int64 **); // rdi
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v13; // [rsp+70h] [rbp+40h] BYREF
  int (__fastcall ***v14)(_QWORD, GUID *, __int64 **); // [rsp+78h] [rbp+48h] BYREF

  v4 = 0;
  v14 = 0LL;
  v13 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a2, (__int64 *)&v14) >= 0 )
  {
    v5 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v14;
    if ( v14 )
    {
      v6 = **v14;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v13);
      if ( v6(v5, &GUID_cf7140b3_9165_4973_a232_739191a0735a, &v13) >= 0 )
      {
        v7 = *v13;
        v12 = **a1;
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int128 *))(v7 + 24))(v13, &v12) )
        {
          v8 = (__int64 *)a1[1];
          v9 = *v8;
          v10 = (__int64)v13;
          *v8 = (__int64)v13;
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          v4 = 1;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v14);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a2);
  return v4;
}
