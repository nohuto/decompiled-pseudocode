/*
 * XREFs of ?OnSystemContextNotification@GazeProcessor@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1801B8A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeProcessor::OnSystemContextNotification(__int64 a1, __int64 a2)
{
  if ( a2 && *(_BYTE *)(a2 + 24) == 1 )
    return GazeProcessor::UpdateDeviceTransformsFromInputConfig(
             (GazeProcessor *)(a1 - 8),
             (struct InputConfigContextMessage *)a2);
  else
    return 0LL;
}
