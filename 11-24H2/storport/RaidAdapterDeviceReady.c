/*
 * XREFs of RaidAdapterDeviceReady @ 0x140059CF8
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x140001040 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidUnitRestartQueue @ 0x140001B70 (RaidUnitRestartQueue.c)
 *     RaidAdapterFindUnit @ 0x14001BA70 (RaidAdapterFindUnit.c)
 *     WPP_SF_DDD @ 0x140067D0C (WPP_SF_DDD.c)
 */

void __fastcall RaidAdapterDeviceReady(__int64 a1, int a2)
{
  unsigned __int8 v2; // bl
  __int64 *Unit; // rax
  __int64 v4; // rdi
  volatile LONG *v5; // rbx
  KIRQL v6; // al

  v2 = a2;
  Unit = RaidAdapterFindUnit(a1, a2);
  v4 = (__int64)Unit;
  if ( Unit )
  {
    v5 = (volatile LONG *)(Unit + 99);
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)Unit + 198);
    *(_DWORD *)(v4 + 748) = 0;
    ExReleaseSpinLockExclusive(v5, v6);
    RaidUnitRestartQueue(v4, 0);
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_DDD(
      WPP_GLOBAL_Control->AttachedDevice,
      52LL,
      &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
      v2,
      BYTE1(a2),
      BYTE2(a2));
  }
}
