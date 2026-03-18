/*
 * XREFs of BroadcastSettingsUpdateToAllContainers @ 0x14013B680
 * Callers:
 *     SetSwapMouseButton @ 0x14013B5A0 (SetSwapMouseButton.c)
 *     UpdateMouseSensitivity @ 0x14013B630 (UpdateMouseSensitivity.c)
 *     xxxSystemParametersInfo @ 0x140173780 (xxxSystemParametersInfo.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1401B1850 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     isRootPartition @ 0x14004FB7C (isRootPartition.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x140213C58 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x14021B14C (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

void __fastcall BroadcastSettingsUpdateToAllContainers(__int64 a1)
{
  const struct CONTAINER_ID *v1; // rdx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  if ( isRootPartition(a1) && CIVChannel::ContainerConnected(3u) )
  {
    v2 = 0;
    IVRootDeliver::Settings::SendSettingsUpdateToContainer((IVRootDeliver::Settings *)&v2, v1);
  }
}
