/*
 * XREFs of ?DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J99@Z @ 0x18007640C
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B94A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002D3E0 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002DFA0 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180045084 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005DA98 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     _o_ceilf_0 @ 0x1800A4E24 (_o_ceilf_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PeriodicityForMismatchedStreamFormats@@@details@wil@@QEAA_NXZ @ 0x1800C0174 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PeriodicityForMismatche.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x18010EEA0 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall DerivePeriodicityForStream(
        struct EndpointCharacteristicsDescriptor *a1,
        struct tWAVEFORMATEX *a2,
        struct IAudioStreamInfo *a3,
        int a4,
        enum _AUDCLNT_SHAREMODE pvData,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct tWAVEFORMATEX *a7,
        struct _GUID *a8,
        struct _GUID *a9,
        struct _GUID *a10,
        bool a11,
        bool a12,
        __int64 a13,
        __int64 a14,
        struct IProcessSubmixProxy *a15,
        struct tWAVEFORMATEX *a16,
        __int64 *a17,
        __int64 *a18)
{
  __int64 v19; // rbx
  struct tWAVEFORMATEX *v20; // rdi
  __int64 *v21; // r15
  struct IProcessSubmixProxy *v22; // rsi
  void (__fastcall *v23)(struct IProcessSubmixProxy *, __int64 *); // rbx
  struct _GUID *v24; // r12
  struct tWAVEFORMATEX *v25; // r14
  int SharedModeEnginePeriodicity; // eax
  unsigned int v27; // esi
  enum _AUDCLNT_SHAREMODE v29; // esi
  double v30; // xmm7_8
  double v31; // xmm6_8
  signed int nSamplesPerSec; // r12d
  double v33; // xmm3_8
  double v34; // xmm8_8
  unsigned int v35; // ebx
  signed int v36; // r15d
  DWORD v37; // r11d
  __int64 v38; // rdx
  int MixFormat; // ebx
  unsigned int v40; // edx
  unsigned int v41; // r8d
  unsigned int v42; // edx
  unsigned int v43; // r8d
  unsigned int v44; // r9d
  unsigned int v45; // edx
  unsigned int v46; // r8d
  unsigned int v47; // r10d
  unsigned int v48; // eax
  unsigned int v49; // r9d
  unsigned int v50; // r10d
  int v51; // r11d
  unsigned int v52; // ebx
  unsigned int v53; // r12d
  struct _GUID *v54; // rsi
  __int64 v55; // rdx
  int v56; // eax
  unsigned __int64 v57; // r9
  __int64 v58; // rax
  DWORD pcbData[2]; // [rsp+70h] [rbp-90h] BYREF
  GUID v60; // [rsp+80h] [rbp-80h] BYREF
  struct _GUID v61; // [rsp+90h] [rbp-70h] BYREF
  char v62; // [rsp+A0h] [rbp-60h]
  struct _GUID v63; // [rsp+B0h] [rbp-50h] BYREF
  GUID *v64; // [rsp+C0h] [rbp-40h] BYREF
  struct tWAVEFORMATEX *v65; // [rsp+C8h] [rbp-38h] BYREF
  char v66; // [rsp+D0h] [rbp-30h]
  DWORD *v67; // [rsp+D8h] [rbp-28h] BYREF
  struct tWAVEFORMATEX *v68; // [rsp+E0h] [rbp-20h] BYREF
  char v69; // [rsp+E8h] [rbp-18h]
  __int64 **v70; // [rsp+F0h] [rbp-10h] BYREF
  struct tWAVEFORMATEX *v71; // [rsp+F8h] [rbp-8h] BYREF
  char v72; // [rsp+100h] [rbp+0h]
  __int64 *v73; // [rsp+108h] [rbp+8h] BYREF
  struct tWAVEFORMATEX *v74; // [rsp+110h] [rbp+10h] BYREF
  char v75; // [rsp+118h] [rbp+18h]
  struct _GUID v76; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v19 = a14;
  v20 = a16;
  *(_QWORD *)&a16->wFormatTag = a14;
  v21 = a17;
  *a17 = v19;
  if ( pvData )
    return 0LL;
  if ( (a4 & 0x20000) == 0 || (v22 = a15) == 0LL )
  {
    if ( (a4 & 1) != 0 )
    {
      if ( !v19 )
        *(_QWORD *)&v20->wFormatTag = a13;
      return 0LL;
    }
    pvData = AUDCLNT_SHAREMODE_SHARED;
    LODWORD(a17) = 0;
    LODWORD(a14) = 0;
    LODWORD(a16) = 0;
    v24 = a8;
    v60 = *a8;
    v25 = a7;
    SharedModeEnginePeriodicity = EffectPack::GetSharedModeEnginePeriodicity(
                                    *((_QWORD **)a1 + 1),
                                    (unsigned int)a6,
                                    &a7->wFormatTag,
                                    &v60,
                                    a11,
                                    &pvData,
                                    &a16,
                                    &a17,
                                    &a14);
    v27 = SharedModeEnginePeriodicity;
    if ( SharedModeEnginePeriodicity < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x527,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)SharedModeEnginePeriodicity);
      return v27;
    }
    v29 = pvData;
    v30 = (double)(int)pvData * 10000000.0;
    v31 = DOUBLE_0_5;
    *v21 = (unsigned int)(int)(v30 / (double)(int)v25->nSamplesPerSec + 0.5);
    if ( !v19 )
    {
      *(_QWORD *)&v20->wFormatTag = (unsigned int)(int)(v30 / (double)(int)v25->nSamplesPerSec + 0.5);
      goto LABEL_43;
    }
    pvData = AUDCLNT_SHAREMODE_SHARED;
    pcbData[0] = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
      L"SkipPeriodicityValidation",
      0x18u,
      0LL,
      &pvData,
      pcbData);
    nSamplesPerSec = v25->nSamplesPerSec;
    v33 = (double)(int)v19;
    v34 = DOUBLE_1_0e7;
    v31 = DOUBLE_0_5;
    v35 = (int)((double)nSamplesPerSec * (double)(int)v19 / 10000000.0 + 0.5);
    if ( pvData )
      goto LABEL_42;
    v36 = (int)a16;
    if ( v35 >= (unsigned int)a17
      && v35 <= (unsigned int)a14
      && (!(v35 % (unsigned int)a16) || v35 == v29 || v35 == (_DWORD)a17 || v35 == (_DWORD)a14) )
    {
LABEL_38:
      if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a3 + 152LL))(a3) && v35 < v29 )
      {
        v38 = 1399LL;
        goto LABEL_19;
      }
      v31 = DOUBLE_0_5;
LABEL_42:
      v24 = a8;
LABEL_43:
      if ( a12 )
      {
        a16 = 0LL;
        a14 = 0LL;
        *(_QWORD *)&v60.Data1 = 0LL;
        *(_QWORD *)pcbData = 0LL;
        a17 = 0LL;
        *(_QWORD *)&v61.Data1 = &a16;
        *(_QWORD *)v61.Data4 = 0LL;
        v62 = 1;
        v54 = a9;
        v63 = *a9;
        MixFormat = EffectPack::GetMixFormat(*((EffectPack **)a1 + 1), a6, &v63, (struct tWAVEFORMATEX **)v61.Data4);
        wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v61);
        if ( MixFormat < 0 )
        {
          v55 = 1409LL;
LABEL_52:
          v57 = (unsigned int)MixFormat;
          goto LABEL_53;
        }
        v73 = &a14;
        v74 = 0LL;
        v75 = 1;
        v70 = &a17;
        v71 = 0LL;
        v72 = 1;
        v67 = pcbData;
        v68 = 0LL;
        v69 = 1;
        v64 = &v60;
        v65 = 0LL;
        v66 = 1;
        v63 = *v24;
        v76 = *a10;
        v61 = *v54;
        MixFormat = DeriveDeviceGraphFormatsForStream(
                      (CEndpointCharacteristics **)a1,
                      0,
                      a6,
                      AUDCLNT_SHAREMODE_SHARED,
                      0,
                      (IAudioMediaType *)&v61,
                      &v76,
                      &v63,
                      a16,
                      &v65,
                      &v68,
                      &v71,
                      &v74);
        wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v64);
        wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v67);
        wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v70);
        wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v73);
        if ( MixFormat < 0 )
        {
          v55 = 1410LL;
          goto LABEL_52;
        }
        pvData = AUDCLNT_SHAREMODE_SHARED;
        v61 = *v24;
        v56 = EffectPack::GetSharedModeEnginePeriodicity(
                *((_QWORD **)a1 + 1),
                (unsigned int)a6,
                (unsigned __int16 *)a14,
                &v61,
                0,
                &pvData,
                0LL,
                0LL,
                0LL);
        MixFormat = v56;
        if ( v56 < 0 )
        {
          v57 = (unsigned int)v56;
          v55 = 1413LL;
LABEL_53:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v55,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)v57);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&a17,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)pcbData,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v60,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&a14,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&a16,
            0LL);
          return (unsigned int)MixFormat;
        }
        v58 = (unsigned int)(int)((double)(int)pvData * 10000000.0 / (double)*(int *)(a14 + 4) + 0.5);
        if ( *(_QWORD *)&v20->wFormatTag - v58 > 5 * v58 / 100 )
        {
          MixFormat = -2004287448;
          v55 = 1416LL;
          goto LABEL_52;
        }
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&a17,
          0LL);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)pcbData,
          0LL);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v60,
          0LL);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&a14,
          0LL);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&a16,
          0LL);
        v31 = DOUBLE_0_5;
      }
      *a18 = (unsigned int)(int)(v30 / (double)(int)v25->nSamplesPerSec + v31);
      return 0LL;
    }
    v37 = a2->nSamplesPerSec;
    if ( v37 == nSamplesPerSec )
    {
      v38 = 1353LL;
LABEL_19:
      MixFormat = -2004287456;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v38,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x88890020LL);
      return (unsigned int)MixFormat;
    }
    LODWORD(a14) = TranslateFrameCountBetweenSamplingRates(v29, nSamplesPerSec, v37);
    LODWORD(a17) = TranslateFrameCountBetweenSamplingRates(v36, v40, v41);
    LODWORD(a16) = TranslateFrameCountBetweenSamplingRates(v44, v42, v43);
    v48 = TranslateFrameCountBetweenSamplingRates(v47, v45, v46);
    v52 = (int)((double)v51 * v33 / 10000000.0 + 0.5);
    if ( v52 < (unsigned int)a16 || v52 > v48 )
    {
LABEL_27:
      v38 = 1373LL;
      goto LABEL_19;
    }
    v53 = (unsigned int)a17;
    if ( v52 % (unsigned int)a17 )
    {
      if ( v52 != (_DWORD)a14 )
      {
        if ( v52 != (_DWORD)a16 )
        {
          if ( v52 != v48 )
            goto LABEL_27;
LABEL_33:
          v35 = v50;
          goto LABEL_37;
        }
LABEL_31:
        v35 = v49;
        goto LABEL_37;
      }
    }
    else if ( v52 != (_DWORD)a14 )
    {
      if ( v52 != (_DWORD)a16 )
      {
        if ( v52 != v48 )
        {
          v34 = DOUBLE_1_0e7;
          v31 = DOUBLE_0_5;
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PeriodicityForMismatchedStreamFormats>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_PeriodicityForMismatchedStreamFormats>::GetImpl'::`2'::impl) )
            v35 = (int)(float)((float)v36
                             * o_ceilf_0(
                                 (float)(int)v52
                               / (float)((double)(int)a2->nSamplesPerSec
                                       * (double)(int)((double)v36 * 10000000.0 / (double)(int)v25->nSamplesPerSec + 0.5)
                                       / 10000000.0)));
          else
            v35 = v36 * (v52 / v53);
          goto LABEL_37;
        }
        goto LABEL_33;
      }
      goto LABEL_31;
    }
    v35 = v29;
LABEL_37:
    *(_QWORD *)&v20->wFormatTag = (unsigned int)(int)((double)(int)v35 * v34 / (double)(int)v25->nSamplesPerSec + v31);
    goto LABEL_38;
  }
  a14 = 0LL;
  v23 = *(void (__fastcall **)(struct IProcessSubmixProxy *, __int64 *))(*(_QWORD *)a15 + 64LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&a14);
  v23(v22, &a14);
  *(_QWORD *)&v20->wFormatTag = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a14 + 128LL))(a14);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&a14);
  return 0LL;
}
