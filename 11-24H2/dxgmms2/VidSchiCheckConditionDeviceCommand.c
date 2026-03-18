/*
 * XREFs of VidSchiCheckConditionDeviceCommand @ 0x140033300
 * Callers:
 *     VidSchiCheckPendingDeviceCommand @ 0x140015574 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiScheduleCommandToRun @ 0x140018790 (VidSchiScheduleCommandToRun.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x140033250 (VidSchiProcessPrimariesTerminationList.c)
 * Callees:
 *     ?HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ @ 0x140034050 (-HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ.c)
 */

__int64 __fastcall VidSchiCheckConditionDeviceCommand(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  bool HasOutstandingPresentReferences; // al
  unsigned int v5; // r9d

  v2 = 0;
  if ( !*(_DWORD *)(a2 + 172) && !*(_DWORD *)(a2 + 104) )
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
