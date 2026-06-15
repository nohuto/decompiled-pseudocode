/*
 * XREFs of AudioServerGetDevicePeriod @ 0x1800380C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800319B0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180031D9C (-GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800334C0 (-GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_00.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180037B80 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180038CF4 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003A4AC (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerGetDevicePeriod(
        __int64 a1,
        __int64 a2,
        struct VadServerSettings *a3,
        __int64 a4,
        _QWORD *a5,
        __int64 *a6)
{
  struct _FILETIME v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r10
  int v12; // eax
  int ConnectorFormatForProcessingMode; // ebx
  int MinProcessingPeriodForExclusiveMode; // eax
  struct tWAVEFORMATEX *v15; // rdx
  int v16; // eax
  struct _GUID v17; // xmm6
  struct tWAVEFORMATEX *v18; // rdx
  void *v19; // rcx
  const struct tWAVEFORMATEX *v20; // r15
  __int64 v21; // r8
  __int64 v22; // r9
  int i; // ecx
  _QWORD *v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rdi
  _QWORD *v27; // r14
  _QWORD *v28; // rcx
  __int64 v29; // rax
  const struct tWAVEFORMATEX ***v30; // rbx
  const struct tWAVEFORMATEX ***v31; // rsi
  void *v32; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  int j; // eax
  _QWORD *v37; // rdx
  __int64 v38; // rcx
  GUID v39; // xmm0
  struct _FILETIME pftDueTime; // [rsp+88h] [rbp-80h] BYREF
  EffectPack *v41[2]; // [rsp+90h] [rbp-78h] BYREF
  std::_Ref_count_base *v42; // [rsp+A0h] [rbp-68h]
  struct _FILETIME *p_pftDueTime; // [rsp+A8h] [rbp-60h]
  struct tWAVEFORMATEX *v44; // [rsp+B0h] [rbp-58h] BYREF
  char v45; // [rsp+B8h] [rbp-50h]
  _QWORD pv[2]; // [rsp+C0h] [rbp-48h] BYREF
  DWORD CurrentThreadId; // [rsp+D0h] [rbp-38h]
  const wchar_t *v48; // [rsp+D8h] [rbp-30h]
  struct _FILETIME v49; // [rsp+E0h] [rbp-28h]
  char v50; // [rsp+E8h] [rbp-20h]
  __int64 v51; // [rsp+ECh] [rbp-1Ch]
  struct _GUID v52; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v53; // [rsp+108h] [rbp+0h]
  __int128 v54; // [rsp+118h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v53 = *(_OWORD *)a3;
  v54 = v53;
  EtwEventActivityIdControl(4LL, &v54);
  v8 = g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  v10 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v10;
  CurrentThreadId = GetCurrentThreadId();
  v48 = L"AudioServerGetDevicePeriod";
  v49 = v8;
  v50 = 0;
  v51 = 0LL;
  if ( (unsigned int)v9 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v9 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v9 / 3, 0);
    }
  }
  v12 = ValidateVadServerSettings(a3);
  ConnectorFormatForProcessingMode = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1029,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_42;
  }
  *(_OWORD *)v41 = 0LL;
  v42 = 0LL;
  MinProcessingPeriodForExclusiveMode = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, EffectPack **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 40LL))(
                                          g_pEndpointCharacteristicsCache,
                                          a2,
                                          0LL,
                                          0LL,
                                          v41);
  ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
  if ( MinProcessingPeriodForExclusiveMode < 0 )
  {
    v35 = 4140LL;
    goto LABEL_45;
  }
  if ( a5 )
  {
    v52 = 0LL;
    v16 = (*(__int64 (__fastcall **)(EffectPack *))(*(_QWORD *)v41[0] + 56LL))(v41[0]);
    MinProcessingPeriodForExclusiveMode = DeriveAudioProcessingModeConfiguration(
                                            *((unsigned int *)a3 + 12),
                                            *((unsigned int *)a3 + 14),
                                            *((unsigned int *)a3 + 32),
                                            v41,
                                            v16 == 1,
                                            0,
                                            0,
                                            0LL,
                                            0,
                                            0,
                                            0LL,
                                            &v52,
                                            0LL,
                                            0LL,
                                            0LL,
                                            0LL);
    ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
    if ( MinProcessingPeriodForExclusiveMode >= 0 )
    {
      pftDueTime = 0LL;
      p_pftDueTime = &pftDueTime;
      v44 = 0LL;
      v45 = 1;
      v17 = v52;
      ConnectorFormatForProcessingMode = EffectPack::GetConnectorFormatForProcessingMode(
                                           v41[1],
                                           eHostProcessConnector,
                                           &v52,
                                           &v44);
      if ( v45 )
      {
        v19 = (void *)*p_pftDueTime;
        v18 = v44;
        *p_pftDueTime = (struct _FILETIME)v44;
        if ( v19 )
          CoTaskMemFree(v19);
      }
      if ( ConnectorFormatForProcessingMode < 0 )
      {
        v34 = 4168LL;
LABEL_40:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v34,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)ConnectorFormatForProcessingMode);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&pftDueTime,
          0LL);
LABEL_41:
        EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v41);
LABEL_42:
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
        EtwEventActivityIdControl(4LL, &v54);
        return (unsigned int)ConnectorFormatForProcessingMode;
      }
      v20 = (const struct tWAVEFORMATEX *)pftDueTime;
      if ( *((_QWORD *)v41[1] + 236) )
      {
        v21 = *((_QWORD *)v41[1] + 237);
        v52 = v17;
        v22 = *((_QWORD *)v41[1] + 198);
        for ( i = 0; ; ++i )
        {
          if ( i >= *(_DWORD *)(v21 + 16) )
            goto LABEL_19;
          v24 = (_QWORD *)(*(_QWORD *)v21 + 16LL * i);
          v25 = *v24 - *(_QWORD *)&v52.Data1;
          if ( *v24 == *(_QWORD *)&v52.Data1 )
            v25 = v24[1] - *(_QWORD *)v52.Data4;
          if ( !v25 )
            break;
        }
        if ( i == -1 )
        {
LABEL_19:
          v52 = v17;
          goto LABEL_20;
        }
        v52 = v17;
        for ( j = 0; ; ++j )
        {
          if ( j >= *(_DWORD *)(v21 + 16) )
            goto LABEL_56;
          v37 = (_QWORD *)(*(_QWORD *)v21 + 16LL * j);
          v38 = *v37 - *(_QWORD *)&v52.Data1;
          if ( *v37 == *(_QWORD *)&v52.Data1 )
            v38 = v37[1] - *(_QWORD *)v52.Data4;
          if ( !v38 )
            break;
        }
        if ( j == -1 )
        {
LABEL_56:
          v39 = GUID_00000000_0000_0000_0000_000000000000;
          goto LABEL_54;
        }
        if ( j < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v37);
          __debugbreak();
        }
        v39 = *(GUID *)(*(_QWORD *)(v21 + 8) + 16LL * j);
LABEL_54:
        v52 = v39;
LABEL_20:
        v26 = *(_QWORD **)(v22 + 272);
        v27 = *(_QWORD **)(v22 + 280);
        while ( v26 != v27 )
        {
          v28 = (_QWORD *)*v26;
          v29 = *(_QWORD *)*v26 - *(_QWORD *)&v52.Data1;
          if ( !v29 )
            v29 = v28[1] - *(_QWORD *)v52.Data4;
          if ( !v29 )
          {
            v30 = (const struct tWAVEFORMATEX ***)v28[2];
            v31 = (const struct tWAVEFORMATEX ***)v28[3];
            while ( v30 != v31 )
            {
              if ( (unsigned int)CompareWaveFormat(v20, **v30) )
              {
                v32 = (void *)pftDueTime;
                *a5 = (unsigned int)(int)((double)*((int *)*v30 + 3)
                                        * 10000000.0
                                        / (double)*(int *)(*(_QWORD *)&pftDueTime + 4LL)
                                        + 0.5);
                pftDueTime = 0LL;
                if ( v32 )
                  CoTaskMemFree(v32);
                goto LABEL_30;
              }
              ++v30;
            }
          }
          ++v26;
        }
        ConnectorFormatForProcessingMode = -2004287480;
        v34 = 4172LL;
        goto LABEL_40;
      }
      MinProcessingPeriodForExclusiveMode = _o_terminate(v19, v18);
      __debugbreak();
      goto LABEL_62;
    }
    v35 = 4164LL;
LABEL_45:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)MinProcessingPeriodForExclusiveMode);
    goto LABEL_41;
  }
LABEL_30:
  if ( a6 )
  {
    MinProcessingPeriodForExclusiveMode = EffectPack::GetMinProcessingPeriodForExclusiveMode(v41[1], v15, a6);
    ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
    if ( MinProcessingPeriodForExclusiveMode < 0 )
    {
LABEL_62:
      v35 = 4180LL;
      goto LABEL_45;
    }
  }
  if ( v42 )
    std::_Ref_count_base::_Decref(v42);
  if ( v41[0] )
    (*(void (__fastcall **)(EffectPack *))(*(_QWORD *)v41[0] + 16LL))(v41[0]);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v54);
  return 0LL;
}
