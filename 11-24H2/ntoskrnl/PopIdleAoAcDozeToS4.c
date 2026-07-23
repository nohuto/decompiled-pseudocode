/*
 * XREFs of PopIdleAoAcDozeToS4 @ 0x14075B3A0
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1402B9FF0 (PopDeepSleepClearDisengageReason.c)
 *     PopExecutePowerAction @ 0x140751894 (PopExecutePowerAction.c)
 *     PopTraceSystemIdleS0LowPowerDoze @ 0x140757004 (PopTraceSystemIdleS0LowPowerDoze.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopIdleAoAcDozeToS4(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // [rsp+20h] [rbp-40h]
  _DWORD v8[4]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v9[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v10; // [rsp+48h] [rbp-18h]
  __int64 v11; // [rsp+58h] [rbp-8h]

  PopAcquirePolicyLock(a1, a2);
  PopTraceSystemIdleS0LowPowerDoze();
  v11 = 0LL;
  v10 = 0LL;
  if ( dword_140F0B8D8 == 1 )
    goto LABEL_8;
  if ( dword_140F0B8D8 != 2 )
  {
    if ( dword_140F0B8D8 == 6 )
    {
      v9[0] = 11;
      goto LABEL_9;
    }
LABEL_8:
    v9[0] = 6;
    goto LABEL_9;
  }
  v9[0] = 11;
  if ( qword_140F0B9E8
    && MEMORY[0xFFFFF78000000008] - qword_140F0B9E8 > 10000000
                                                    * (unsigned __int64)(unsigned int)PopSmartUserPresenceCheckTimeout )
  {
    v9[0] = 12;
  }
LABEL_9:
  v8[2] = 0;
  v9[1] = 128;
  v8[0] = 3;
  v8[1] = -2147483612;
  PopExecutePowerAction(v9, 0, v8, 5, 1u);
  PopReleasePolicyLock(v3, v2, v4, v5, v7);
  _InterlockedAnd(&dword_140F0B8DC, 0);
  return PopDeepSleepClearDisengageReason(4u);
}
