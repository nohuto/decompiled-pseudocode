/*
 * XREFs of PopBatteryAdd @ 0x14075AC50
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     IoSynchronousCallDriver @ 0x140374C50 (IoSynchronousCallDriver.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x1404A42EC (PopBatteryQueueWork.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1404F96CC (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopPrepareIoctl @ 0x140A5D1E8 (PopPrepareIoctl.c)
 *     PopChangeCapability @ 0x140A688B0 (PopChangeCapability.c)
 *     PopBatteryWaitTag @ 0x140AB9BF0 (PopBatteryWaitTag.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopBatteryAdd(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF

  v12 = 0LL;
  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  if ( ++dword_140F0AE50 == 1 )
  {
    PopAcquirePolicyLock(v3, v2);
    LOBYTE(v4) = 1;
    PopChangeCapability(&byte_140F0BB5E, v4);
    PopReleasePolicyLock(v6, v5, v7, v8, v11);
    _m_prefetchw(&PopCadLoadReason);
    if ( !_InterlockedOr(&PopCadLoadReason, 1u) )
      ExQueueWorkItem(&PopCadTriggerDriverLoadWorkItem, DelayedWorkQueue);
  }
  if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
  {
    v9 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 248) = 0;
    v12 = 0LL;
    PopPrepareIoctl(v9, 2703464, 0, (unsigned int)&v12, 0, 8);
    if ( IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56)) >= 0 )
      *(_DWORD *)(a1 + 248) = HIDWORD(v12);
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB);
  byte_140F0AE58 = 1;
  PopBatteryWaitTag(a1);
  PopBatteryQueueWork(8u);
  return PopReleaseRwLock((signed __int64 *)&PopCB);
}
