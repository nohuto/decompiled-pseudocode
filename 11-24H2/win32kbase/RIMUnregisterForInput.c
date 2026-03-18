/*
 * XREFs of RIMUnregisterForInput @ 0x14017BA20
 * Callers:
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x14006C338 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x14010F140 (RIMUnregisterCurrentProcessForInput.c)
 *     RIMRegisterForInputWithCallbacks @ 0x14014F6E0 (RIMRegisterForInputWithCallbacks.c)
 *     NtRIMUnregisterForInput @ 0x1401D50F0 (NtRIMUnregisterForInput.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMHandlePowerDeviceRemoval @ 0x140054580 (RIMHandlePowerDeviceRemoval.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     rimOnPnpRemoveComplete @ 0x140055BD4 (rimOnPnpRemoveComplete.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x14005B4D0 (rimDoRimDevChange.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1400CA9E8 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1401076A4 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     rimRemoveFromObTrackList @ 0x140127618 (rimRemoveFromObTrackList.c)
 *     RIMCloseDev @ 0x14013AFB8 (RIMCloseDev.c)
 *     rimResetPnpRemovePendingStateBits @ 0x140140950 (rimResetPnpRemovePendingStateBits.c)
 *     rimFreeAllUserMem @ 0x140146908 (rimFreeAllUserMem.c)
 *     RIMSignalAllDispositionWaiters @ 0x14014AEF0 (RIMSignalAllDispositionWaiters.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     RIMFreeSpecificDev @ 0x1401D1E88 (RIMFreeSpecificDev.c)
 *     RIMFreeAllQueuedCompleteFrames @ 0x1401EBBE8 (RIMFreeAllQueuedCompleteFrames.c)
 *     RIMDeleteAllAsyncWorkNotificationItems @ 0x1401EC410 (RIMDeleteAllAsyncWorkNotificationItems.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall RIMUnregisterForInput(char *a1)
{
  char v2; // di
  bool v3; // r14
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  int v7; // r12d
  char v8; // r14
  bool v9; // r15
  char *v10; // rdi
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // r14
  __int64 v15; // r13
  _DWORD *v16; // r15
  int v17; // eax
  struct _KTHREAD *v18; // rcx
  _QWORD *v19; // r12
  void *v20; // rcx
  _QWORD *v21; // rax
  unsigned int v22; // r15d
  char **v23; // r14
  _DWORD *v24; // r13
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  HANDLE *v28; // r14
  void *v29; // rcx
  char *v30; // rcx
  char *v31; // rcx
  void *v32; // rcx
  char v33; // di
  bool v34; // r14
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  char *v40; // [rsp+60h] [rbp-48h]
  char *v41; // [rsp+68h] [rbp-40h]
  __int128 Src[3]; // [rsp+70h] [rbp-38h] BYREF

  Object = 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v2 = 0;
  }
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      101,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v7 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v7 >= 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v8 = 0;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
      v10 = (char *)Object;
      LOBYTE(v12) = v9;
      LOBYTE(v13) = v8;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(v11 + 19392),
        4,
        1,
        102,
        (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
        (char)Object);
    }
    else
    {
      v10 = (char *)Object;
    }
    v41 = v10 + 104;
    RIMLockExclusive((__int64)(v10 + 104));
    v40 = v10 + 760;
    RIMLockExclusive((__int64)(v10 + 760));
    v10[80] = 1;
    if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
      RIMFreeAllQueuedCompleteFrames(v10);
    v14 = *((_QWORD *)v10 + 53);
    *((_QWORD *)v10 + 53) = 0LL;
    while ( v14 )
    {
      v15 = v14;
      v16 = (_DWORD *)(v14 + 168);
      v17 = *(_DWORD *)(v14 + 168);
      if ( (v17 & 0x10) != 0 )
      {
        if ( (v17 & 0x20) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2896LL);
        *v16 &= ~0x10u;
        v18 = *(struct _KTHREAD **)(v14 + 296);
        if ( !v18 || (v10 = (char *)Object, v18 == KeGetCurrentThread()) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2900LL);
        KeSetEvent(*(PRKEVENT *)(v14 + 336), 1, 0);
      }
      v19 = (_QWORD *)(v14 + 232);
      v20 = *(void **)(v14 + 232);
      if ( (*v16 & 0x20) != 0 )
      {
        if ( v20 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2922LL);
      }
      else if ( v20 )
      {
        IoUnregisterPlugPlayNotification(v20);
        *v19 = 0LL;
        ObfDereferenceObject(*(PVOID *)(v14 + 32));
      }
      RIMCloseDev(v14);
      v21 = (_QWORD *)(v14 + 40);
      v14 = *(_QWORD *)(v14 + 40);
      *v21 = 0LL;
      if ( (*v16 & 0x2000) != 0 )
      {
        RIMHandlePowerDeviceRemoval(v15);
      }
      else
      {
        rimResetPnpRemovePendingStateBits(v15);
        if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
        {
          *v16 |= 8u;
          rimOnPnpRemoveComplete((char)v10, v15);
          if ( *v19 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2943LL);
          rimDoRimDevChange((__int64)v10, v15, 3u);
        }
        RIMFreeSpecificDev((struct RawInputManagerObject *)v10);
      }
    }
    v22 = 0;
    v23 = (char **)(v10 + 312);
    v24 = v10 + 296;
    do
    {
      v7 = RIMUnRegisterForInputDeviceTypeClassNotifications((__int64)v10, v22);
      if ( !*v24 && *v23 )
      {
        GreDeleteFastMutex(*v23);
        *v23 = 0LL;
      }
      ++v22;
      ++v24;
      ++v23;
    }
    while ( v22 <= 2 );
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
      RIMFreeAllQueuedCompleteFrames(v10);
    rimFreeAllUserMem((struct _RTL_AVL_TABLE *)v10, v25, v26, v27);
    if ( v10[776] )
    {
      v28 = (HANDLE *)(v10 + 840);
      if ( *((_QWORD *)v10 + 105) )
      {
        Src[0] = 0xC0000128uLL;
        if ( *((_DWORD *)v10 + 212) )
        {
          v29 = (void *)*((_QWORD *)v10 + 109);
          if ( (unsigned __int64)v29 >= MmUserProbeAddress )
            v29 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v29, Src, 0x10uLL);
        }
        else
        {
          *(_OWORD *)*((_QWORD *)v10 + 109) = Src[0];
        }
        ZwSetEvent(*v28, 0LL);
        ZwClose(*v28);
      }
    }
    v30 = (char *)*((_QWORD *)v10 + 52);
    if ( v30 )
    {
      GreDeleteFastMutex(v30);
      *((_QWORD *)v10 + 52) = 0LL;
    }
    v31 = (char *)*((_QWORD *)v10 + 12);
    if ( v31 )
    {
      GreDeleteFastMutex(v31);
      *((_QWORD *)v10 + 12) = 0LL;
      *((_DWORD *)v10 + 22) = 0;
    }
    ZwCancelTimer(*((HANDLE *)v10 + 42), 0LL);
    ZwClose(*((HANDLE *)v10 + 42));
    *((_QWORD *)v10 + 42) = -1LL;
    ZwClose(*((HANDLE *)v10 + 43));
    *((_QWORD *)v10 + 43) = -1LL;
    v10[81] = 1;
    RIMLockExclusive((__int64)(v10 + 352));
    v10[10] = 1;
    v32 = (void *)*((_QWORD *)v10 + 46);
    if ( v32 != (void *)-1LL )
    {
      ZwClose(v32);
      *((_QWORD *)v10 + 46) = -1LL;
    }
    RIMDeleteAllAsyncWorkNotificationItems(v10);
    RIMUnlockExclusive((__int64)(v10 + 352));
    rimRemoveFromObTrackList((__int64)v10);
    RIMSignalAllPriorPnpWorkToCompleteWaiters((__int64)v10);
    RIMSignalAllDispositionWaiters((__int64)v10);
    RIMUnlockExclusive((__int64)v40);
    RIMUnlockExclusive((__int64)v41);
    ObfDereferenceObject(v10);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v33 = 0;
  }
  v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v35 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
    LOBYTE(v36) = v34;
    LOBYTE(v37) = v33;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v37,
      v36,
      *(_QWORD *)(v35 + 19392),
      4,
      1,
      103,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v7);
  }
  return (unsigned int)v7;
}
