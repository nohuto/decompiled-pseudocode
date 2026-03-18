/*
 * XREFs of PopUmpoSendPowerMessage @ 0x140331990
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140331678 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1404B9204 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopUmpoQuerySmartSuspendPrediction @ 0x14075CF9C (PopUmpoQuerySmartSuspendPrediction.c)
 *     PopUmpoSendPowerAdaptiveReserveConfigurationQuery @ 0x14075CFF4 (PopUmpoSendPowerAdaptiveReserveConfigurationQuery.c)
 *     PopUmpoSendPowerRequestAction @ 0x14075D040 (PopUmpoSendPowerRequestAction.c)
 *     PopPowerRequestDelete @ 0x1409BAA40 (PopPowerRequestDelete.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x1409BAC40 (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopUmpoSendPowerRequestCreate @ 0x140A66258 (PopUmpoSendPowerRequestCreate.c)
 *     PopMonitorProcessBrightnessAction @ 0x140A7FF10 (PopMonitorProcessBrightnessAction.c)
 *     PopUmpoSendLegacyEvent @ 0x140A8CC14 (PopUmpoSendLegacyEvent.c)
 *     PopUmpoSendUserPresencePredictionAction @ 0x140AC0F0C (PopUmpoSendUserPresencePredictionAction.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x140448770 (AlpcGetMessageAttribute.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1406A75D0 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopUmpoProcessMessage @ 0x140A23CC8 (PopUmpoProcessMessage.c)
 *     PopAcquireUmpoPushLock @ 0x140A4F1FC (PopAcquireUmpoPushLock.c)
 *     PopReleaseUmpoPushLock @ 0x140A517F8 (PopReleaseUmpoPushLock.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140B6A3B4 (PoDelistPowerStateTransitionBlocker.c)
 *     PopPushPowerStateTransitionRecord @ 0x140B6D1E8 (PopPushPowerStateTransitionRecord.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopUmpoSendPowerMessage(_DWORD *Src, size_t Size, char a3, __int64 a4)
{
  int v8; // ebp
  _WORD *Pool2; // rdi
  int v10; // eax
  int v11; // ebx
  PVOID v13; // rcx
  __int64 MessageAttribute; // rax
  __int64 v15; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v16[160]; // [rsp+50h] [rbp-D8h] BYREF

  v15 = 0LL;
  v8 = -1073741823;
  Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  PopAcquireUmpoPushLock(0LL);
  if ( PopAlpcClientPort )
  {
    if ( Size > 0xFD8 )
    {
      v11 = -2147483643;
    }
    else
    {
      memset_0(Pool2 + 2, 0, 0xFFCuLL);
      *Pool2 = Size;
      Pool2[1] = Size + 40;
      memmove(Pool2 + 20, Src, Size);
      if ( a3 )
      {
        _InterlockedIncrement(&PopUmpoSyncEventInProgress);
        if ( PopUmpoSyncEventInProgress > 0 )
          v13 = PopConnectedUmpoProcess;
        else
          v13 = 0LL;
        if ( *Src == 13 || *Src == 7 )
          v8 = PopPushPowerStateTransitionRecord(v13, KeGetCurrentThread());
        memset_0(v16, 0, sizeof(v16));
        v15 = 4096LL;
        v11 = ((__int64 (__fastcall *)(HANDLE, __int64, _WORD *, _QWORD, _WORD *, __int64 *, _BYTE *, _QWORD))ZwAlpcSendWaitReceivePort)(
                PopAlpcClientPort,
                0x20000LL,
                Pool2,
                0LL,
                Pool2,
                &v15,
                v16,
                0LL);
        if ( v8 >= 0 )
          PoDelistPowerStateTransitionBlocker();
        _InterlockedDecrement(&PopUmpoSyncEventInProgress);
        if ( v11 < 0 )
          goto LABEL_7;
        MessageAttribute = AlpcGetMessageAttribute(v16, 0x20000000LL);
        v10 = PopUmpoProcessMessage(Pool2, MessageAttribute, a4);
      }
      else
      {
        v10 = ZwAlpcSendWaitReceivePort(PopAlpcClientPort, 0x10000LL, Pool2, 0LL, 0LL, 0LL, 0LL, 0LL, v15);
      }
      v11 = v10;
    }
  }
  else
  {
    v11 = -1073741758;
  }
LABEL_7:
  PopReleaseUmpoPushLock();
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v11;
}
