/*
 * XREFs of ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x140210BA4
 * Callers:
 *     GetCursorUpdateHandle @ 0x140212734 (GetCursorUpdateHandle.c)
 * Callees:
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1400DA4B0 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x140104354 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401A726C (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ @ 0x14020C618 (-GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ.c)
 */

void *__fastcall CMouseSensor::GetCursorUpdateHandle(CMouseSensor *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 DispatcherHandleByName; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 CurrentProcess; // rax
  void *SensorHostingProcessHandle; // rdi
  void *v9; // rax
  void *TargetHandle; // [rsp+70h] [rbp+18h] BYREF

  if ( !IsInputThread((__int64)this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 160);
  TargetHandle = (void *)-1LL;
  if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
  {
    DispatcherHandleByName = CRIMBase::GetDispatcherHandleByName((__int64)this, 0xDu, 0);
    if ( DispatcherHandleByName )
    {
      CurrentProcess = PsGetCurrentProcess(v3, v2, v5, v6);
      if ( (int)ObDuplicateObject(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 32LL),
                  DispatcherHandleByName,
                  CurrentProcess,
                  &TargetHandle,
                  0,
                  0,
                  6,
                  1) < 0 )
        TargetHandle = (void *)-1LL;
    }
  }
  else
  {
    SensorHostingProcessHandle = (void *)CBaseInput::GetSensorHostingProcessHandle(this);
    if ( SensorHostingProcessHandle != (void *)-1LL )
    {
      v9 = (void *)CRIMBase::GetDispatcherHandleByName((__int64)this, 0xDu, 0);
      if ( v9
        && ZwDuplicateObject(
             SensorHostingProcessHandle,
             v9,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &TargetHandle,
             0x100000u,
             0,
             2u) < 0 )
      {
        TargetHandle = (void *)-1LL;
      }
      ZwClose(SensorHostingProcessHandle);
    }
  }
  if ( TargetHandle == (void *)-1LL && (unsigned int)CBaseProcessor::GetExecutionEnvironment(v3) == 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 210);
  return TargetHandle;
}
