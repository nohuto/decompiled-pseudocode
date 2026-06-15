/*
 * XREFs of s_ccCreateHandsfreeHidFileFromAudioId @ 0x1800E9AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@QEAAXXZ @ 0x18006BDF0 (-RemoveAll@-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800A1F2C (-FreeNode@-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD900 (--1-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@QEAA.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800B0B28 (-reset@-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 *     ?AudioDeviceInterfaceGetContainerId@@YAJPEBGPEAU_GUID@@@Z @ 0x1800E93FC (-AudioDeviceInterfaceGetContainerId@@YAJPEBGPEAU_GUID@@@Z.c)
 *     ?FindSupportedHidCollection@@YAJPEAV?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@PEAPEAXPEAU_HIDP_CAPS@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800E9660 (-FindSupportedHidCollection@@YAJPEAV-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@PEAPEAXPEAU.c)
 *     ?GetHidCollectionsInContainer@@YAJU_GUID@@PEAV?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@@Z @ 0x1800E97AC (-GetHidCollectionsInContainer@@YAJU_GUID@@PEAV-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@@.c)
 */

__int64 __fastcall s_ccCreateHandsfreeHidFileFromAudioId(
        RPC_BINDING_HANDLE BindingHandle,
        const unsigned __int16 *a2,
        _DWORD *a3)
{
  const unsigned __int16 *v4; // rbx
  __int64 v6; // rsi
  char v7; // r13
  struct _TP_TIMER **v8; // r14
  __int64 v9; // rbx
  unsigned int v10; // edi
  struct AudioSrvTelemetryProvider *v11; // rax
  struct _TP_TIMER **v12; // rax
  struct _TP_TIMER **v13; // r14
  __int64 v14; // rbx
  unsigned int v15; // edi
  struct AudioSrvTelemetryProvider *v16; // rax
  struct _TP_TIMER **v17; // rax
  int ContainerId; // ebx
  int LastError; // eax
  HANDLE CurrentProcess; // rax
  _QWORD *v21; // rdx
  __int64 v22; // rax
  void *v23; // rdi
  HANDLE hSourceHandle; // [rsp+40h] [rbp-79h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+48h] [rbp-71h] BYREF
  void *v27; // [rsp+50h] [rbp-69h] BYREF
  void *v28; // [rsp+58h] [rbp-61h] BYREF
  struct _GUID v29; // [rsp+60h] [rbp-59h] BYREF
  __int128 v30; // [rsp+70h] [rbp-49h] BYREF
  __int64 v31; // [rsp+80h] [rbp-39h]
  __int128 v32; // [rsp+88h] [rbp-31h]
  int v33; // [rsp+98h] [rbp-21h]
  struct _HIDP_CAPS v34; // [rsp+A0h] [rbp-19h] BYREF
  unsigned int Pid; // [rsp+130h] [rbp+77h] BYREF
  HANDLE TargetHandle; // [rsp+138h] [rbp+7Fh] BYREF

  v33 = 10;
  v4 = a2;
  v31 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  memset_0(&v34, 0, sizeof(v34));
  v6 = -1LL;
  PreparsedData = 0LL;
  hSourceHandle = (HANDLE)-1LL;
  v7 = 0;
  TargetHandle = (HANDLE)-1LL;
  Pid = 0;
  v28 = 0LL;
  v27 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v8 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
    {
      v9 = (__int64)g_AudioHealthMonitor;
      v10 = g_AudioSrvWatchDogTimerInMs;
      v11 = AudioSrvTelemetryProvider::Instance();
      v12 = CWatchdogTimer<1>::CWatchdogTimer<1>(
              v8,
              *((struct _TP_TIMER **)v11 + 1),
              v10,
              (struct _TP_TIMER *)L"s_ccCreateHandsfreeHidFileFromAudioId",
              v9);
      v4 = a2;
    }
    else
    {
      v12 = 0LL;
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v28, v12);
  }
  else
  {
    v13 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v13 )
    {
      v14 = (__int64)g_AudioHealthMonitor;
      v15 = g_AudioSrvWatchDogTimerInMs;
      v16 = AudioSrvTelemetryProvider::Instance();
      v17 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
              v13,
              *((struct _TP_TIMER **)v16 + 1),
              v15,
              (struct _TP_TIMER *)L"s_ccCreateHandsfreeHidFileFromAudioId",
              v14);
      v4 = a2;
    }
    else
    {
      v17 = 0LL;
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v27, v17);
  }
  *a3 = 0;
  ContainerId = AudioDeviceInterfaceGetContainerId(v4, &v29);
  if ( ContainerId >= 0 )
  {
    ContainerId = GetHidCollectionsInContainer((__int64)&v29, (__int64)&v30);
    if ( ContainerId >= 0 )
    {
      ContainerId = FindSupportedHidCollection(&v30, &hSourceHandle, &v34, &PreparsedData);
      if ( ContainerId >= 0 )
      {
        LastError = I_RpcBindingInqLocalClientPID(BindingHandle, &Pid);
        if ( LastError )
        {
          if ( LastError <= 0 )
          {
            ContainerId = LastError;
            goto LABEL_22;
          }
LABEL_19:
          ContainerId = (unsigned __int16)LastError | 0x80070000;
          goto LABEL_22;
        }
        if ( RpcImpersonateClient(BindingHandle) )
          goto LABEL_22;
        v7 = 1;
        v6 = (__int64)OpenProcess(0x40u, 0, Pid);
        if ( !v6
          || (CurrentProcess = GetCurrentProcess(),
              !DuplicateHandle(CurrentProcess, hSourceHandle, (HANDLE)v6, &TargetHandle, 0xC0000000, 0, 0)) )
        {
          LastError = GetLastError();
          ContainerId = LastError;
          if ( LastError <= 0 )
            goto LABEL_22;
          goto LABEL_19;
        }
        ContainerId = 0;
        *a3 = (_DWORD)TargetHandle;
        TargetHandle = 0LL;
      }
    }
  }
LABEL_22:
  if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TargetHandle);
    TargetHandle = 0LL;
  }
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle((HANDLE)v6);
  if ( v7 )
    RpcRevertToSelf();
  if ( PreparsedData )
    HidD_FreePreparsedData(PreparsedData);
  if ( (char *)hSourceHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hSourceHandle);
  while ( v31 )
  {
    v21 = (_QWORD *)v30;
    if ( !(_QWORD)v30 )
      ATL::AtlThrowImpl(-2147467259);
    v22 = *(_QWORD *)v30;
    v23 = *(void **)(v30 + 16);
    *(_QWORD *)&v30 = v22;
    if ( v22 )
      *(_QWORD *)(v22 + 8) = 0LL;
    else
      v30 = 0uLL;
    ATL::CAtlList<unsigned short *,ATL::CElementTraits<unsigned short *>>::FreeNode((__int64)&v30, v21);
    CoTaskMemFree(v23);
  }
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v27);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v28);
  ATL::CAtlList<unsigned short *,ATL::CElementTraits<unsigned short *>>::RemoveAll((__int64)&v30);
  return (unsigned int)ContainerId;
}
