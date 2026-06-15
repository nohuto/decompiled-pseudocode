/*
 * XREFs of ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x180049C1C
 * Callers:
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x18008B5FC (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x180034C78 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180043970 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18004B200 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     CreateAudioMediaType @ 0x1800AAA84 (CreateAudioMediaType.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall IsOffloadConnectorFormatSupportedForMixFormat(
        EffectPack **a1,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4,
        const struct tWAVEFORMATEX *Src)
{
  HRESULT ModeEffect; // r14d
  struct IAudioProcessingObject *v8; // rdi
  WAVEFORMATEX *v9; // rcx
  WAVEFORMATEX *v10; // rcx
  WAVEFORMATEX *v11; // rbx
  WAVEFORMATEX *v12; // rcx
  WAVEFORMATEX *v13; // rsi
  bool v14; // zf
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  HRESULT v16; // eax
  __int64 v18; // [rsp+40h] [rbp-30h] BYREF
  WAVEFORMATEX *v19; // [rsp+48h] [rbp-28h] BYREF
  WAVEFORMATEX *pAudioFormat[2]; // [rsp+50h] [rbp-20h] BYREF
  struct IAudioProcessingObject *v21; // [rsp+60h] [rbp-10h] BYREF
  IAudioMediaType *v22; // [rsp+A0h] [rbp+30h] BYREF
  IAudioMediaType *ppIAudioMediaType; // [rsp+A8h] [rbp+38h] BYREF

  v21 = 0LL;
  *(struct _GUID *)pAudioFormat = *a2;
  ModeEffect = EffectPack::GetModeEffect(a1[1], (struct _GUID *)pAudioFormat, 0, eOffloadConnector, 0LL, &v21, 0LL);
  v8 = v21;
  if ( ModeEffect >= 0 )
  {
    if ( !v21 )
    {
      ModeEffect = 0;
      goto LABEL_22;
    }
    v19 = 0LL;
    pAudioFormat[0] = 0LL;
    ModeEffect = CloneWaveFormat(Src, &v19);
    if ( ModeEffect >= 0 )
    {
      ModeEffect = CloneWaveFormat(a4, pAudioFormat);
      if ( ModeEffect >= 0 )
      {
        v11 = v19;
        if ( (v19->wBitsPerSample & 0xFFF8u) <= 0x100 )
        {
          ConvertPCMWfxToIEEEFloat(v19);
          v13 = pAudioFormat[0];
          ConvertPCMWfxToIEEEFloat(pAudioFormat[0]);
          ppIAudioMediaType = 0LL;
          v22 = 0LL;
          v18 = 0LL;
          ModeEffect = CreateAudioMediaType(v13, v13->cbSize + 18, &ppIAudioMediaType);
          if ( ModeEffect >= 0 )
          {
            ModeEffect = CreateAudioMediaType(v11, v11->cbSize + 18, &v22);
            if ( ModeEffect >= 0 )
            {
              v14 = (*(unsigned int (__fastcall **)(EffectPack *))(*(_QWORD *)*a1 + 56LL))(*a1) == 0;
              lpVtbl = v8->lpVtbl;
              v16 = v14
                  ? ((__int64 (__fastcall *)(struct IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, __int64 *))lpVtbl->IsInputFormatSupported)(
                      v8,
                      ppIAudioMediaType,
                      v22,
                      &v18)
                  : ((unsigned __int64 (__fastcall *)(struct IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, __int64 *))lpVtbl->IsOutputFormatSupported)(
                      v8,
                      ppIAudioMediaType,
                      v22,
                      &v18);
              ModeEffect = v16;
              if ( v16 )
              {
                if ( v16 != -2005073917 )
                  ModeEffect = -2004287480;
              }
            }
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
          v12 = v13;
        }
        else
        {
          ModeEffect = -2004287480;
          v12 = pAudioFormat[0];
        }
        CoTaskMemFree(v12);
        v10 = v11;
        goto LABEL_21;
      }
      v9 = pAudioFormat[0];
    }
    else
    {
      v9 = 0LL;
    }
    CoTaskMemFree(v9);
    v10 = v19;
LABEL_21:
    CoTaskMemFree(v10);
  }
LABEL_22:
  if ( v8 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v8->lpVtbl->Release)(v8);
  return (unsigned int)ModeEffect;
}
