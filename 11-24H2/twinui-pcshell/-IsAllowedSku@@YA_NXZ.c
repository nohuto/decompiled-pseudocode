/*
 * XREFs of ?IsAllowedSku@@YA_NXZ @ 0x180061428
 * Callers:
 *     ?SubscribeToServices@BroadcastDVRComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800610B0 (-SubscribeToServices@BroadcastDVRComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x180061E24 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 *     ?ProcessCommand@BroadcastDVRComponent@@UEAAJW4_BCASTDVR_COMMAND@@@Z @ 0x180062300 (-ProcessCommand@BroadcastDVRComponent@@UEAAJW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?EnterBroadcastMode@BroadcastDVRComponent@@UEAAJE@Z @ 0x180316840 (-EnterBroadcastMode@BroadcastDVRComponent@@UEAAJE@Z.c)
 *     ?SetCameraCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z @ 0x180319300 (-SetCameraCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z.c)
 *     ?SetMicrophoneCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z @ 0x180319440 (-SetMicrophoneCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z.c)
 * Callees:
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x18004EAAC (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     ?IsWindowsServer@@YA_NXZ @ 0x180061D7C (-IsWindowsServer@@YA_NXZ.c)
 */

char IsAllowedSku(void)
{
  char v0; // bl

  v0 = 0;
  if ( !IsWindowsServer() || !IsActiveSessionCountLimited() )
    return 1;
  return v0;
}
