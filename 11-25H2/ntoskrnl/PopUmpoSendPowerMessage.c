/*
 * XREFs of PopUmpoSendPowerMessage @ 0x140426264
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140425F08 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140428138 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopUmpoQuerySmartSuspendPrediction @ 0x14075066C (PopUmpoQuerySmartSuspendPrediction.c)
 *     PopUmpoSendPowerRequestAction @ 0x1407506C4 (PopUmpoSendPowerRequestAction.c)
 *     PopPowerRequestDelete @ 0x140A414A0 (PopPowerRequestDelete.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x140A416A0 (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopUmpoSendPowerRequestCreate @ 0x140A638E8 (PopUmpoSendPowerRequestCreate.c)
 *     PopMonitorProcessBrightnessAction @ 0x140A7C8D0 (PopMonitorProcessBrightnessAction.c)
 *     PopUmpoSendLegacyEvent @ 0x140A87C14 (PopUmpoSendLegacyEvent.c)
 *     PopUmpoSendUserPresencePredictionAction @ 0x140ABCE5C (PopUmpoSendUserPresencePredictionAction.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x14044A490 (AlpcGetMessageAttribute.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14069C300 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopUmpoProcessMessage @ 0x140A1899C (PopUmpoProcessMessage.c)
 *     PopAcquireUmpoPushLock @ 0x140A4C844 (PopAcquireUmpoPushLock.c)
 *     PopReleaseUmpoPushLock @ 0x140A4E6E0 (PopReleaseUmpoPushLock.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140B5A8B4 (PoDelistPowerStateTransitionBlocker.c)
 *     PopPushPowerStateTransitionRecord @ 0x140B5E108 (PopPushPowerStateTransitionRecord.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopUmpoSendPowerMessage(_DWORD *Src, size_t Size, char a3, __int64 a4)
{
  int v8; // ebp
  _WORD *Pool2; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  int v15; // ebx
  PVOID v17; // rcx
  __int64 MessageAttribute; // rax
  _BYTE v19[160]; // [rsp+50h] [rbp-D8h] BYREF

  v8 = -1073741823;
  Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  PopAcquireUmpoPushLock(0LL);
  if ( PopAlpcClientPort )
  {
    if ( Size > 0xFD8 )
    {
      v15 = -2147483643;
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
          v17 = PopConnectedUmpoProcess;
        else
          v17 = 0LL;
        if ( *Src == 13 || *Src == 7 )
          v8 = PopPushPowerStateTransitionRecord(v17, KeGetCurrentThread());
        memset_0(v19, 0, sizeof(v19));
        v15 = ZwAlpcSendWaitReceivePort(PopAlpcClientPort, 0x20000LL);
        if ( v8 >= 0 )
          PoDelistPowerStateTransitionBlocker(v11, v10, v12, v13);
        _InterlockedDecrement(&PopUmpoSyncEventInProgress);
        if ( v15 < 0 )
          goto LABEL_7;
        MessageAttribute = AlpcGetMessageAttribute(v19, 0x20000000LL);
        v14 = PopUmpoProcessMessage(Pool2, MessageAttribute, a4);
      }
      else
      {
        v14 = ZwAlpcSendWaitReceivePort(PopAlpcClientPort, 0x10000LL);
      }
      v15 = v14;
    }
  }
  else
  {
    v15 = -1073741758;
  }
LABEL_7:
  PopReleaseUmpoPushLock(v11, v10, v12, v13);
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v15;
}
