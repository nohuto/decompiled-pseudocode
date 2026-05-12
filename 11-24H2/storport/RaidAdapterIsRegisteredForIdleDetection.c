/*
 * XREFs of RaidAdapterIsRegisteredForIdleDetection @ 0x1400023C0
 * Callers:
 *     RaDriverScsiIrp @ 0x1400038A0 (RaDriverScsiIrp.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidAdapterIsRegisteredForIdleDetection(__int64 a1)
{
  return *(_QWORD *)(a1 + 4960) != 0LL;
}
