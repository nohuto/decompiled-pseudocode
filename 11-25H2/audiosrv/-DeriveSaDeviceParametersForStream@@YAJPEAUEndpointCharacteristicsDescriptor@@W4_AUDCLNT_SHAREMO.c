/*
 * XREFs of ?DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x180063868
 * Callers:
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B88DC (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B9CE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800C06D8 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescript.c)
 *     ?GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUSaDeviceParams@@@Z @ 0x1800D7450 (-GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointChar.c)
 *     ?GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAPEAUSaDeviceParams@@@Z @ 0x1800D8100 (-GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCh.c)
 * Callees:
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x180027A08 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800328EC (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     WPP_SF_di @ 0x1800C1850 (WPP_SF_di.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DeriveSaDeviceParametersForStream(
        CEndpointCharacteristics ***a1,
        enum _AUDCLNT_SHAREMODE a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct _GUID *a4,
        struct _GUID *a5,
        struct tWAVEFORMATEX *a6,
        struct tWAVEFORMATEX *Src,
        __int64 a8,
        struct SaDeviceParams **a9)
{
  void *v11; // rbx
  int DeviceDefaults; // eax
  signed int v13; // r14d
  void *v14; // rax
  void *v15; // rsi
  void *v16; // rdi
  struct SaDeviceParams *v17; // rcx
  __int64 cbSize; // r14
  void *v20; // rax
  void *v21; // r12
  __int64 v22; // r14
  void *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  void *v27; // [rsp+48h] [rbp-28h]
  __int64 v28; // [rsp+50h] [rbp-20h]
  struct _GUID v29; // [rsp+60h] [rbp-10h] BYREF

  v11 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v29 = *a4;
  if ( a2 == AUDCLNT_SHAREMODE_EXCLUSIVE )
    DeviceDefaults = GetDeviceDefaults(a1, a3, &v29, 0LL, 0LL, &a8, &v26);
  else
    DeviceDefaults = GetDeviceDefaults(a1, a3, &v29, 0LL, 0LL, 0LL, &v26);
  v13 = DeviceDefaults;
  if ( DeviceDefaults >= 0 )
  {
    v14 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v14;
    if ( v14 )
      memset_0(v14, 0, 0x70uLL);
    else
      v11 = 0LL;
    v27 = v11;
    v13 = v11 == 0LL ? 0x8007000E : 0;
    v15 = 0LL;
    v16 = 0LL;
    if ( v11 )
    {
      cbSize = Src->cbSize;
      v20 = CoTaskMemAlloc(cbSize + 18);
      v21 = v20;
      v16 = v20;
      if ( v20
        && (memcpy_0(v20, Src, cbSize + 18),
            v22 = a6->cbSize,
            v23 = CoTaskMemAlloc(v22 + 18),
            *(_QWORD *)&v29.Data1 = v23,
            (v15 = v23) != 0LL) )
      {
        memcpy_0(v23, a6, v22 + 18);
        *((_DWORD *)v11 + 2) = a3;
        v15 = 0LL;
        v28 = 0LL;
        CoTaskMemFree(*((LPVOID *)v11 + 2));
        *((_QWORD *)v11 + 2) = *(_QWORD *)&v29.Data1;
        v16 = 0LL;
        *(_QWORD *)&v29.Data1 = 0LL;
        CoTaskMemFree(*((LPVOID *)v11 + 3));
        *((_QWORD *)v11 + 3) = v21;
        *((_QWORD *)v11 + 4) = a8;
        *((_QWORD *)v11 + 5) = v26;
        *((struct _GUID *)v11 + 4) = *a5;
        *((struct _GUID *)v11 + 3) = *a4;
        v13 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *, void *))(*(_QWORD *)(*a1)[5] + 40LL))(
                (*a1)[5],
                v11);
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_di(*((_QWORD *)WPP_GLOBAL_Control + 2), v24, v25, (unsigned int)a3, a8);
        }
        CoCreateGuid((GUID *)v11 + 5);
      }
      else
      {
        v13 = -2147024882;
      }
    }
    CoTaskMemFree(v16);
    CoTaskMemFree(v15);
    if ( v13 >= 0 )
    {
      v17 = (struct SaDeviceParams *)v11;
      v11 = 0LL;
      *a9 = v17;
    }
  }
  if ( v11 )
    SaDeviceParams::`scalar deleting destructor'((SaDeviceParams *)v11);
  return (unsigned int)v13;
}
