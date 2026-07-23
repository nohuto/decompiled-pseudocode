/*
 * XREFs of HvlPhase2Initialize @ 0x14057FF00
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ExNotifyWithProcessing @ 0x140442804 (ExNotifyWithProcessing.c)
 *     ExRegisterCallback @ 0x1404AE560 (ExRegisterCallback.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x140582FF4 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlpInitializeHvCrashdumpPhase2 @ 0x14058806C (HvlpInitializeHvCrashdumpPhase2.c)
 *     HvlpInitializeSvmIommuSupport @ 0x1405881D8 (HvlpInitializeSvmIommuSupport.c)
 *     HvlpCheckTscSync @ 0x140588350 (HvlpCheckTscSync.c)
 *     HvlpEtwRegister @ 0x140588494 (HvlpEtwRegister.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1405884DC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x140588774 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x14058896C (HvlpLogProcessorStartupFailure.c)
 *     HvlpWriteEventLog @ 0x140588A34 (HvlpWriteEventLog.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     EtwUnregister @ 0x140A52EC0 (EtwUnregister.c)
 *     ExCreateCallback @ 0x140A5CC10 (ExCreateCallback.c)
 *     IoCreateNotificationEvent @ 0x140A623D0 (IoCreateNotificationEvent.c)
 *     PoRegisterPowerSettingCallback @ 0x140A646B0 (PoRegisterPowerSettingCallback.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     HvlpDiscoverTopologyComplete @ 0x140C1B6CC (HvlpDiscoverTopologyComplete.c)
 */

NTSTATUS __fastcall HvlPhase2Initialize(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  struct _EVENT_DATA_DESCRIPTOR *p_UserData; // r8
  const EVENT_DESCRIPTOR *v9; // rcx
  ULONG v10; // edx
  NTSTATUS result; // eax
  __int64 v12; // rcx
  char *v13; // rcx
  GUID **v14; // rbx
  __int64 v15; // rdi
  unsigned int v16; // ecx
  UNICODE_STRING EventName; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING v18; // [rsp+48h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+88h] [rbp-80h]
  _QWORD v21[5]; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR CallbackObject; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C8h] [rbp-40h] BYREF

  *(_QWORD *)&EventName.Length = 4456514LL;
  EventName.Buffer = L"\\KernelObjects\\HvlWithdrawAllowed";
  v1 = *(_QWORD **)(a1 + 240);
  v18 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v3 = v1[316];
  v4 = v1[317];
  v5 = v1[318];
  v6 = v1[319];
  v7 = v1[320];
  if ( v3 )
  {
    HvlpEtwRegister();
    v20 = v3;
    v21[0] = v4;
    v21[1] = v5;
    v21[2] = v6;
    v21[3] = v7;
    if ( v3 == 35 )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)v21;
      p_UserData = &UserData;
      v10 = 1;
      v9 = &HV_EVENTLOG_BAL_HYPERVISOR_INIT_FAILED;
    }
    else
    {
      if ( v3 != 38 )
      {
LABEL_7:
        EtwUnregister(HvlGlobalSystemEventsHandle);
        HvlGlobalSystemEventsHandle = 0LL;
        goto LABEL_8;
      }
      p_UserData = 0LL;
      v9 = (const EVENT_DESCRIPTOR *)HV_EVENTLOG_BAL_TOO_MANY_RS_MEMORY_RANGES;
      v10 = 0;
    }
    HvlpWriteEventLog(v9, v10, p_UserData);
    goto LABEL_7;
  }
LABEL_8:
  if ( !HvlHypervisorConnected )
    return 0;
  if ( (HvlpFlags & 2) == 0 )
    goto LABEL_15;
  HvlpDiscoverTopologyComplete();
  HvlpSchedulerType = HvlpQueryHypervisorSchedulerType();
  if ( HvlpSchedulerType == 4 )
    HvlpRootSchedulerEnabled = 1;
  if ( !HvlpRootSchedulerEnabled
    || (result = HvlpInitializeSvmIommuSupport(), (int)(result + 0x80000000) < 0)
    || result == -1073741637 )
  {
LABEL_15:
    HvlpInitializeHvCrashdumpPhase2();
    if ( (HvlpRootFlags & 1) == 0 )
      goto LABEL_24;
    HvlpEtwRegister();
    HvlpWriteEventLog(&HV_EVENTLOG_START_SUCCEEDED, 0, 0LL);
    *(_QWORD *)&CallbackObject.Size = 4LL;
    CallbackObject.Ptr = (ULONGLONG)&HvlpSchedulerType;
    HvlpWriteEventLog(&HV_EVENTLOG_SCHEDULER_TYPE, 1u, &CallbackObject);
    HvlpCheckTscSync(v12);
    HvlpLogIommuInitStatus();
    HvlpLogGuestStateScrubbingStatus();
    if ( (unsigned int)HvlpLogicalProcessorCount < HvlpLogicalProcessorRegionsCount )
    {
      v13 = (char *)HvlpLogicalProcessorRegions + 104 * (unsigned int)HvlpLogicalProcessorCount;
      if ( !*v13 )
      {
        if ( *((_WORD *)v13 + 20) )
          HvlpLogProcessorStartupFailure(*((unsigned int *)v13 + 2), *((unsigned __int16 *)v13 + 20));
      }
    }
    if ( HvlpMinrootConfigurationError )
      HvlpWriteEventLog(&HV_EVENTLOG_CORE_SCHEDULER_PROCESSOR_CONFIGURATION_WARNING, 0, 0LL);
    RtlInitUnicodeString(&v18, L"\\Callback\\PowerState");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v18;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 80;
    CallbackObject.Ptr = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ExCreateCallback((PCALLBACK_OBJECT *)&CallbackObject, &ObjectAttributes, 0, 1u);
    if ( result >= 0 )
    {
      ExRegisterCallback((PCALLBACK_OBJECT)CallbackObject.Ptr, (PCALLBACK_FUNCTION)HvlpPowerStateCallback, 0LL);
LABEL_24:
      if ( ExCbEnlightenmentState )
        ExNotifyWithProcessing(ExCbEnlightenmentState, 0LL, 0LL, 0LL);
      if ( (HvlpEnlightenments & 0x400) != 0 )
      {
        v14 = &HvlpPowerSettingList;
        v15 = 6LL;
        do
        {
          PoRegisterPowerSettingCallback(0LL, *v14, HvlpPowerPolicySettingCallback, (PVOID)*((int *)v14 + 2), 0LL);
          v14 += 2;
          --v15;
        }
        while ( v15 );
      }
      HvlpBootPagesInfo = 0LL;
      qword_140F8E250 = IoCreateNotificationEvent(&EventName, &EventHandle);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 240) + 2552LL) )
      {
        byte_140F8E248 = 1;
        qword_140F8E260 = (PVOID)ExAllocatePool2(
                                   0x100uLL,
                                   (unsigned int)(8 * *(_DWORD *)(*(_QWORD *)(a1 + 240) + 2552LL) + 8),
                                   0x204C5648u);
        if ( !qword_140F8E260 )
          return -1073741670;
        v16 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 2552LL);
        *(_DWORD *)qword_140F8E260 = v16;
        memmove((char *)qword_140F8E260 + 8, *(const void **)(*(_QWORD *)(a1 + 240) + 2544LL), 8LL * v16);
        KeResetEvent(qword_140F8E250);
      }
      return 0;
    }
  }
  return result;
}
