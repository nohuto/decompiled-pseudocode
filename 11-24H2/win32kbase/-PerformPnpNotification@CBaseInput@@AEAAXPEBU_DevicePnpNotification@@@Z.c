/*
 * XREFs of ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x14020D128
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1401140EC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     IsInputProcessingActivated @ 0x140048E30 (IsInputProcessingActivated.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x140106334 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     GetKnownRIMDeviceKind @ 0x140143F70 (GetKnownRIMDeviceKind.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x1401B666C (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x14020C158 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall CBaseInput::PerformPnpNotification(CBaseInput *this, const struct _DevicePnpNotification *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  bool v8; // zf
  unsigned int v9; // eax
  __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  int KnownRIMDeviceKind; // eax
  __int64 v13; // r10
  int (*v14)(void); // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  void (__fastcall *v17)(const struct _DevicePnpNotification *); // rax

  if ( !PtiCurrent((__int64)this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2007);
  if ( IsInputProcessingActivated(v4) )
  {
    IsEnabledDeviceUsageNoInline = Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline();
    v6 = *((unsigned int *)a2 + 5);
    v8 = IsEnabledDeviceUsageNoInline == 0;
    v9 = v6 - 2;
    if ( v8 )
    {
      if ( v9 > 1 )
        goto LABEL_14;
    }
    else if ( (v9 & 0xFFFFFFFA) != 0 || (_DWORD)v6 == 7 )
    {
      goto LABEL_14;
    }
    if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread != *(struct _KTHREAD **)(W32GetUserSessionState(v10) + 19424)
        || (*(_DWORD *)(*(_QWORD *)a2 + 168LL) & 0x40) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2049);
      }
    }
    KnownRIMDeviceKind = GetKnownRIMDeviceKind(*(_QWORD *)a2);
    CBaseInput::ForwardPnpNotificationToISM(KnownRIMDeviceKind, v13, *((_QWORD *)a2 + 1), *((_DWORD *)a2 + 5));
  }
LABEL_14:
  v14 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48) + 5424LL);
  if ( v14 && v14() >= 0 )
  {
    v17 = *(void (__fastcall **)(const struct _DevicePnpNotification *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                       v16,
                                                                                       v15)
                                                                                   + 48)
                                                                       + 5432LL);
    if ( v17 )
      v17(a2);
  }
}
