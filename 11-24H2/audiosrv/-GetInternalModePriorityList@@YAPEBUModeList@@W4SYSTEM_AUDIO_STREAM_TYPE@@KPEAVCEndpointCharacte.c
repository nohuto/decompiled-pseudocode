/*
 * XREFs of ?GetInternalModePriorityList@@YAPEBUModeList@@W4SYSTEM_AUDIO_STREAM_TYPE@@KPEAVCEndpointCharacteristics@@H@Z @ 0x18003BD7C
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003B110 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18003C4EC (Create_SpatialAudioDevicePropertyReader.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetInternalModePriorityList(int a1, int a2, __int64 a3, int a4)
{
  int v5; // ebx
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  bool v8; // cf
  __int64 v10[3]; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( a1 != 1 )
      return 0LL;
    if ( a2 == 18 )
    {
      v7 = (unsigned __int64)&unk_1801776F8;
    }
    else
    {
      if ( a2 != 3 )
        return 0LL;
      v7 = (unsigned __int64)&unk_180181EC0;
    }
    v8 = a4 != 0;
    return v7 & -(__int64)v8;
  }
  if ( dword_18018F880[a2] )
  {
    v5 = 0;
    v10[0] = 0LL;
    v11 = 0;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v10);
    if ( (int)Create_SpatialAudioDevicePropertyReader(0LL, *(struct IPropertyStore **)(a3 + 72)) >= 0
      && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v10[0] + 184LL))(v10[0], &v11) >= 0 )
    {
      v5 = v11;
    }
    v6 = v10[0];
    if ( v10[0] )
    {
      v10[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = (unsigned __int64)&unk_180177310;
    v8 = v5 != 0;
    return v7 & -(__int64)v8;
  }
  return 0LL;
}
