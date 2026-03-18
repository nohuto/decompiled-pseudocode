/*
 * XREFs of PopDirectedDripsEngage @ 0x14048CC5C
 * Callers:
 *     PopDirectedDripsNotify @ 0x140A69400 (PopDirectedDripsNotify.c)
 * Callees:
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x14048CCC0 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14074C6B4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x14074C80C (PopDirectedDripsQueryEnabledMitigations.c)
 */

__int64 __fastcall PopDirectedDripsEngage(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)&PopDirectedDripsState, 0xA00u);
    LOBYTE(a3) = 1;
    return PopDirectedDripsNotifyAppsAndServices(&PopDirectedDripsState, &dword_140F0DD58, a3);
  }
  else
  {
    PopFxClearDirectedDripsCandidateDeviceList();
    dword_140F0DF50 = 0;
    _InterlockedAnd((volatile signed __int32 *)&PopDirectedDripsState, 0xFFFFC1C7);
    result = (unsigned int)dword_140F0DD50;
    if ( (dword_140F0DD50 & 4) != 0 )
      return PopDirectedDripsQueryEnabledMitigations(&PopDirectedDripsState);
  }
  return result;
}
