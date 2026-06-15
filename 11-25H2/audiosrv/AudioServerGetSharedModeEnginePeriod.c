/*
 * XREFs of AudioServerGetSharedModeEnginePeriod @ 0x180038600
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800319B0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18003366C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180037B80 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180038CF4 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     AudioServerIsFormatSupported @ 0x180038EE0 (AudioServerIsFormatSupported.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003A4AC (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1801086E0 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioServerGetSharedModeEnginePeriod(
        int a1,
        __int64 a2,
        __int128 *a3,
        struct tWAVEFORMATEX *a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7,
        unsigned int *a8,
        unsigned int *a9)
{
  __int128 v9; // xmm0
  struct _FILETIME v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v18; // eax
  int IsFormatSupported; // ebx
  void *v20; // rcx
  int v21; // eax
  int v22; // ebx
  __int64 v23; // rax
  int v24; // eax
  struct _GUID v25; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v26; // edx
  struct tWAVEFORMATEX *v27; // rdx
  struct tWAVEFORMATEX *v28; // rcx
  struct tWAVEFORMATEX *v29; // r15
  __int64 v30; // rcx
  bool v31; // zf
  int v32; // r8d
  __int64 v33; // r9
  __int64 v34; // r9
  _QWORD *v35; // rdx
  __int64 v36; // rax
  struct _GUID *v37; // rax
  _QWORD *v38; // rdi
  _QWORD *v39; // r14
  _QWORD *v40; // rcx
  __int64 v41; // rax
  const struct tWAVEFORMATEX ***v42; // rbx
  const struct tWAVEFORMATEX ***v43; // rsi
  unsigned int *v44; // r10
  unsigned int *v45; // rdi
  const struct tWAVEFORMATEX **v46; // rax
  unsigned int v47; // eax
  struct tWAVEFORMATEX *v48; // r9
  unsigned int nSamplesPerSec; // r8d
  DWORD v50; // edx
  void *v51; // rcx
  __int64 v53; // rdx
  struct tWAVEFORMATEX *v54; // rcx
  __int64 v55; // rdx
  void *v56; // rcx
  int i; // eax
  _QWORD *v58; // r8
  __int64 v59; // rdx
  GUID v60; // xmm0
  unsigned int v61; // eax
  unsigned int *v62; // r10
  unsigned int *v63; // r11
  __int64 v64; // r9
  unsigned int v65; // eax
  unsigned int *v66; // r11
  __int64 v67; // r9
  __int64 v68; // r9
  int v69; // [rsp+38h] [rbp-D0h]
  LPVOID v70; // [rsp+88h] [rbp-80h] BYREF
  struct tWAVEFORMATEX *v71; // [rsp+90h] [rbp-78h] BYREF
  __int128 v72; // [rsp+98h] [rbp-70h] BYREF
  __int64 v73; // [rsp+A8h] [rbp-60h]
  struct _GUID v74; // [rsp+B8h] [rbp-50h] BYREF
  struct tWAVEFORMATEX **v75; // [rsp+C8h] [rbp-40h]
  struct tWAVEFORMATEX *v76; // [rsp+D0h] [rbp-38h] BYREF
  char v77; // [rsp+D8h] [rbp-30h]
  unsigned int *v78; // [rsp+E0h] [rbp-28h]
  _DWORD *v79; // [rsp+E8h] [rbp-20h]
  unsigned int *v80; // [rsp+F0h] [rbp-18h]
  _QWORD pv[2]; // [rsp+F8h] [rbp-10h] BYREF
  DWORD CurrentThreadId; // [rsp+108h] [rbp+0h]
  const wchar_t *v83; // [rsp+110h] [rbp+8h]
  struct _FILETIME v84; // [rsp+118h] [rbp+10h]
  char v85; // [rsp+120h] [rbp+18h]
  __int64 v86; // [rsp+124h] [rbp+1Ch]
  struct _GUID v87; // [rsp+138h] [rbp+30h] BYREF
  char v88; // [rsp+148h] [rbp+40h]
  struct _FILETIME pftDueTime[2]; // [rsp+158h] [rbp+50h] BYREF
  __int128 v90; // [rsp+168h] [rbp+60h]
  __int128 v91; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v9 = *a3;
  v78 = a6;
  v79 = a7;
  v80 = a8;
  v90 = v9;
  v91 = v9;
  EtwEventActivityIdControl(4LL, &v91);
  v14 = g_AudioHealthMonitor;
  v15 = g_AudioSrvWatchDogTimerInMs;
  v16 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v16;
  v84 = v14;
  CurrentThreadId = GetCurrentThreadId();
  v83 = L"AudioServerGetSharedModeEnginePeriod";
  v85 = 0;
  v86 = 0LL;
  if ( (unsigned int)v15 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000 * v15 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v15 / 3, 0);
    }
  }
  v18 = ValidateVadServerSettings((struct VadServerSettings *)a3);
  IsFormatSupported = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1072,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v18);
  }
  else
  {
    v70 = 0LL;
    *(_QWORD *)&v87.Data1 = &v70;
    *(_QWORD *)v87.Data4 = 0LL;
    v88 = 1;
    IsFormatSupported = AudioServerIsFormatSupported(a1, a2, 0, (int)a3, a4, (struct tWAVEFORMATEX **)v87.Data4);
    if ( v88 )
    {
      v20 = **(void ***)&v87.Data1;
      **(_QWORD **)&v87.Data1 = *(_QWORD *)v87.Data4;
      if ( v20 )
        CoTaskMemFree(v20);
    }
    if ( IsFormatSupported >= 0 )
    {
      v73 = 0LL;
      v72 = 0LL;
      v21 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, __int128 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                  + 40LL))(
              g_pEndpointCharacteristicsCache,
              a2,
              0LL,
              0LL,
              &v72);
      IsFormatSupported = v21;
      if ( v21 < 0 )
      {
        v55 = 4217LL;
      }
      else
      {
        v22 = *((_DWORD *)a3 + 13);
        *(_OWORD *)&pftDueTime[0].dwLowDateTime = 0LL;
        v23 = *(_QWORD *)v72;
        v74 = 0LL;
        v87 = 0LL;
        v24 = (*(__int64 (__fastcall **)(_QWORD))(v23 + 56))(v72);
        v21 = DeriveAudioProcessingModeConfiguration(
                *((unsigned int *)a3 + 12),
                *((unsigned int *)a3 + 14),
                *((unsigned int *)a3 + 32),
                &v72,
                v24 == 1,
                0,
                v22,
                0LL,
                0,
                0,
                0LL,
                pftDueTime,
                &v74,
                &v87,
                0LL,
                0LL);
        IsFormatSupported = v21;
        if ( v21 >= 0 )
        {
          v25 = *(struct _GUID *)&pftDueTime[0].dwLowDateTime;
          v26 = *((_DWORD *)a3 + 13);
          v75 = &v71;
          v69 = *((_DWORD *)a3 + 17);
          v71 = 0LL;
          v76 = 0LL;
          v77 = 1;
          IsFormatSupported = DeriveConnectorFormatFromStreamFormat(
                                (EffectPack **)&v72,
                                v26,
                                (IAudioMediaType *)a4,
                                &v87,
                                &v74,
                                (struct _GUID *)pftDueTime,
                                v69,
                                &v76);
          if ( v77 )
          {
            v27 = v76;
            v28 = *v75;
            *v75 = v76;
            if ( v28 )
              CoTaskMemFree(v28);
          }
          if ( IsFormatSupported < 0 )
          {
            v53 = 4249LL;
LABEL_55:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v53,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)IsFormatSupported);
            v54 = v71;
            v71 = 0LL;
            if ( v54 )
              CoTaskMemFree(v54);
            goto LABEL_59;
          }
          v29 = v71;
          if ( *((_DWORD *)a3 + 13) == 3 )
          {
            if ( *(_QWORD *)(*((_QWORD *)&v72 + 1) + 1888LL) > 3uLL )
            {
              v30 = *(_QWORD *)(*((_QWORD *)&v72 + 1) + 1896LL) + 72LL;
              goto LABEL_18;
            }
          }
          else if ( *(_QWORD *)(*((_QWORD *)&v72 + 1) + 1888LL) )
          {
            v30 = *(_QWORD *)(*((_QWORD *)&v72 + 1) + 1896LL);
LABEL_18:
            v31 = *((_DWORD *)a3 + 13) == 3;
            v87 = v25;
            v32 = 0;
            v33 = 296LL;
            if ( !v31 )
              v33 = 272LL;
            v34 = *(_QWORD *)(*((_QWORD *)&v72 + 1) + 1584LL) + v33;
            while ( 1 )
            {
              if ( v32 >= *(_DWORD *)(v30 + 16) )
                goto LABEL_26;
              v35 = (_QWORD *)(*(_QWORD *)v30 + 16LL * v32);
              v36 = *v35 - *(_QWORD *)&v87.Data1;
              if ( *v35 == *(_QWORD *)&v87.Data1 )
                v36 = v35[1] - *(_QWORD *)v87.Data4;
              if ( !v36 )
                break;
              ++v32;
            }
            if ( v32 == -1 )
            {
LABEL_26:
              v87 = v25;
              v37 = &v87;
              goto LABEL_27;
            }
            v87 = v25;
            for ( i = 0; ; ++i )
            {
              if ( i >= *(_DWORD *)(v30 + 16) )
                goto LABEL_78;
              v58 = (_QWORD *)(*(_QWORD *)v30 + 16LL * i);
              v59 = *v58 - *(_QWORD *)&v87.Data1;
              if ( *v58 == *(_QWORD *)&v87.Data1 )
                v59 = v58[1] - *(_QWORD *)v87.Data4;
              if ( !v59 )
                break;
            }
            if ( i == -1 )
            {
LABEL_78:
              v60 = GUID_00000000_0000_0000_0000_000000000000;
              goto LABEL_73;
            }
            if ( i < 0 )
            {
              ATL::_AtlRaiseException(0xC000008C, 0);
              __debugbreak();
            }
            v60 = *(GUID *)(*(_QWORD *)(v30 + 8) + 16LL * i);
LABEL_73:
            *(GUID *)&pftDueTime[0].dwLowDateTime = v60;
            v37 = (struct _GUID *)pftDueTime;
LABEL_27:
            v38 = *(_QWORD **)v34;
            v39 = *(_QWORD **)(v34 + 8);
            v87 = *v37;
            while ( v38 != v39 )
            {
              v40 = (_QWORD *)*v38;
              v41 = *(_QWORD *)*v38 - *(_QWORD *)&v87.Data1;
              if ( !v41 )
                v41 = v40[1] - *(_QWORD *)v87.Data4;
              if ( !v41 )
              {
                v42 = (const struct tWAVEFORMATEX ***)v40[2];
                v43 = (const struct tWAVEFORMATEX ***)v40[3];
                while ( v42 != v43 )
                {
                  if ( (unsigned int)CompareWaveFormat(v29, **v42) )
                  {
                    v44 = v78;
                    if ( v78 )
                      *v78 = *((_DWORD *)*v42 + 3);
                    if ( v79 )
                      *v79 = *((_DWORD *)*v42 + 2);
                    v45 = v80;
                    if ( v80 )
                      *v80 = *((_DWORD *)*v42 + 4);
                    if ( a9 )
                    {
                      v46 = *v42;
                      if ( a5 )
                        v47 = *((_DWORD *)v46 + 6);
                      else
                        v47 = *((_DWORD *)v46 + 5);
                      *a9 = v47;
                    }
                    v48 = v71;
                    nSamplesPerSec = a4->nSamplesPerSec;
                    v50 = v71->nSamplesPerSec;
                    if ( nSamplesPerSec != v50 )
                    {
                      v61 = TranslateFrameCountBetweenSamplingRates(*v44, v50, nSamplesPerSec);
                      *v62 = v61;
                      v65 = TranslateFrameCountBetweenSamplingRates(*v63, *(_DWORD *)(v64 + 4), a4->nSamplesPerSec);
                      *v66 = v65;
                      *v45 = TranslateFrameCountBetweenSamplingRates(*v45, *(_DWORD *)(v67 + 4), a4->nSamplesPerSec);
                      *a9 = TranslateFrameCountBetweenSamplingRates(*a9, *(_DWORD *)(v68 + 4), a4->nSamplesPerSec);
                    }
                    v71 = 0LL;
                    if ( v48 )
                      CoTaskMemFree(v48);
                    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v72);
                    v51 = v70;
                    v70 = 0LL;
                    if ( v51 )
                      CoTaskMemFree(v51);
                    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
                    EtwEventActivityIdControl(4LL, &v91);
                    return 0LL;
                  }
                  ++v42;
                }
              }
              ++v38;
            }
            IsFormatSupported = -2004287480;
            v53 = 4251LL;
            goto LABEL_55;
          }
          _o_terminate(v28, v27);
          __debugbreak();
          JUMPOUT(0x180038CEELL);
        }
        v55 = 4239LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v55,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v21);
LABEL_59:
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v72);
      v56 = v70;
      v70 = 0LL;
      if ( v56 )
        CoTaskMemFree(v56);
      goto LABEL_61;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1076,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)IsFormatSupported);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v70,
      0LL);
  }
LABEL_61:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v91);
  return (unsigned int)IsFormatSupported;
}
