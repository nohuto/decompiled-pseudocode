/*
 * XREFs of PopIdleTriggerAdaptiveStandbyAction @ 0x14074FC70
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x140A18A88 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404B170C (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404D6CD4 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140964338 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopIdleTriggerAdaptiveStandbyAction(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+20h] [rbp-8h]

  v2 = a1;
  PopAcquirePolicyLock(a1, a2);
  if ( v2 == 3 )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
    if ( (_DWORD)xmmword_140F08290 == 1 )
    {
      if ( byte_140F083AC )
        PopPowerAggregatorHandleIntentUnsafe(3LL, 0LL, 0LL, 53LL);
      else
        dword_140F083B0 = 3;
    }
    PopReleaseRwLock(&PopPowerAggregatorLock);
  }
  else
  {
    dword_140F0A9C0 = v2;
    if ( byte_140F0A9E0 )
    {
      PopIdleCancelAoAcDozeS4Timer(4u);
      PopIdleArmAoAcDozeS4Timer();
    }
  }
  return PopReleasePolicyLock(v4, v3, v5, v6, v8);
}
