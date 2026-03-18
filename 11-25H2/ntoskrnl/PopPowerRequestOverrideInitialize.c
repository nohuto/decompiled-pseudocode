/*
 * XREFs of PopPowerRequestOverrideInitialize @ 0x14073DD34
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x140A18A88 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140425F08 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopAcquirePowerRequestPushLock @ 0x140A4D1E4 (PopAcquirePowerRequestPushLock.c)
 */

__int64 PopPowerRequestOverrideInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  PVOID *i; // rbx

  PopAcquirePowerRequestPushLock(0LL);
  for ( i = (PVOID *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (PVOID *)*i )
  {
    if ( !*((_BYTE *)i + 152) )
      PopUmpoSendPowerRequestOverrideQuery((__int64)i, v0, v1, v2);
  }
  return PopReleaseRwLock(&PopPowerRequestLock);
}
