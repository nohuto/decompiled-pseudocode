/*
 * XREFs of PopIdleAoAcDozeToS4 @ 0x14074FAF0
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x140354F38 (PopDeepSleepClearDisengageReason.c)
 *     PopExecutePowerAction @ 0x140747484 (PopExecutePowerAction.c)
 *     PopTraceSystemIdleS0LowPowerDoze @ 0x14074C928 (PopTraceSystemIdleS0LowPowerDoze.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
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
  dword_140F0A9C0 = 0;
  v10 = 0LL;
  if ( dword_140F0A9D8 == 1 )
    goto LABEL_12;
  if ( dword_140F0A9D8 != 2 )
  {
    switch ( dword_140F0A9D8 )
    {
      case 3:
        v9[0] = 13;
        goto LABEL_13;
      case 4:
        v9[0] = 14;
        goto LABEL_13;
      case 6:
        v9[0] = 11;
        goto LABEL_13;
    }
LABEL_12:
    v9[0] = 6;
    goto LABEL_13;
  }
  v9[0] = 11;
  if ( qword_140F0AEC8
    && MEMORY[0xFFFFF78000000008] - qword_140F0AEC8 > 10000000
                                                    * (unsigned __int64)(unsigned int)PopSmartUserPresenceCheckTimeout )
  {
    v9[0] = 12;
  }
LABEL_13:
  v8[2] = 0;
  v9[1] = 128;
  v8[0] = 3;
  v8[1] = -2147483612;
  PopExecutePowerAction(v9, 0, v8, 5, 1u);
  PopReleasePolicyLock(v3, v2, v4, v5, v7);
  _InterlockedAnd(&dword_140F0A9DC, 0);
  return PopDeepSleepClearDisengageReason(4u);
}
