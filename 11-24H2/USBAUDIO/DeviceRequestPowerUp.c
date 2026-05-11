/*
 * XREFs of DeviceRequestPowerUp @ 0x14004007C
 * Callers:
 *     PinAddPinToList @ 0x1400087B0 (PinAddPinToList.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140009420 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     PropertyGetSetChannelConfiguration @ 0x140032D10 (PropertyGetSetChannelConfiguration.c)
 *     PropertySetBooleanSideband @ 0x14003348C (PropertySetBooleanSideband.c)
 *     PropertySetDbLevelSideband @ 0x14003365C (PropertySetDbLevelSideband.c)
 *     PropertySetFeatureValue @ 0x140033780 (PropertySetFeatureValue.c)
 *     PropertySetMixerLevels @ 0x1400338F0 (PropertySetMixerLevels.c)
 *     PropertySetTopologyNodeEnable @ 0x140033AC0 (PropertySetTopologyNodeEnable.c)
 *     IncrementActivePinCount @ 0x14003D800 (IncrementActivePinCount.c)
 *     PropertySetBoolean @ 0x14003DED0 (PropertySetBoolean.c)
 *     PropertySetDbLevel @ 0x14003E180 (PropertySetDbLevel.c)
 *     PropertyGetSetMuxSource @ 0x140040270 (PropertyGetSetMuxSource.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14000C6A8 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

NTSTATUS __fastcall DeviceRequestPowerUp(__int64 a1)
{
  _QWORD *Context; // rdi
  _DWORD *v3; // rdx
  bool v4; // al
  ULONG *v5; // r8
  void *v6; // rdx

  Context = *(_QWORD **)(a1 + 16);
  v3 = (_DWORD *)Context[66];
  if ( v3 )
    *v3 = 0;
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v5 = &WPP_RECORDER_INITIALIZED;
  if ( v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = &WPP_36ecd4db00a936131fa2a547c127b75e_Traceguids;
    LOBYTE(v6) = v4;
    LOBYTE(v5) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v6,
      (_DWORD)v5,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return PoRequestPowerIrp(
           *(PDEVICE_OBJECT *)(a1 + 32),
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)PowerIrpComplete,
           Context,
           0LL);
}
