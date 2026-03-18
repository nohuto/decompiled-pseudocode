/*
 * XREFs of ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0135D08
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1C01371D0 (xxxUserChangeDisplaySettings.c)
 * Callees:
 *     PowerDimUndimResend @ 0x1C001225C (PowerDimUndimResend.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C0012418 (-TrackFullscreenMode@@YAXH@Z.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0012948 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     DrvQueryMDEVPowerState @ 0x1C0013700 (DrvQueryMDEVPowerState.c)
 *     xxxResetDisplayDevice @ 0x1C00138D0 (xxxResetDisplayDevice.c)
 *     DrvSetDisplayConfig @ 0x1C0014230 (DrvSetDisplayConfig.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00665BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     SafeEnableMDEV @ 0x1C00CC6B0 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00CC700 (SafeDisableMDEV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF238 (McTemplateK0_EtwWriteTransfer.c)
 *     ?xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z @ 0x1C012F5A0 (-xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z.c)
 *     DrvChangeDisplaySettings @ 0x1C01656CC (DrvChangeDisplaySettings.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C0165ABC (DrvChangeDisplaySettingsPreValidate.c)
 *     DrvSetPruneFlag @ 0x1C0167C0C (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C0167D58 (DrvSetVideoParameters.c)
 *     LogDiagCDS @ 0x1C01684B0 (LogDiagCDS.c)
 *     IszzzUpdateCursorImageSupported @ 0x1C0233234 (IszzzUpdateCursorImageSupported.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettingsInternal(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        struct tagDESKTOP *a3,
        int a4,
        void *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  struct tagDESKTOP *v8; // r13
  char v9; // si
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rdx
  _DWORD *v15; // rax
  int v16; // r15d
  char v17; // dl
  BOOL v18; // ebx
  int v19; // r13d
  enum _MODE v20; // r12d
  __int64 v21; // rbx
  ULONG TimeIncrement; // eax
  int v23; // r8d
  const UNICODE_STRING *v24; // r14
  __int64 v25; // rdi
  int v26; // r8d
  __int64 v27; // r9
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v28; // rdi
  struct _MDEV *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // edx
  void *v34; // rax
  _QWORD *v35; // rcx
  void *v36; // rdx
  int v38; // [rsp+28h] [rbp-B1h]
  bool v39; // [rsp+88h] [rbp-51h] BYREF
  int v40; // [rsp+8Ch] [rbp-4Dh]
  int v41; // [rsp+90h] [rbp-49h]
  int v42; // [rsp+94h] [rbp-45h] BYREF
  BOOL v43; // [rsp+98h] [rbp-41h]
  int v44; // [rsp+9Ch] [rbp-3Dh]
  int v45; // [rsp+A0h] [rbp-39h]
  struct _MDEV *v46; // [rsp+A8h] [rbp-31h] BYREF
  int v47; // [rsp+B0h] [rbp-29h]
  __int64 v48; // [rsp+B8h] [rbp-21h] BYREF
  __int128 v49; // [rsp+C0h] [rbp-19h] BYREF
  __int64 v50; // [rsp+D0h] [rbp-9h]
  struct _devicemodeW *v52; // [rsp+130h] [rbp+57h]
  struct tagDESKTOP *Object; // [rsp+138h] [rbp+5Fh]
  char v54; // [rsp+140h] [rbp+67h] BYREF

  Object = a3;
  v52 = a2;
  v46 = 0LL;
  v54 = 0;
  v8 = a3;
  v50 = 0LL;
  v49 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0_EtwWriteTransfer((__int64)a1, &ChangeDisplayModeStart, 0LL);
  v9 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      12,
      (__int64)&WPP_a7da67abce9c330eea32ee74e85516b9_Traceguids);
  }
  v10 = (__int64)WPP_GLOBAL_Control;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      13,
      (__int64)&WPP_a7da67abce9c330eea32ee74e85516b9_Traceguids);
  }
  v40 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        14,
        (__int64)&WPP_a7da67abce9c330eea32ee74e85516b9_Traceguids);
    }
  }
  if ( (a4 & 2) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        15,
        (__int64)&WPP_a7da67abce9c330eea32ee74e85516b9_Traceguids);
    }
  }
  v41 = a4 & 4;
  if ( (a4 & 4) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        16,
        (__int64)&WPP_a7da67abce9c330eea32ee74e85516b9_Traceguids);
    }
  }
  if ( (a4 & 8) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        17,
        (__int64)&WPP_a7da67abce9c330eea32ee74e85516b9_Traceguids);
    }
  }
  if ( (a4 & 0x10) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        18,
        (__int64)&WPP_a7da67abce9c330eea32ee74e85516b9_Traceguids);
    }
  }
  v47 = a4 & 0x40000000;
  if ( (a4 & 0x40000000) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        19,
        (__int64)&WPP_a7da67abce9c330eea32ee74e85516b9_Traceguids);
    }
  }
  v44 = a4 & 0x20000000;
  if ( (a4 & 0x20000000) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        20,
        (__int64)&WPP_a7da67abce9c330eea32ee74e85516b9_Traceguids);
    }
  }
  if ( (a4 & 0x10000000) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        21,
        (__int64)&WPP_a7da67abce9c330eea32ee74e85516b9_Traceguids);
    }
  }
  v45 = a4 & 0x20;
  if ( (a4 & 0x20) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        22,
        (__int64)&WPP_a7da67abce9c330eea32ee74e85516b9_Traceguids);
    }
  }
  if ( (a4 & 0x100) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        23,
        (__int64)&WPP_a7da67abce9c330eea32ee74e85516b9_Traceguids);
    }
  }
  if ( (a4 & 0x200) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        24,
        (__int64)&WPP_a7da67abce9c330eea32ee74e85516b9_Traceguids);
    }
  }
  if ( (a4 & 0x7FFF800) != 0 )
    goto LABEL_138;
  if ( !(unsigned int)DrvQueryMDEVPowerState(*((_QWORD *)gpDispInfo + 2)) )
  {
    if ( (a4 & 0x20) == 0 || (v11 = DrvSetVideoParameters(a1, 1), v11 < 0) )
      v11 = -5;
    goto LABEL_239;
  }
  if ( gbMDEVDisabled )
  {
    if ( (a4 & 0x20) != 0 )
    {
      v38 = 1;
LABEL_168:
      v11 = DrvSetVideoParameters(a1, v38);
      if ( v11 >= 0 )
        goto LABEL_239;
      goto LABEL_173;
    }
    goto LABEL_173;
  }
  LOBYTE(v10) = (a4 & 0x10000008) != 0;
  if ( ((unsigned __int8)v10 & ((a4 & 1) == 0)) != 0 )
    goto LABEL_138;
  v12 = 1610612736LL;
  v10 = a4 & 0x60000000;
  if ( (a4 & 0x10000000) != 0 )
  {
    if ( (_DWORD)v10 )
      goto LABEL_138;
  }
  v13 = 2147483652LL;
  if ( (a4 & 0x80000004) != 0x80000004 )
  {
    if ( (_DWORD)v10 != 1610612736 )
      goto LABEL_134;
LABEL_138:
    v11 = -4;
    goto LABEL_239;
  }
  if ( (_DWORD)v10 )
    goto LABEL_138;
LABEL_134:
  if ( (a4 & 0x100) != 0 && a4 != 256 || (a4 & 0x200) != 0 && a4 != 512 )
    goto LABEL_138;
  if ( (gdwPUDFlags & 0x20000000) != 0
    && ((PVOID)PsGetCurrentProcess(v10, 2147483652LL, 1610612736LL) != gpepCSRSS
     || !qword_1C02962C0
     || !(unsigned int)qword_1C02962C0(v10)) )
  {
    goto LABEL_173;
  }
  if ( !v8 || (*((_DWORD *)v8 + 12) & 8) != 0 )
  {
    v8 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 57);
    Object = v8;
  }
  if ( (PVOID)PsGetCurrentProcess(v10, v13, v12) == gpepCSRSS )
  {
    if ( !v8 )
      Object = grpdeskRitInput;
  }
  else if ( v8 != grpdeskRitInput )
  {
    if ( (a4 & 0x20) != 0 )
    {
      v38 = 0;
      goto LABEL_168;
    }
    goto LABEL_173;
  }
  if ( (a4 & 0x100) != 0 )
  {
    v14 = 0LL;
LABEL_156:
    v11 = DrvSetPruneFlag(a1, v14, (unsigned int)a6);
    goto LABEL_239;
  }
  if ( (a4 & 0x200) != 0 )
  {
    LOBYTE(v14) = 1;
    goto LABEL_156;
  }
  v15 = DispBroker::DispBrokerClient::s_pSessionBroker;
  v16 = a4 & 0x10000002;
  v17 = *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8);
  v10 = (__int64)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
  v18 = (a4 & 0x10000002) == 0;
  v19 = a4 & 0x80;
  v43 = v18;
  if ( !v17 )
    v10 = (__int64)DispBroker::DispBrokerClient::s_pSessionBroker;
  v20 = a6;
  if ( *(_DWORD *)v10 != 3 )
  {
    if ( v17 )
      v15 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
    if ( *v15 == 2 )
    {
      if ( v45 )
      {
        v38 = 0;
        goto LABEL_168;
      }
LABEL_173:
      v11 = -1;
      goto LABEL_239;
    }
LABEL_171:
    if ( !v16 )
    {
      if ( !CreateCachedMonitor() )
        goto LABEL_173;
      if ( qword_1C02959E8 )
        qword_1C02959E8(0LL);
      if ( qword_1C0295FE8 && (int)qword_1C0295FE8() >= 0 && qword_1C0295FF0 )
        qword_1C0295FF0();
    }
    if ( qword_1C0291E38 && qword_1C0295FF8 && (int)qword_1C0295FF8() >= 0 && qword_1C0296000 )
      qword_1C0296000();
    if ( qword_1C0294E78 && (int)qword_1C0294E78() >= 0 && qword_1C0294E80 )
      qword_1C0294E80(*((_QWORD *)gpDispInfo + 5), 0LL, 0LL, 0LL);
    if ( Object )
      v27 = ***((_QWORD ***)Object + 1);
    else
      LODWORD(v27) = 0;
    v28 = a7;
    v11 = DrvChangeDisplaySettings(
            (_DWORD)a1,
            *(_QWORD *)(*((_QWORD *)gpDispInfo + 12) + 80LL),
            (_DWORD)v52,
            v27,
            v20,
            v40,
            v18,
            *((_QWORD *)gpDispInfo + 2),
            (__int64)&v46,
            (unsigned int)((a4 & 0x40) != 0) - 1,
            v19,
            v44,
            v41,
            (__int64)&v54,
            (__int64)a7);
    if ( qword_1C0295450 )
      qword_1C0295450(Object, &v49, CompositionObject::Release);
    if ( Object )
      ObfReferenceObject(Object);
    if ( v16 )
      goto LABEL_226;
    if ( v11 == 2 )
    {
      TrackFullscreenMode(v41);
      if ( v47 )
      {
        if ( (unsigned int)SafeDisableMDEV(1u) )
          SafeEnableMDEV(1u);
        if ( qword_1C0295A48 )
          qword_1C0295A48();
      }
      v11 = 0;
    }
    else
    {
      if ( v11 )
      {
        if ( v11 >= 0 )
          goto LABEL_217;
        if ( qword_1C0295A48 )
          qword_1C0295A48();
        if ( !v54 )
          goto LABEL_217;
        v39 = 0;
        v34 = Object ? (void *)***((_QWORD ***)Object + 1) : 0LL;
        if ( (int)DrvSetDisplayConfig(
                    0,
                    0LL,
                    0x98Fu,
                    2u,
                    v34,
                    0,
                    0LL,
                    0LL,
                    *((struct _MDEV **)gpDispInfo + 2),
                    &v46,
                    0LL,
                    0LL,
                    &v39,
                    0LL,
                    (__int64)v28,
                    0LL) < 0 )
          goto LABEL_217;
        TrackFullscreenMode(0);
        if ( v39 )
          goto LABEL_217;
        v33 = 0;
        *((_QWORD *)gpDispInfo + 2) = v46;
      }
      else
      {
        TrackFullscreenMode(v41);
        v29 = v46;
        *((_QWORD *)gpDispInfo + 2) = v46;
        PowerDimUndimResend((__int64)v29, v30, v31, v32);
        v33 = v41;
      }
      xxxResetDisplayDevice((__int64)Object, v33, 0, 0LL);
    }
LABEL_217:
    if ( Object )
    {
      v35 = (_QWORD *)*((_QWORD *)Object + 1);
      if ( (*(_DWORD *)(*v35 + 64LL) & 1) == 0 )
      {
        if ( qword_1C0295EF0 )
          qword_1C0295EF0(v35[3], 1LL, 66693LL);
      }
    }
    if ( qword_1C02959E8 )
      qword_1C02959E8(1LL);
    if ( (int)IszzzUpdateCursorImageSupported() >= 0 && qword_1C0296010 )
      qword_1C0296010();
LABEL_226:
    if ( qword_1C0295548 )
      qword_1C0295548(&v49);
    v24 = a1;
    goto LABEL_229;
  }
  v48 = 0LL;
  v42 = 1;
  v11 = DrvChangeDisplaySettingsPreValidate(a1, v40, (__int64)&v48, (__int64)&v42);
  if ( v11 )
    goto LABEL_239;
  if ( !v42 )
  {
    v18 = v43;
    goto LABEL_171;
  }
  v21 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v23 = a4;
  v24 = a1;
  v25 = v21 * TimeIncrement;
  v11 = xxxDispBrokerChangeDisplaySettings(a1, v52, v23, v20 == UserMode);
  LogDiagCDS(a1, v52, v48, (unsigned int)v20, v40, v43, v19, v44, v25, v11, v11, 11, 0, 0LL);
LABEL_229:
  if ( v11 >= 0 && v45 )
    v11 = DrvSetVideoParameters(v24, 0);
  v10 = (__int64)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v9 = 0;
  }
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v36 = &WPP_a7da67abce9c330eea32ee74e85516b9_Traceguids;
    LOBYTE(v36) = v9;
    LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v36,
      v26,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      25,
      (__int64)&WPP_a7da67abce9c330eea32ee74e85516b9_Traceguids,
      v11);
  }
LABEL_239:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0_EtwWriteTransfer(v10, &ChangeDisplayModeEnd, 0LL);
  return (unsigned int)v11;
}
