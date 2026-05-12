/*
 * XREFs of RaidAdapterDeviceBusy @ 0x140059C04
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x140001040 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x14001BA70 (RaidAdapterFindUnit.c)
 *     RiDisableDeviceQueueFastPath @ 0x140026CB0 (RiDisableDeviceQueueFastPath.c)
 *     WPP_SF_DDD @ 0x140067D0C (WPP_SF_DDD.c)
 */

void __fastcall RaidAdapterDeviceBusy(__int64 a1, int a2, unsigned int a3)
{
  unsigned __int8 v4; // bl
  __int64 *Unit; // rax
  int v6; // esi
  __int64 *v7; // rbp
  KIRQL v8; // bl

  v4 = a2;
  Unit = RaidAdapterFindUnit(a1, a2);
  if ( Unit )
  {
    v6 = 0x7FFFFFFF;
    v7 = Unit + 90;
    if ( a3 < 0x7FFFFFFF )
      v6 = a3;
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)Unit + 198);
    RiDisableDeviceQueueFastPath((struct _EX_RUNDOWN_REF *)v7, 1);
    if ( v6 > (((__int64)*((unsigned int *)v7 + 22) >> 2) & 0x3FFFFFFF) )
      v6 = ((__int64)*((unsigned int *)v7 + 22) >> 2) & 0x3FFFFFFF;
    *((_DWORD *)v7 + 7) = v6;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v7 + 18, v8);
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_DDD(
      WPP_GLOBAL_Control->AttachedDevice,
      51LL,
      &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
      v4,
      BYTE1(a2),
      BYTE2(a2));
  }
}
