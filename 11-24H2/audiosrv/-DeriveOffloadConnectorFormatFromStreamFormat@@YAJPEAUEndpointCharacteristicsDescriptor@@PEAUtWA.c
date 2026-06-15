/*
 * XREFs of ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x18002BBD8
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002D3E0 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     AudioServerIsFormatSupported @ 0x180083480 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18002F4E8 (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18003C464 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x18003E81C (-IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID.c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x18003F024 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180040830 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005DA98 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ??4?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006EA80 (--4-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@wis.c)
 *     ?IsFormatSupportedByHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18008CBC0 (-IsFormatSupportedByHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DeriveOffloadConnectorFormatFromStreamFormat(
        CEndpointCharacteristics **a1,
        struct tWAVEFORMATEX *a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4,
        struct tWAVEFORMATEX *Src,
        unsigned int a6,
        struct tWAVEFORMATEX **a7)
{
  struct tWAVEFORMATEX **v10; // r13
  char v11; // si
  int OffloadDeviceFormat; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v13; // r8d
  WORD nChannels; // cx
  bool v15; // di
  struct tWAVEFORMATEX *v16; // r9
  int v17; // esi
  void **v18; // rcx
  DWORD nSamplesPerSec; // edx
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  unsigned __int64 v24; // r9
  int v25; // eax
  struct tWAVEFORMATEX *v26; // rax
  struct _GUID v28; // [rsp+30h] [rbp-20h] BYREF
  char v29; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct tWAVEFORMATEX *v31; // [rsp+90h] [rbp+40h] BYREF
  struct tWAVEFORMATEX *v32; // [rsp+A0h] [rbp+50h] BYREF

  v32 = a3;
  v10 = a7;
  *a7 = 0LL;
  v11 = 1;
  Src = 0LL;
  *(_QWORD *)&v28.Data1 = &Src;
  *(_QWORD *)v28.Data4 = 0LL;
  v29 = 1;
  OffloadDeviceFormat = CEndpointCharacteristics::GetOffloadDeviceFormat(*a1, (struct tWAVEFORMATEX **)v28.Data4);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v28);
  if ( OffloadDeviceFormat >= 0 )
  {
    nChannels = Src->nChannels;
    v15 = nChannels != a2->nChannels;
    if ( nChannels < a2->nChannels
      && nChannels >= 2u
      && dword_18018F880[a6]
      && !(*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)*a1 + 56LL))(*a1)
      && CEndpointCharacteristics::GetVirtualSurroundEffectMode(*a1) == 1 )
    {
      v11 = 0;
      v15 = 1;
    }
    OffloadDeviceFormat = -2147023728;
    v16 = 0LL;
    v32 = 0LL;
    if ( v11 )
    {
      OffloadDeviceFormat = CEndpointCharacteristics::IsFormatSupportedByHwAudioEngine(*a1, a2);
      v17 = 0;
      if ( !OffloadDeviceFormat )
      {
        *(_QWORD *)&v28.Data1 = &v32;
        *(_QWORD *)v28.Data4 = 0LL;
        v29 = 1;
        v17 = CloneWaveFormat(a2, (struct tWAVEFORMATEX **)v28.Data4);
        wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v28);
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x17E,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)(unsigned int)v17);
LABEL_41:
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v32,
            0LL);
          OffloadDeviceFormat = v17;
          goto LABEL_42;
        }
        v17 = 0;
      }
      v16 = v32;
      if ( v32 )
        goto LABEL_25;
    }
    else
    {
      v17 = 0;
    }
    if ( v15 )
    {
      a7 = 0LL;
      *(_QWORD *)&v28.Data1 = &a7;
      *(_QWORD *)v28.Data4 = 0LL;
      v29 = 1;
      OffloadDeviceFormat = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)v28.Data4);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v28);
      if ( OffloadDeviceFormat < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x185,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)OffloadDeviceFormat);
        v18 = (void **)&a7;
LABEL_20:
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          v18,
          0LL);
LABEL_21:
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v32,
          0LL);
        goto LABEL_42;
      }
      nSamplesPerSec = a2->nSamplesPerSec;
      *((_DWORD *)a7 + 1) = nSamplesPerSec;
      *((_DWORD *)a7 + 2) = nSamplesPerSec * *((unsigned __int16 *)a7 + 6);
      OffloadDeviceFormat = CEndpointCharacteristics::IsFormatSupportedByHwAudioEngine(
                              *a1,
                              (const struct tWAVEFORMATEX *)a7);
      if ( !OffloadDeviceFormat )
        wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::operator=(
          &v32,
          &a7);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&a7,
        0LL);
      v16 = v32;
    }
LABEL_25:
    if ( OffloadDeviceFormat < 0 )
    {
      if ( OffloadDeviceFormat == -2005139333 )
      {
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v32,
          0LL);
        OffloadDeviceFormat = -2005139333;
        goto LABEL_42;
      }
      v20 = (unsigned int)OffloadDeviceFormat;
      v21 = 402LL;
      goto LABEL_29;
    }
    v28 = *a4;
    v22 = IsOffloadConnectorFormatSupportedForMixFormat(
            (struct EndpointCharacteristicsDescriptor *)a1,
            &v28,
            v13,
            v16,
            v16);
    OffloadDeviceFormat = v22;
    if ( v22 < 0 )
    {
      v20 = (unsigned int)v22;
      v21 = 406LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)v20);
      goto LABEL_21;
    }
    v31 = 0LL;
    *(_QWORD *)&v28.Data1 = &v31;
    *(_QWORD *)v28.Data4 = 0LL;
    v29 = 1;
    OffloadDeviceFormat = CloneWaveFormat(a2, (struct tWAVEFORMATEX **)v28.Data4);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v28);
    if ( OffloadDeviceFormat >= 0 )
    {
      v28 = *a4;
      v25 = IsStreamFormatSupportedForMixFormat(
              (struct EndpointCharacteristicsDescriptor *)a1,
              &v28,
              eOffloadConnector,
              v32,
              v31,
              0LL);
      OffloadDeviceFormat = v25;
      if ( v25 < 0 )
      {
        v24 = (unsigned int)v25;
        v23 = 413LL;
        goto LABEL_35;
      }
      if ( !v25 )
      {
        v26 = v32;
        v32 = 0LL;
        *v10 = v26;
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v31,
          0LL);
        goto LABEL_41;
      }
      OffloadDeviceFormat = -2005073917;
      v23 = 414LL;
    }
    else
    {
      v23 = 409LL;
    }
    v24 = (unsigned int)OffloadDeviceFormat;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v24);
    v18 = (void **)&v31;
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15B,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)OffloadDeviceFormat);
LABEL_42:
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&Src,
    0LL);
  return (unsigned int)OffloadDeviceFormat;
}
