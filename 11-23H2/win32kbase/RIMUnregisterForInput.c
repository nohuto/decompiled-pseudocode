/*
 * XREFs of RIMUnregisterForInput @ 0x1C0071570
 * Callers:
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C006E594 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0071A40 (RIMRegisterForInputWithCallbacks.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0074064 (RIMUnregisterCurrentProcessForInput.c)
 *     NtRIMUnregisterForInput @ 0x1C0175640 (NtRIMUnregisterForInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     rimFreeAllUserMem @ 0x1C006F060 (rimFreeAllUserMem.c)
 *     RIMDeleteAllAsyncPnpWorkNotificationItems @ 0x1C006F0B8 (RIMDeleteAllAsyncPnpWorkNotificationItems.c)
 *     RIMSignalAllDispositionWaiters @ 0x1C006F0F0 (RIMSignalAllDispositionWaiters.c)
 *     rimRemoveFromObTrackList @ 0x1C00736B0 (rimRemoveFromObTrackList.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0074EA4 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00751C0 (RawInputManagerObjectResolveHandle.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C0075238 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RIMCloseDev @ 0x1C007AB28 (RIMCloseDev.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C00C0758 (rimResetPnpRemovePendingStateBits.c)
 *     RIMFreeSpecificDev @ 0x1C00C8F08 (RIMFreeSpecificDev.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMUnregisterForInput(__int64 a1)
{
  char v2; // dl
  int v3; // edx
  int v4; // r8d
  int v5; // r13d
  char *v6; // rdi
  __int64 v7; // r14
  unsigned int v8; // r14d
  void **v9; // r15
  _DWORD *v10; // r12
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 **v13; // r14
  __int64 *v14; // rax
  HANDLE *v15; // r14
  _OWORD *v16; // rdx
  void *v17; // rdx
  void *v18; // rdx
  void *v19; // rcx
  char *v20; // rcx
  char *v21; // rcx
  __int64 v23; // r12
  _DWORD *v24; // r15
  int v25; // eax
  void *v26; // rcx
  _QWORD *v27; // rax
  struct _KTHREAD *v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // r15
  PVOID Object; // [rsp+50h] [rbp-58h] BYREF
  char *v32; // [rsp+58h] [rbp-50h]
  char *v33; // [rsp+60h] [rbp-48h]
  __int128 v34; // [rsp+68h] [rbp-40h]
  __int64 *v35; // [rsp+C0h] [rbp+18h]

  Object = 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v2 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v2 = 0;
  }
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      105,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  v5 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v5 >= 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v3) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v3) = 0;
    }
    if ( !(_BYTE)v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = (char *)Object;
    }
    else
    {
      v6 = (char *)Object;
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        v4,
        (_DWORD)gRimLog,
        4,
        1,
        106,
        (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
        (char)Object);
    }
    v33 = v6 + 104;
    RIMLockExclusive((__int64)(v6 + 104));
    v32 = v6 + 760;
    RIMLockExclusive((__int64)(v6 + 760));
    v6[80] = 1;
    v7 = *((_QWORD *)v6 + 53);
    *((_QWORD *)v6 + 53) = 0LL;
    while ( v7 )
    {
      v23 = v7;
      v24 = (_DWORD *)(v7 + 184);
      v25 = *(_DWORD *)(v7 + 184);
      if ( (v25 & 0x10) != 0 )
      {
        if ( (v25 & 0x20) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3060LL);
        *v24 &= ~0x10u;
        v28 = *(struct _KTHREAD **)(v7 + 312);
        if ( !v28 || (v6 = (char *)Object, v28 == KeGetCurrentThread()) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3064LL);
        KeSetEvent(*(PRKEVENT *)(v7 + 352), 1, 0);
      }
      v26 = *(void **)(v7 + 248);
      if ( (*v24 & 0x20) != 0 )
      {
        if ( v26 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3086LL);
      }
      else if ( v26 )
      {
        IoUnregisterPlugPlayNotification(v26);
        *(_QWORD *)(v7 + 248) = 0LL;
        ObfDereferenceObject(*(PVOID *)(v7 + 32));
      }
      RIMCloseDev(v7);
      v27 = (_QWORD *)(v7 + 40);
      v7 = *(_QWORD *)(v7 + 40);
      *v27 = 0LL;
      if ( (*v24 & 0x2000) == 0 )
      {
        rimResetPnpRemovePendingStateBits(v23);
        RIMFreeSpecificDev(v6, v23);
      }
    }
    v8 = 0;
    v9 = (void **)(v6 + 312);
    v10 = v6 + 296;
    do
    {
      v5 = RIMUnRegisterForInputDeviceTypeClassNotifications(v6, v8);
      if ( !*v10 && *v9 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v9);
        *v9 = 0LL;
      }
      ++v8;
      ++v10;
      ++v9;
      v12 = 2LL;
    }
    while ( v8 <= 2 );
    v13 = (__int64 **)(v6 + 744);
    while ( 1 )
    {
      v14 = *v13;
      if ( *v13 == (__int64 *)v13 )
        break;
      v29 = *v14;
      if ( (__int64 **)v14[1] != v13 || *(__int64 **)(v29 + 8) != v14 )
        __fastfail(3u);
      *v13 = (__int64 *)v29;
      *(_QWORD *)(v29 + 8) = v13;
      v35 = v14 - 1;
      v30 = (_QWORD *)v14[4];
      if ( !v30[33] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1211LL);
      --v30[33];
      ObfDereferenceObject(v30);
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v35);
    }
    rimFreeAllUserMem((struct _RTL_AVL_TABLE *)v6, v12, v11);
    if ( v6[776] )
    {
      v15 = (HANDLE *)(v6 + 840);
      if ( *((_QWORD *)v6 + 105) )
      {
        v34 = 0xC0000128uLL;
        if ( *((_DWORD *)v6 + 212) )
        {
          v16 = (_OWORD *)*((_QWORD *)v6 + 109);
          if ( (unsigned __int64)v16 >= MmUserProbeAddress )
            v16 = (_OWORD *)MmUserProbeAddress;
          *v16 = v34;
        }
        else
        {
          *(_OWORD *)*((_QWORD *)v6 + 109) = v34;
        }
        ZwSetEvent(*v15, 0LL);
        ZwClose(*v15);
      }
    }
    v17 = (void *)*((_QWORD *)v6 + 52);
    if ( v17 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v17);
      *((_QWORD *)v6 + 52) = 0LL;
    }
    v18 = (void *)*((_QWORD *)v6 + 12);
    if ( v18 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v18);
      *((_QWORD *)v6 + 12) = 0LL;
      *((_DWORD *)v6 + 22) = 0;
    }
    ZwCancelTimer(*((HANDLE *)v6 + 42), 0LL);
    ZwClose(*((HANDLE *)v6 + 42));
    *((_QWORD *)v6 + 42) = -1LL;
    ZwClose(*((HANDLE *)v6 + 43));
    *((_QWORD *)v6 + 43) = -1LL;
    v6[81] = 1;
    RIMLockExclusive((__int64)(v6 + 352));
    v6[10] = 1;
    v19 = (void *)*((_QWORD *)v6 + 46);
    if ( v19 != (void *)-1LL )
    {
      ZwClose(v19);
      *((_QWORD *)v6 + 46) = -1LL;
    }
    RIMDeleteAllAsyncPnpWorkNotificationItems((__int64)v6);
    *((_QWORD *)v6 + 45) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 352, 0LL);
    KeLeaveCriticalRegion();
    rimRemoveFromObTrackList(v6);
    RIMSignalAllPriorPnpWorkToCompleteWaiters(v6);
    RIMSignalAllDispositionWaiters((__int64)v6);
    v20 = v32;
    *((_QWORD *)v32 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v20, 0LL);
    KeLeaveCriticalRegion();
    v21 = v33;
    *((_QWORD *)v33 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v21, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v6);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v3) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v3) = 0;
  }
  if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v4,
      (_DWORD)gRimLog,
      4,
      1,
      107,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
      v5);
  }
  return (unsigned int)v5;
}
