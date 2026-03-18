/*
 * XREFs of BroadcastSettingsUpdateToAllContainers @ 0x1C0095820
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0094FF0 (xxxSystemParametersInfo.c)
 *     UpdateMouseSensitivity @ 0x1C00957D0 (UpdateMouseSensitivity.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0134DB4 (_SetPrecisionTouchPadConfiguration.c)
 *     SetSwapMouseButton @ 0x1C013EFE0 (SetSwapMouseButton.c)
 * Callees:
 *     isRootPartition @ 0x1C004FEE8 (isRootPartition.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01E9884 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F3884 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

void BroadcastSettingsUpdateToAllContainers()
{
  const struct CONTAINER_ID *v0; // rdx
  int v1; // [rsp+30h] [rbp+8h] BYREF

  if ( isRootPartition() && CIVChannel::ContainerConnected(3u) )
  {
    v1 = 0;
    IVRootDeliver::Settings::SendSettingsUpdateToContainer((IVRootDeliver::Settings *)&v1, v0);
  }
}
