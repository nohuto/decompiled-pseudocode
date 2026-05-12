/*
 * XREFs of RaidSetUnitPauseTimer @ 0x1400012E8
 * Callers:
 *     RaidAdapterPauseUnit @ 0x14000125C (RaidAdapterPauseUnit.c)
 *     RaidStallDeviceQueue @ 0x1400131FC (RaidStallDeviceQueue.c)
 * Callees:
 *     RaidResumeUnitQueue @ 0x140001948 (RaidResumeUnitQueue.c)
 *     RaidUnitRestartQueue @ 0x140001B70 (RaidUnitRestartQueue.c)
 */

char __fastcall RaidSetUnitPauseTimer(__int64 a1, unsigned int a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  LOBYTE(v3) = KeSetCoalescableTimer((PKTIMER)(a1 + 1184), (LARGE_INTEGER)(-10000LL * a2), 0, 0, (PKDPC)(a1 + 1248));
  if ( (_BYTE)v3 )
  {
    v3 = RaidResumeUnitQueue(a1, v4, v5, v6);
    if ( v3 )
      LOBYTE(v3) = RaidUnitRestartQueue(a1, 0LL);
  }
  return v3;
}
