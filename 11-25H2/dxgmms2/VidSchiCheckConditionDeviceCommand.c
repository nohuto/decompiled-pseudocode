/*
 * XREFs of VidSchiCheckConditionDeviceCommand @ 0x1400349B0
 * Callers:
 *     VidSchiCheckPendingDeviceCommand @ 0x1400209D4 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiScheduleCommandToRun @ 0x140023BF0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x140034900 (VidSchiProcessPrimariesTerminationList.c)
 * Callees:
 *     ?HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ @ 0x140035700 (-HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ.c)
 */

__int64 __fastcall VidSchiCheckConditionDeviceCommand(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  bool HasOutstandingPresentReferences; // al
  unsigned int v5; // r9d

  v2 = 0;
  if ( !*(_DWORD *)(a2 + 156) && !*(_DWORD *)(a2 + 104) )
  {
    v2 = 1;
    if ( (*(_BYTE *)(a2 + 25) & 1) != 0 )
    {
      HasOutstandingPresentReferences = VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(*(VIDMM_GLOBAL_ALLOC_NONPAGED **)(a2 + 96));
      return HasOutstandingPresentReferences ^ v5;
    }
  }
  return v2;
}
