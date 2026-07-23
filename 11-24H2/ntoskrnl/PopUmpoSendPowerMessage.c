/*
 * XREFs of PopUmpoSendPowerMessage @ 0x1402BB090
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1402BAD78 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1404B40A4 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopUmpoQuerySmartSuspendPrediction @ 0x14075BF3C (PopUmpoQuerySmartSuspendPrediction.c)
 *     PopUmpoSendPowerAdaptiveReserveConfigurationQuery @ 0x14075BF94 (PopUmpoSendPowerAdaptiveReserveConfigurationQuery.c)
 *     PopUmpoSendPowerRequestAction @ 0x14075BFE0 (PopUmpoSendPowerRequestAction.c)
 *     PopPowerRequestDelete @ 0x1409A1090 (PopPowerRequestDelete.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x1409A1290 (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopUmpoSendPowerRequestCreate @ 0x140A5E938 (PopUmpoSendPowerRequestCreate.c)
 *     PopMonitorProcessBrightnessAction @ 0x140A7A970 (PopMonitorProcessBrightnessAction.c)
 *     PopUmpoSendLegacyEvent @ 0x140A89144 (PopUmpoSendLegacyEvent.c)
 *     PopUmpoSendUserPresencePredictionAction @ 0x140ABC06C (PopUmpoSendUserPresencePredictionAction.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x140440E90 (AlpcGetMessageAttribute.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1406A8570 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopUmpoProcessMessage @ 0x140A180D8 (PopUmpoProcessMessage.c)
 *     PopAcquireUmpoPushLock @ 0x140A45FAC (PopAcquireUmpoPushLock.c)
 *     PopReleaseUmpoPushLock @ 0x140A488C8 (PopReleaseUmpoPushLock.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140B6BAC4 (PoDelistPowerStateTransitionBlocker.c)
 *     PopPushPowerStateTransitionRecord @ 0x140B6EA88 (PopPushPowerStateTransitionRecord.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopUmpoSendPowerMessage(_DWORD *Src, size_t Size, char a3)
{
  int v6; // ebp
  _PORT_MESSAGE *ReceiveMessage; // rdi
  NTSTATUS v8; // eax
  NTSTATUS v9; // ebx
  PVOID v11; // rcx
  _ALPC_CONTEXT_ATTR *MessageAttribute; // rax
  ULONG_PTR BufferLength[2]; // [rsp+40h] [rbp-E8h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES Buffer; // [rsp+50h] [rbp-D8h] BYREF

  BufferLength[0] = 0LL;
  v6 = -1073741823;
  ReceiveMessage = (_PORT_MESSAGE *)ExAllocatePool2(0x100uLL, 0x1000uLL, 0x6F706D55u);
  if ( !ReceiveMessage )
    return (unsigned int)-1073741670;
  PopAcquireUmpoPushLock(0LL);
  if ( PopAlpcClientPort )
  {
    if ( Size > 0xFD8 )
    {
      v9 = -2147483643;
    }
    else
    {
      memset_0(&ReceiveMessage->u2, 0, 0xFFCuLL);
      ReceiveMessage->u1.s1.DataLength = Size;
      ReceiveMessage->u1.s1.TotalLength = Size + 40;
      memmove(&ReceiveMessage[1], Src, Size);
      if ( a3 )
      {
        _InterlockedIncrement(&PopUmpoSyncEventInProgress);
        if ( PopUmpoSyncEventInProgress > 0 )
          v11 = PopConnectedUmpoProcess;
        else
          v11 = 0LL;
        if ( *Src == 13 || *Src == 7 )
          v6 = PopPushPowerStateTransitionRecord(v11, KeGetCurrentThread());
        memset_0(&Buffer, 0, 0xA0uLL);
        BufferLength[0] = 4096LL;
        v9 = ZwAlpcSendWaitReceivePort(
               PopAlpcClientPort,
               0x20000u,
               ReceiveMessage,
               0LL,
               ReceiveMessage,
               BufferLength,
               &Buffer,
               0LL);
        if ( v6 >= 0 )
          PoDelistPowerStateTransitionBlocker();
        _InterlockedDecrement(&PopUmpoSyncEventInProgress);
        if ( v9 < 0 )
          goto LABEL_7;
        MessageAttribute = (_ALPC_CONTEXT_ATTR *)AlpcGetMessageAttribute(&Buffer, 0x20000000u);
        v8 = PopUmpoProcessMessage(ReceiveMessage, MessageAttribute);
      }
      else
      {
        v8 = ZwAlpcSendWaitReceivePort(PopAlpcClientPort, 0x10000u, ReceiveMessage, 0LL, 0LL, 0LL, 0LL, 0LL);
      }
      v9 = v8;
    }
  }
  else
  {
    v9 = -1073741758;
  }
LABEL_7:
  PopReleaseUmpoPushLock();
  ExFreePoolWithTag(ReceiveMessage, 0);
  return (unsigned int)v9;
}
