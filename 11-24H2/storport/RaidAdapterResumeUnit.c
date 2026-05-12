/*
 * XREFs of RaidAdapterResumeUnit @ 0x14000189C
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x140001040 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidResumeUnitQueue @ 0x140001948 (RaidResumeUnitQueue.c)
 *     RaidUnitRestartQueue @ 0x140001B70 (RaidUnitRestartQueue.c)
 *     RaidAdapterFindUnit @ 0x14001BA70 (RaidAdapterFindUnit.c)
 *     WPP_SF_DDD @ 0x140067D0C (WPP_SF_DDD.c)
 */

char __fastcall RaidAdapterResumeUnit(__int64 a1, int a2)
{
  unsigned __int8 v2; // bl
  __int64 Unit; // rax
  __int64 v4; // rdi
  PDEVICE_OBJECT *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v2 = a2;
  Unit = RaidAdapterFindUnit();
  v4 = Unit;
  if ( Unit )
  {
    LOBYTE(v5) = KeCancelTimer((PKTIMER)(Unit + 1184));
    if ( (_BYTE)v5 )
    {
      LODWORD(v5) = RaidResumeUnitQueue(v4, v6, v7, v8);
      if ( (_DWORD)v5 )
        LOBYTE(v5) = RaidUnitRestartQueue(v4, 0LL);
    }
  }
  else
  {
    v5 = &WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      LODWORD(v5) = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( ((unsigned __int8)v5 & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        LOBYTE(v5) = WPP_SF_DDD(
                       WPP_GLOBAL_Control->AttachedDevice,
                       50LL,
                       &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
                       v2,
                       BYTE1(a2),
                       BYTE2(a2));
    }
  }
  return (char)v5;
}
