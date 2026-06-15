/*
 * XREFs of ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180032D50
 * Callers:
 *     ?DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J99@Z @ 0x180030A00 (-DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIA.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032190 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800328EC (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18003366C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     AudioServerIsFormatSupported @ 0x180038EE0 (AudioServerIsFormatSupported.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800757A0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     AudioServerGetMixFormat @ 0x18008D5F0 (AudioServerGetMixFormat.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800C2C30 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x180100BD0 (-GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     PolicyConfigGetMixFormat @ 0x180102290 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180109760 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180033F1C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18004F238 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?ReadFormatProperty@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@AEAV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@@Z @ 0x180069020 (-ReadFormatProperty@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@AEAV-$unique_struct@UtagPROPVAR.c)
 *     ?RefreshDeviceFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180086E44 (-RefreshDeviceFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EffectPack::GetMixFormat(
        EffectPack *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  const struct tWAVEFORMATEX *v7; // rbx
  GUID fmtid; // xmm0
  DWORD pid; // eax
  int v10; // ecx
  int v12; // eax
  struct _RTL_CRITICAL_SECTION *v13; // rdi
  struct _RTL_CRITICAL_SECTION *v14; // rdi
  int refreshed; // eax
  unsigned int v16; // ebx
  struct _RTL_CRITICAL_SECTION *v17; // rbx
  int v18; // eax
  unsigned int v19; // edi
  int v20; // eax
  __int64 cbSize; // rdi
  struct tWAVEFORMATEX *v22; // rax
  struct tWAVEFORMATEX *v23; // rsi
  char *v24; // [rsp+28h] [rbp-58h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-50h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-48h] BYREF
  void *Src; // [rsp+48h] [rbp-38h]
  __int128 v28; // [rsp+50h] [rbp-30h]
  GUID v29; // [rsp+60h] [rbp-20h] BYREF
  DWORD v30; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v7 = 0LL;
  *a4 = 0LL;
  v29 = 0LL;
  v30 = 0;
  if ( a2 == eOffloadConnector )
  {
    fmtid = PKEY_AudioEngine_HWMixFormat.fmtid;
    pid = PKEY_AudioEngine_HWMixFormat.pid;
  }
  else if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
         && *(_QWORD *)a3->Data4 == *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
  {
    fmtid = PKEY_AudioEngine_MixFormat.fmtid;
    pid = PKEY_AudioEngine_MixFormat.pid;
  }
  else
  {
    v28 = (__int128)*a3;
    v10 = 0;
    while ( xmmword_180186BA0[v10] != v28 )
    {
      if ( (unsigned int)++v10 >= 0xA )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1ACF,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0x80070490LL);
        return 2147943568LL;
      }
    }
    fmtid = (GUID)PKEY_AudioEngine_SignalProcessingMode_Specific_MixFormat;
    v12 = 602;
    if ( a2 != eKeywordDetectorConnector )
      v12 = 2;
    pid = v10 + v12;
  }
  v29 = fmtid;
  v30 = pid;
  *(_OWORD *)pvar = 0LL;
  Src = 0LL;
  v13 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 198) + 0x2000LL);
  EnterCriticalSection(v13);
  lpCriticalSection = v13;
  ReadFormatProperty(*(_QWORD *)(*((_QWORD *)this + 198) + 72LL), &v29, pvar);
  if ( LOWORD(pvar[0]) == 65 )
    v7 = (const struct tWAVEFORMATEX *)Src;
  if ( v13 )
    LeaveCriticalSection(v13);
  if ( v7 )
    goto LABEL_44;
  (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *, _QWORD))(*(_QWORD *)g_policyConfigInternal + 24LL))(
    g_policyConfigInternal,
    &lpCriticalSection,
    *(_QWORD *)(*((_QWORD *)this + 198) + 48LL));
  v14 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 198) + 0x2000LL);
  EnterCriticalSection(v14);
  *(_QWORD *)&v28 = v14;
  ReadFormatProperty(*(_QWORD *)(*((_QWORD *)this + 198) + 72LL), &v29, pvar);
  if ( LOWORD(pvar[0]) == 65 )
    v7 = (const struct tWAVEFORMATEX *)Src;
  if ( v14 )
    LeaveCriticalSection(v14);
  if ( v7 )
  {
LABEL_42:
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
LABEL_44:
    v20 = ValidateUncompressedWaveFormatEx(v7);
    if ( v20 )
    {
      LODWORD(v24) = v20;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x1B04,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x88890008LL,
        (int)"ValidateUncompressedWaveFormatEx returned 0x%08x",
        v24);
      PropVariantClear(pvar);
      return 2290679816LL;
    }
    else
    {
      cbSize = v7->cbSize;
      v22 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
      v23 = v22;
      if ( v22 )
      {
        memcpy_0(v22, v7, cbSize + 18);
        *a4 = v23;
        PropVariantClear(pvar);
        return 0LL;
      }
      else
      {
        *a4 = 0LL;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B06,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0x8007000ELL);
        PropVariantClear(pvar);
        return 2147942414LL;
      }
    }
  }
  refreshed = EffectPack::RefreshDeviceFormat(this, a2);
  v16 = refreshed;
  if ( refreshed < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AF4,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)refreshed);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    PropVariantClear(pvar);
    return v16;
  }
  v17 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 198) + 0x2000LL);
  EnterCriticalSection(v17);
  *(_QWORD *)&v28 = v17;
  v18 = ReadFormatProperty(*(_QWORD *)(*((_QWORD *)this + 198) + 72LL), &v29, pvar);
  v19 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AF9,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v18);
    if ( v17 )
      LeaveCriticalSection(v17);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    PropVariantClear(pvar);
    return v19;
  }
  if ( LOWORD(pvar[0]) == 65 )
  {
    if ( v17 )
      LeaveCriticalSection(v17);
    v7 = (const struct tWAVEFORMATEX *)Src;
    goto LABEL_42;
  }
  LODWORD(v24) = LOWORD(pvar[0]);
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x1AFA,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x8007000DLL,
    (int)"unexpected vartype 0x%x",
    v24);
  if ( v17 )
    LeaveCriticalSection(v17);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  PropVariantClear(pvar);
  return 2147942413LL;
}
