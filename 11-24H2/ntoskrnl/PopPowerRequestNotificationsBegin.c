/*
 * XREFs of PopPowerRequestNotificationsBegin @ 0x140748004
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x140A181C4 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopUmpoSendPowerRequestAction @ 0x14075BFE0 (PopUmpoSendPowerRequestAction.c)
 *     PopAcquirePowerRequestPushLock @ 0x140A473B0 (PopAcquirePowerRequestPushLock.c)
 *     PopUmpoSendPowerRequestCreate @ 0x140A5E938 (PopUmpoSendPowerRequestCreate.c)
 */

__int64 __fastcall PopPowerRequestNotificationsBegin(__int64 a1)
{
  PVOID *v1; // rbx
  __int64 v2; // r8
  int v3; // edi
  _BYTE *v4; // rsi

  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  v1 = (PVOID *)PopPowerRequestObjectList;
  PopPowerRequestNotificationsEnabled = 1;
  while ( v1 != &PopPowerRequestObjectList )
  {
    if ( *((_DWORD *)v1 + 26) )
    {
      PopUmpoSendPowerRequestCreate(*((unsigned int *)v1 + 9));
      v3 = 0;
      v4 = (char *)v1 + 153;
      do
      {
        if ( *v4 )
        {
          LOBYTE(v2) = 1;
          PopUmpoSendPowerRequestAction(*((unsigned int *)v1 + 9), (unsigned int)v3, v2);
        }
        ++v3;
        ++v4;
      }
      while ( v3 < 6 );
    }
    v1 = (PVOID *)*v1;
  }
  return PopReleaseRwLock(&PopPowerRequestLock);
}
