/*
 * XREFs of RaidAdapterPauseUnit @ 0x14000125C
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x140001040 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidSetUnitPauseTimer @ 0x1400012E8 (RaidSetUnitPauseTimer.c)
 *     RaidAdapterFindUnit @ 0x14001BA70 (RaidAdapterFindUnit.c)
 *     WPP_SF_DDD @ 0x140067D0C (WPP_SF_DDD.c)
 */

__int64 __fastcall RaidAdapterPauseUnit(__int64 a1, int a2, int a3)
{
  unsigned __int8 v4; // bl
  __int64 Unit; // rax
  __int64 result; // rax

  v4 = a2;
  Unit = RaidAdapterFindUnit();
  if ( Unit )
    return RaidSetUnitPauseTimer(Unit, (unsigned int)(1000 * a3));
  result = (__int64)&WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    result = HIDWORD(WPP_GLOBAL_Control->Timer);
    if ( (result & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      return WPP_SF_DDD(
               WPP_GLOBAL_Control->AttachedDevice,
               49LL,
               &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
               v4,
               BYTE1(a2),
               BYTE2(a2));
  }
  return result;
}
