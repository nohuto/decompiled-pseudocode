/*
 * XREFs of ?DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J99@Z @ 0x180030A00
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B9CE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800319B0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032190 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180032D50 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180050D34 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006B87C (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1801086E0 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall DerivePeriodicityForStream(
        struct EndpointCharacteristicsDescriptor *a1,
        struct tWAVEFORMATEX *a2,
        struct IAudioStreamInfo *a3,
        int a4,
        enum _AUDCLNT_SHAREMODE a5,
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
        __int64 *a16,
        __int64 *a17,
        __int64 *a18)
{
  const struct tWAVEFORMATEX *v18; // r10
  __int64 *v19; // r13
  _QWORD *v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  GUID v23; // xmm0
  __int64 v24; // r9
  __int64 v25; // r9
  int i; // r8d
  _QWORD *v27; // rdx
  __int64 v28; // rax
  _QWORD *v29; // rdi
  _QWORD *v30; // r14
  _QWORD *v31; // rcx
  __int64 v32; // rax
  const struct tWAVEFORMATEX ***v33; // rbx
  const struct tWAVEFORMATEX ***v34; // rsi
  const struct tWAVEFORMATEX **v35; // rax
  signed int v36; // esi
  unsigned int v37; // r14d
  unsigned int v38; // r15d
  unsigned int v39; // edi
  double v40; // xmm4_8
  double v41; // xmm2_8
  int *v42; // rbx
  double v43; // xmm3_8
  int *v44; // rdi
  int MixFormat; // ebx
  __int64 v47; // rdx
  signed int v48; // r10d
  unsigned int v49; // ebx
  unsigned int nSamplesPerSec; // r9d
  int j; // eax
  _QWORD *v52; // r8
  __int64 v53; // rdx
  void (__fastcall *v54)(struct IProcessSubmixProxy *, int **); // rbx
  unsigned int v55; // ebx
  unsigned int v56; // edx
  unsigned int v57; // r8d
  unsigned int v58; // r13d
  unsigned int v59; // edx
  unsigned int v60; // r8d
  unsigned int v61; // edx
  unsigned int v62; // r8d
  unsigned int v63; // eax
  unsigned int v64; // r11d
  double v65; // xmm4_8
  int v66; // r9d
  unsigned int v67; // ecx
  struct EndpointCharacteristicsDescriptor *v68; // r12
  __int64 v69; // rdx
  struct _GUID *v70; // r15
  int SharedModeEnginePeriodicity; // eax
  unsigned __int64 v72; // r9
  __int64 v73; // rax
  int *v74; // [rsp+70h] [rbp-90h] BYREF
  int pvData; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v76; // [rsp+80h] [rbp-80h] BYREF
  struct tWAVEFORMATEX *v77; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v78; // [rsp+90h] [rbp-70h] BYREF
  DWORD *v79; // [rsp+98h] [rbp-68h] BYREF
  struct tWAVEFORMATEX *v80; // [rsp+A0h] [rbp-60h] BYREF
  char v81; // [rsp+A8h] [rbp-58h]
  struct _GUID *v82; // [rsp+B0h] [rbp-50h]
  struct _GUID v83; // [rsp+C0h] [rbp-40h] BYREF
  char v84; // [rsp+D0h] [rbp-30h]
  struct _GUID v85; // [rsp+E0h] [rbp-20h] BYREF
  struct _GUID v86; // [rsp+F0h] [rbp-10h] BYREF
  struct _GUID v87; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v88; // [rsp+110h] [rbp+10h]
  __int64 **v89; // [rsp+118h] [rbp+18h] BYREF
  struct tWAVEFORMATEX *v90; // [rsp+120h] [rbp+20h] BYREF
  char v91; // [rsp+128h] [rbp+28h]
  int **v92; // [rsp+130h] [rbp+30h] BYREF
  struct tWAVEFORMATEX *v93; // [rsp+138h] [rbp+38h] BYREF
  char v94; // [rsp+140h] [rbp+40h]
  DWORD pcbData[4]; // [rsp+150h] [rbp+50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  *(_QWORD *)&v83.Data1 = a3;
  v77 = a2;
  *(_QWORD *)&v86.Data1 = a1;
  v18 = a7;
  v74 = (int *)a7;
  *(_QWORD *)&v87.Data1 = a8;
  v82 = a9;
  *(_QWORD *)&v85.Data1 = a10;
  v19 = a16;
  v76 = a16;
  v78 = a17;
  v88 = a18;
  *a16 = a14;
  *a17 = a14;
  if ( a5 )
    return 0LL;
  if ( (a4 & 0x20000) != 0 && a15 )
  {
    v74 = 0LL;
    v54 = *(void (__fastcall **)(struct IProcessSubmixProxy *, int **))(*(_QWORD *)a15 + 64LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v74);
    v54(a15, &v74);
    *a16 = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)v74 + 128LL))(v74);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v74);
    return 0LL;
  }
  if ( (a4 & 1) != 0 )
  {
LABEL_94:
    if ( !a14 )
      *a16 = a13;
    return 0LL;
  }
  v20 = (_QWORD *)*((_QWORD *)a1 + 1);
  v21 = v20[236];
  if ( a6 != eKeywordDetectorConnector )
  {
    if ( v21 )
    {
      v22 = v20[237];
      goto LABEL_7;
    }
    goto LABEL_93;
  }
  if ( v21 <= 3 )
  {
LABEL_93:
    _o_terminate();
    __debugbreak();
    goto LABEL_94;
  }
  v22 = v20[237] + 72LL;
LABEL_7:
  v23 = *a8;
  *(struct _GUID *)pcbData = *a8;
  v24 = 296LL;
  if ( a6 != eKeywordDetectorConnector )
    v24 = 272LL;
  v25 = v20[198] + v24;
  for ( i = 0; i < *(_DWORD *)(v22 + 16); ++i )
  {
    v27 = (_QWORD *)(*(_QWORD *)v22 + 16LL * i);
    v28 = *v27 - *(_QWORD *)pcbData;
    if ( *v27 == *(_QWORD *)pcbData )
      v28 = v27[1] - *(_QWORD *)&pcbData[2];
    if ( !v28 )
    {
      if ( i != -1 )
      {
        *(GUID *)pcbData = v23;
        for ( j = 0; ; ++j )
        {
          if ( j >= *(_DWORD *)(v22 + 16) )
            goto LABEL_51;
          v52 = (_QWORD *)(*(_QWORD *)v22 + 16LL * j);
          v53 = *v52 - *(_QWORD *)pcbData;
          if ( *v52 == *(_QWORD *)pcbData )
            v53 = v52[1] - *(_QWORD *)&pcbData[2];
          if ( !v53 )
            break;
        }
        if ( j == -1 )
        {
LABEL_51:
          v23 = GUID_00000000_0000_0000_0000_000000000000;
          break;
        }
        if ( j < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, 0);
          __debugbreak();
        }
        v23 = *(GUID *)(*(_QWORD *)(v22 + 8) + 16LL * j);
      }
      break;
    }
  }
  *(GUID *)pcbData = v23;
  v29 = *(_QWORD **)v25;
  v30 = *(_QWORD **)(v25 + 8);
  while ( 1 )
  {
    if ( v29 == v30 )
    {
      MixFormat = -2004287480;
      v47 = 1237LL;
      goto LABEL_33;
    }
    v31 = (_QWORD *)*v29;
    v32 = *(_QWORD *)*v29 - *(_QWORD *)pcbData;
    if ( !v32 )
      v32 = v31[1] - *(_QWORD *)&pcbData[2];
    if ( !v32 )
      break;
LABEL_30:
    ++v29;
  }
  v33 = (const struct tWAVEFORMATEX ***)v31[2];
  v34 = (const struct tWAVEFORMATEX ***)v31[3];
  while ( 1 )
  {
    if ( v33 == v34 )
      goto LABEL_30;
    if ( (unsigned int)CompareWaveFormat(v18, **v33) )
      break;
    ++v33;
    v18 = (const struct tWAVEFORMATEX *)v74;
  }
  v35 = *v33;
  v36 = *((_DWORD *)*v33 + 3);
  v37 = *((_DWORD *)*v33 + 2);
  v38 = *((_DWORD *)*v33 + 4);
  if ( a11 )
    v39 = *((_DWORD *)v35 + 6);
  else
    v39 = *((_DWORD *)v35 + 5);
  v40 = DOUBLE_1_0e7;
  v41 = (double)v36 * 10000000.0;
  v42 = v74;
  v43 = DOUBLE_0_5;
  *v78 = (unsigned int)(int)(v41 / (double)v74[1] + 0.5);
  if ( !a14 )
  {
    *a16 = (unsigned int)(int)(v41 / (double)v42[1] + 0.5);
    v44 = v42;
    goto LABEL_27;
  }
  pvData = 0;
  pcbData[0] = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"SkipPeriodicityValidation",
    0x18u,
    0LL,
    &pvData,
    pcbData);
  v48 = v42[1];
  v40 = DOUBLE_1_0e7;
  v43 = DOUBLE_0_5;
  v49 = (int)((double)v48 * (double)(int)a14 / 10000000.0 + 0.5);
  if ( pvData )
  {
    v44 = v74;
    goto LABEL_27;
  }
  if ( v49 >= v38 && v49 <= v39 && (!(v49 % v37) || v49 == v36 || v49 == v38 || v49 == v39) )
  {
    v44 = v74;
LABEL_52:
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)&v83.Data1 + 152LL))(*(_QWORD *)&v83.Data1)
      && v49 < v36 )
    {
      MixFormat = -2004287456;
      v47 = 1307LL;
      goto LABEL_33;
    }
    v40 = DOUBLE_1_0e7;
    v43 = DOUBLE_0_5;
LABEL_27:
    if ( !a12 )
    {
LABEL_28:
      *v88 = (unsigned int)(int)((double)v36 * v40 / (double)v44[1] + v43);
      return 0LL;
    }
    *(_QWORD *)pcbData = 0LL;
    v74 = 0LL;
    v78 = 0LL;
    v77 = 0LL;
    v76 = 0LL;
    v79 = pcbData;
    v80 = 0LL;
    v81 = 1;
    v83 = *v82;
    v68 = *(struct EndpointCharacteristicsDescriptor **)&v86.Data1;
    MixFormat = EffectPack::GetMixFormat(*(EffectPack **)(*(_QWORD *)&v86.Data1 + 8LL), a6, &v83, &v80);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v79);
    if ( MixFormat >= 0 )
    {
      v92 = &v74;
      v93 = 0LL;
      v94 = 1;
      v89 = &v76;
      v90 = 0LL;
      v91 = 1;
      *(_QWORD *)&v83.Data1 = &v77;
      *(_QWORD *)v83.Data4 = 0LL;
      v84 = 1;
      v79 = (DWORD *)&v78;
      v80 = 0LL;
      v81 = 1;
      v70 = *(struct _GUID **)&v87.Data1;
      v87 = *(struct _GUID *)*(_QWORD *)&v87.Data1;
      v85 = *(struct _GUID *)*(_QWORD *)&v85.Data1;
      v86 = *v82;
      MixFormat = DeriveDeviceGraphFormatsForStream(
                    v68,
                    0,
                    a6,
                    AUDCLNT_SHAREMODE_SHARED,
                    0,
                    &v86,
                    &v85,
                    &v87,
                    *(struct tWAVEFORMATEX **)pcbData,
                    &v80,
                    (struct tWAVEFORMATEX **)v83.Data4,
                    &v90,
                    &v93);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v79);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v83);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v89);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v92);
      if ( MixFormat >= 0 )
      {
        pvData = 0;
        v85 = *v70;
        SharedModeEnginePeriodicity = EffectPack::GetSharedModeEnginePeriodicity(
                                        *((_QWORD *)v68 + 1),
                                        (unsigned int)a6,
                                        v74,
                                        &v85);
        MixFormat = SharedModeEnginePeriodicity;
        if ( SharedModeEnginePeriodicity < 0 )
        {
          v72 = (unsigned int)SharedModeEnginePeriodicity;
          v69 = 1321LL;
LABEL_91:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v69,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)v72);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v76,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v77,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v78,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v74,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)pcbData,
            0LL);
          return (unsigned int)MixFormat;
        }
        v73 = (unsigned int)(int)((double)pvData * 10000000.0 / (double)v74[1] + 0.5);
        if ( *v19 - v73 <= 5 * v73 / 100 )
        {
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v76,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v77,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v78,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v74,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)pcbData,
            0LL);
          v40 = DOUBLE_1_0e7;
          v43 = DOUBLE_0_5;
          goto LABEL_28;
        }
        MixFormat = -2004287448;
        v69 = 1324LL;
      }
      else
      {
        v69 = 1318LL;
      }
    }
    else
    {
      v69 = 1317LL;
    }
    v72 = (unsigned int)MixFormat;
    goto LABEL_91;
  }
  nSamplesPerSec = v77->nSamplesPerSec;
  if ( nSamplesPerSec != v48 )
  {
    v55 = TranslateFrameCountBetweenSamplingRates(v36, v48, nSamplesPerSec);
    v58 = TranslateFrameCountBetweenSamplingRates(v37, v56, v57);
    TranslateFrameCountBetweenSamplingRates(v38, v59, v60);
    v63 = TranslateFrameCountBetweenSamplingRates(v39, v61, v62);
    v67 = (int)((double)v66 * (double)(int)a14 / v65 + 0.5);
    if ( v67 < v64 || v67 > v63 )
      goto LABEL_70;
    if ( v67 % v58 )
    {
      if ( v67 != v55 )
      {
        if ( v67 != v64 )
        {
          if ( v67 != v63 )
          {
LABEL_70:
            MixFormat = -2004287456;
            v47 = 1291LL;
            goto LABEL_33;
          }
          goto LABEL_77;
        }
        goto LABEL_76;
      }
    }
    else if ( v67 != v55 )
    {
      if ( v67 == v64 )
      {
LABEL_76:
        v49 = v38;
        goto LABEL_78;
      }
      if ( v67 == v63 )
      {
LABEL_77:
        v49 = v39;
        goto LABEL_78;
      }
      v49 = v67 / v58 * v37;
LABEL_78:
      v44 = v74;
      v19 = v76;
      *v76 = (unsigned int)(int)((double)(int)v49 * v65 / (double)v74[1] + 0.5);
      goto LABEL_52;
    }
    v49 = v36;
    goto LABEL_78;
  }
  MixFormat = -2004287456;
  v47 = 1271LL;
LABEL_33:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v47,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)MixFormat);
  return (unsigned int)MixFormat;
}
