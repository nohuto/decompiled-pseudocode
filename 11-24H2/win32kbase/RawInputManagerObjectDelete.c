/*
 * XREFs of RawInputManagerObjectDelete @ 0x1401E35C8
 * Callers:
 *     RIMObjectManagerCallout @ 0x140116F54 (RIMObjectManagerCallout.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1400C95A8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     rimRemoveFromObTrackList @ 0x140127618 (rimRemoveFromObTrackList.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x14012D12C (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     RIMFreeSpecificDevWorker @ 0x140133A58 (RIMFreeSpecificDevWorker.c)
 *     rimFreeAllUserMem @ 0x140146908 (rimFreeAllUserMem.c)
 *     RIMFreeAllHoldingFrames @ 0x14014CCEC (RIMFreeAllHoldingFrames.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMDeleteAllAsyncWorkNotificationItems @ 0x1401EC410 (RIMDeleteAllAsyncWorkNotificationItems.c)
 *     rimObsFreeInputMessageQueue @ 0x1401F0844 (rimObsFreeInputMessageQueue.c)
 *     rimObsReleaseAllTrackedHandles @ 0x1401F0D18 (rimObsReleaseAllTrackedHandles.c)
 *     rimObsStartStopDeviceRead @ 0x1401F0DA0 (rimObsStartStopDeviceRead.c)
 */

__int64 __fastcall RawInputManagerObjectDelete(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // rdi
  void *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // bl
  bool v10; // si
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  void *v14; // rcx
  int v16; // [rsp+80h] [rbp+30h] BYREF
  char v17; // [rsp+88h] [rbp+38h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  if ( ObGetObjectType(v1) != ExRawInputManagerObjectType )
  {
    v16 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 212);
  }
  if ( *(_BYTE *)(v1 + 8) == 1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    if ( v2 == 2 )
    {
      rimRemoveFromObTrackList(v1);
      if ( !*(_BYTE *)(v1 + 9) )
      {
        v3 = *(_QWORD *)(v1 + 392);
        v4 = (v1 + 72) & -(__int64)(v1 != 0);
        if ( !v3 )
        {
          v16 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 235);
        }
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
          (RIMLOCKExclusiveIfNeeded *)&v17,
          (struct RIMLOCK *)(v3 + 104));
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
          (RIMLOCKExclusiveIfNeeded *)&v16,
          (struct RIMLOCK *)(v3 + 760));
        RIMFreeSpecificDevWorker(v3, v4);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v16);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v17);
        ObfDereferenceObject((PVOID)v3);
      }
    }
    else if ( v2 == 1 )
    {
      if ( *(_QWORD *)(v1 + 16) != v1 + 16 )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 255);
      }
      RIMFreeAllHoldingFrames(v1);
      if ( *(_QWORD *)(v1 + 424) )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 260);
      }
      if ( *(_QWORD *)(v1 + 728) != v1 + 728 )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 261);
      }
      if ( *(_QWORD *)(v1 + 744) != v1 + 744 )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 262);
      }
      if ( *(_QWORD *)(v1 + 416) )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 265);
      }
      v5 = *(void **)(v1 + 368);
      if ( v5 != (void *)-1LL )
      {
        ZwClose(v5);
        *(_QWORD *)(v1 + 368) = -1LL;
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
          (RIMLOCKExclusiveIfNeeded *)&v16,
          (struct RIMLOCK *)(v1 + 352));
        RIMDeleteAllAsyncWorkNotificationItems(v1);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v16);
      }
      RIMLockExclusive(v1 + 760);
      rimFreeAllUserMem((struct _RTL_AVL_TABLE *)v1, v6, v7, v8);
      RIMUnlockExclusive(v1 + 760);
      if ( !*(_QWORD *)(v1 + 1064) )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 282);
      }
      if ( *(_DWORD *)(v1 + 1072) )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 283);
      }
      GreDeleteFastMutex(*(char **)(v1 + 1064));
      *(_QWORD *)(v1 + 1064) = 0LL;
      if ( !*(_QWORD *)(v1 + 1096) )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 290);
      }
      if ( *(_DWORD *)(v1 + 1104) )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 291);
      }
      GreDeleteFastMutex(*(char **)(v1 + 1096));
      *(_QWORD *)(v1 + 1096) = 0LL;
    }
    else
    {
      if ( v2 != 3 )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 305);
      }
      rimRemoveFromObTrackList(v1);
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v9 = 0;
      }
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v12) = v10;
        LOBYTE(v13) = v9;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v12,
          *(_QWORD *)(UserSessionState + 69400),
          4,
          1,
          10,
          (__int64)&WPP_4faad94a375d3941b1c61349de2555b2_Traceguids,
          v1);
      }
      v14 = *(void **)(v1 + 80);
      if ( v14 != (void *)-1LL )
      {
        ZwClose(v14);
        *(_QWORD *)(v1 + 80) = -1LL;
      }
      rimObsReleaseAllTrackedHandles(v1);
      rimObsFreeInputMessageQueue(v1);
      rimObsStartStopDeviceRead(v1, 0LL);
    }
  }
  return 0LL;
}
