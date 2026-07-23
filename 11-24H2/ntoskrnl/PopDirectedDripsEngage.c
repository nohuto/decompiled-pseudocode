/*
 * XREFs of PopDirectedDripsEngage @ 0x14048797C
 * Callers:
 *     PopDirectedDripsNotify @ 0x140A627B0 (PopDirectedDripsNotify.c)
 * Callees:
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x1404879E0 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14074A9E4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x14074AB3C (PopDirectedDripsQueryEnabledMitigations.c)
 */

__int64 __fastcall PopDirectedDripsEngage(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)&PopDirectedDripsState, 0xA00u);
    LOBYTE(a3) = 1;
    return PopDirectedDripsNotifyAppsAndServices(&PopDirectedDripsState, &dword_140F0DFF8, a3);
  }
  else
  {
    PopFxClearDirectedDripsCandidateDeviceList();
    dword_140F0E1F0 = 0;
    _InterlockedAnd((volatile signed __int32 *)&PopDirectedDripsState, 0xFFFFC1C7);
    result = (unsigned int)dword_140F0DFF0;
    if ( (dword_140F0DFF0 & 4) != 0 )
      return PopDirectedDripsQueryEnabledMitigations(&PopDirectedDripsState);
  }
  return result;
}
