/*
 * XREFs of PopPowerLimitPnpNotification @ 0x140749CA0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopAcquirePowerLimitInterface @ 0x1407492F0 (PopAcquirePowerLimitInterface.c)
 *     PopDisablePowerLimitExtension @ 0x140749628 (PopDisablePowerLimitExtension.c)
 *     PopEvaluatePowerLimitChange @ 0x140749704 (PopEvaluatePowerLimitChange.c)
 *     PopOrphanPowerLimitExtension @ 0x140749BB8 (PopOrphanPowerLimitExtension.c)
 *     PopDiagTracePowerLimitExtension @ 0x1407554EC (PopDiagTracePowerLimitExtension.c)
 *     PopDiagTracePowerLimitRequest @ 0x140755880 (PopDiagTracePowerLimitRequest.c)
 */

__int64 __fastcall PopPowerLimitPnpNotification(char *NotificationStructure, unsigned __int64 *Context)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // rax
  _QWORD *v7; // rsi
  unsigned __int64 i; // rdi

  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v3 )
  {
    PopDisablePowerLimitExtension((__int64)Context);
    return 0LL;
  }
  v4 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v4 )
  {
    PopDisablePowerLimitExtension((__int64)Context);
LABEL_9:
    PopOrphanPowerLimitExtension(Context);
    return 0LL;
  }
  v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v6 )
  {
    if ( (int)PopAcquirePowerLimitInterface((__int64)Context) < 0 )
      goto LABEL_9;
    PopAcquireRwLockExclusive(Context + 4);
    *((_BYTE *)Context + 48) = 1;
    PopDiagTracePowerLimitExtension(Context, POP_ETW_EVENT_POWER_LIMIT_EXTENSION_ADD);
    v7 = Context + 2;
    for ( i = Context[2]; (_QWORD *)i != v7; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 16) != 1 )
      {
        *(_BYTE *)(i + 16) = 1;
        PopDiagTracePowerLimitRequest(i, POP_ETW_EVENT_POWER_LIMIT_REQUEST_ADD);
      }
    }
    if ( (_QWORD *)*v7 != v7 )
      PopEvaluatePowerLimitChange((__int64)Context);
    PopReleaseRwLock((signed __int64 *)Context + 4);
  }
  return 0LL;
}
