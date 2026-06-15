/*
 * XREFs of s_ccCreateHandsfreeHidFileFromAudioId @ 0x1800E5720
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@QEAAXXZ @ 0x18007DF90 (-RemoveAll@-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800A5B1C (-FreeNode@-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     ?AudioDeviceInterfaceGetContainerId@@YAJPEBGPEAU_GUID@@@Z @ 0x1800E5044 (-AudioDeviceInterfaceGetContainerId@@YAJPEBGPEAU_GUID@@@Z.c)
 *     ?FindSupportedHidCollection@@YAJPEAV?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@PEAPEAXPEAU_HIDP_CAPS@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800E52A0 (-FindSupportedHidCollection@@YAJPEAV-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@PEAPEAXPEAU.c)
 *     ?GetHidCollectionsInContainer@@YAJU_GUID@@PEAV?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@@Z @ 0x1800E53EC (-GetHidCollectionsInContainer@@YAJU_GUID@@PEAV-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@@.c)
 */

__int64 __fastcall s_ccCreateHandsfreeHidFileFromAudioId(
        RPC_BINDING_HANDLE BindingHandle,
        unsigned __int16 *a2,
        _DWORD *a3)
{
  unsigned int v6; // edi
  __int64 v7; // r14
  char v8; // r12
  __int64 v9; // rbx
  struct AudioSrvTelemetryProvider *v10; // rax
  int ContainerId; // ebx
  int LastError; // eax
  HANDLE CurrentProcess; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rax
  void *v16; // rdi
  HANDLE hSourceHandle; // [rsp+40h] [rbp-C0h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+48h] [rbp-B8h] BYREF
  struct _GUID v20; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h]
  __int128 v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+88h] [rbp-78h]
  struct _TP_TIMER *pv[8]; // [rsp+90h] [rbp-70h] BYREF
  struct _HIDP_CAPS v26; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int Pid; // [rsp+160h] [rbp+60h] BYREF
  HANDLE TargetHandle; // [rsp+168h] [rbp+68h] BYREF

  v24 = 10;
  v22 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  memset_0(&v26, 0, sizeof(v26));
  v6 = g_AudioSrvWatchDogTimerInMs;
  v7 = -1LL;
  Pid = 0;
  v8 = 0;
  PreparsedData = 0LL;
  v9 = (__int64)g_AudioHealthMonitor;
  hSourceHandle = (HANDLE)-1LL;
  TargetHandle = (HANDLE)-1LL;
  v10 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v10 + 1),
    v6,
    (struct _TP_TIMER *)L"s_ccCreateHandsfreeHidFileFromAudioId",
    v9);
  *a3 = 0;
  ContainerId = AudioDeviceInterfaceGetContainerId(a2, &v20);
  if ( ContainerId >= 0 )
  {
    ContainerId = GetHidCollectionsInContainer((__int64)&v20, (__int64)&v21);
    if ( ContainerId >= 0 )
    {
      ContainerId = FindSupportedHidCollection(&v21, &hSourceHandle, &v26, &PreparsedData);
      if ( ContainerId >= 0 )
      {
        LastError = I_RpcBindingInqLocalClientPID(BindingHandle, &Pid);
        if ( LastError )
        {
          if ( LastError <= 0 )
          {
            ContainerId = LastError;
            goto LABEL_13;
          }
LABEL_10:
          ContainerId = (unsigned __int16)LastError | 0x80070000;
          goto LABEL_13;
        }
        if ( RpcImpersonateClient(BindingHandle) )
          goto LABEL_13;
        v8 = 1;
        v7 = (__int64)OpenProcess(0x40u, 0, Pid);
        if ( !v7
          || (CurrentProcess = GetCurrentProcess(),
              !DuplicateHandle(CurrentProcess, hSourceHandle, (HANDLE)v7, &TargetHandle, 0xC0000000, 0, 0)) )
        {
          LastError = GetLastError();
          ContainerId = LastError;
          if ( LastError <= 0 )
            goto LABEL_13;
          goto LABEL_10;
        }
        ContainerId = 0;
        *a3 = (_DWORD)TargetHandle;
        TargetHandle = 0LL;
      }
    }
  }
LABEL_13:
  if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TargetHandle);
    TargetHandle = 0LL;
  }
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle((HANDLE)v7);
  if ( v8 )
    RpcRevertToSelf();
  if ( PreparsedData )
    HidD_FreePreparsedData(PreparsedData);
  if ( (char *)hSourceHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hSourceHandle);
  while ( v22 )
  {
    v14 = (_QWORD *)v21;
    if ( !(_QWORD)v21 )
      ATL::AtlThrowImpl(-2147467259);
    v15 = *(_QWORD *)v21;
    v16 = *(void **)(v21 + 16);
    *(_QWORD *)&v21 = v15;
    if ( v15 )
      *(_QWORD *)(v15 + 8) = 0LL;
    else
      v21 = 0uLL;
    ATL::CAtlList<unsigned short *,ATL::CElementTraits<unsigned short *>>::FreeNode((__int64)&v21, v14);
    CoTaskMemFree(v16);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  ATL::CAtlList<unsigned short *,ATL::CElementTraits<unsigned short *>>::RemoveAll((__int64)&v21);
  return (unsigned int)ContainerId;
}
