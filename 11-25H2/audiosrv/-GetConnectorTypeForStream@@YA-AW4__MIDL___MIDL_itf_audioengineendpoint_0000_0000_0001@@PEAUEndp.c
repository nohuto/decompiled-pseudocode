/*
 * XREFs of ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@HPEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@@Z @ 0x1800A3C60
 * Callers:
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18002BE70 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B9CE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 * Callees:
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x1800132E0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002153C (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x18002368C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180037234 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?HardwareLoopbackEnabled@EffectPack@@QEAAHXZ @ 0x180063690 (-HardwareLoopbackEnabled@EffectPack@@QEAAHXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180064D38 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsFormatSupportedByHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x180090810 (-IsFormatSupportedByHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetConnectorTypeForStream(
        CEndpointCharacteristics **a1,
        int a2,
        enum _AUDCLNT_SHAREMODE a3,
        int a4,
        const struct tWAVEFORMATEX *a5,
        struct IProcessSubmixProxy *a6)
{
  int v6; // r12d
  enum _AUDCLNT_SHAREMODE v7; // r13d
  char v8; // r15
  CEndpointCharacteristics **v9; // rsi
  int v11; // edi
  unsigned int v12; // ebx
  char v13; // di
  int v14; // eax
  const char *v15; // r9
  __int64 *v16; // rcx
  unsigned __int128 v17; // kr10_16
  __int64 v18; // r13
  char v19; // [rsp+20h] [rbp-78h]
  struct CEndpointStore *v21; // [rsp+28h] [rbp-70h] BYREF
  __int64 v22; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-60h]
  unsigned __int128 v24; // [rsp+40h] [rbp-58h] BYREF
  __int64 v25; // [rsp+50h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  char v28; // [rsp+A8h] [rbp+10h]

  v28 = a2;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  if ( (a2 & 0x400000) != 0 )
    return 3LL;
  v11 = a2 & 0x20000;
  v12 = 0;
  if ( a6 && v11 )
    return 0LL;
  v21 = 0LL;
  CEndpointStoreCache::GetEndpointStore((CEndpointStoreCache *)a1, *((const unsigned __int16 **)*a1 + 6), &v21);
  if ( !(unsigned int)EffectPack::HardwareLoopbackEnabled(v9[1]) || !v11 )
    goto LABEL_27;
  v13 = 0;
  v19 = 0;
  if ( !g_UseSoftwareLoopbackOnMatchFormat )
    goto LABEL_22;
  try
  {
    v24 = 0LL;
    v25 = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int128 *))(**((_QWORD **)v21 + 13) + 96LL))(
            *((_QWORD *)v21 + 13),
            &v24);
    v16 = (__int64 *)v24;
    if ( v14 >= 0 )
    {
      v17 = v24;
      v23 = *((_QWORD *)&v24 + 1);
      while ( (_QWORD)v17 != *((_QWORD *)&v17 + 1) )
      {
        v18 = *(_QWORD *)v17;
        v22 = *(_QWORD *)v17;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v22);
        if ( v13 || (v13 = 0, (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v18 + 168LL))(v18)) )
          v13 = 1;
        v19 = v13;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
        v16 = (__int64 *)v24;
        v17 = __PAIR128__(v23, (__int64)v17 + 8);
      }
      v7 = a3;
    }
    if ( v16 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v16, *((__int64 **)&v24 + 1));
      std::_Deallocate<16,0>((char *)v24, (const struct std::nothrow_t *)((v25 - v24) & 0xFFFFFFFFFFFFFFF8uLL));
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x1D7,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      v15);
    v12 = 0;
    v8 = v28;
    v9 = a1;
    v13 = v19;
    v6 = a4;
    v7 = a3;
  }
  if ( v13 )
  {
LABEL_27:
    if ( v7 == AUDCLNT_SHAREMODE_EXCLUSIVE
      && (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(*v9)
      && a5
      && !(unsigned int)CEndpointCharacteristics::IsFormatSupportedByHwAudioEngine(*v9, a5)
      || (v8 & 2) == 0 )
    {
      v12 = 1;
    }
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v21);
    return v12;
  }
  else
  {
LABEL_22:
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v21);
    return v6 != 0 ? 4 : 2;
  }
}
