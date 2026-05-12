/*
 * XREFs of RaidResumeIoQueue @ 0x140001AF4
 * Callers:
 *     RaidResumeUnitQueue @ 0x140001948 (RaidResumeUnitQueue.c)
 *     RaidResumeAndRestartUnitQueue @ 0x14009DA34 (RaidResumeAndRestartUnitQueue.c)
 * Callees:
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 */

__int64 __fastcall RaidResumeIoQueue(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 40));
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 10LL, &WPP_42bc12a918843888f68018f88e1285b6_Traceguids);
    }
    _InterlockedAdd((volatile signed __int32 *)(a1 + 40), 1u);
    return 0;
  }
  else
  {
    v3 = 0;
    if ( !v2 )
    {
      v3 = 1;
      _InterlockedExchange((volatile __int32 *)(a1 + 208), 1);
    }
  }
  return v3;
}
