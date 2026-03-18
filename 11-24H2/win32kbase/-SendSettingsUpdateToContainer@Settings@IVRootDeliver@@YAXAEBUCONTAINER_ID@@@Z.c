/*
 * XREFs of ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x140213C58
 * Callers:
 *     BroadcastSettingsUpdateToAllContainers @ 0x14013B680 (BroadcastSettingsUpdateToAllContainers.c)
 *     ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x1402172E0 (-ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x140199058 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x140199A64 (--1CIVSerializer@@UEAA@XZ.c)
 *     PackMouseSettings @ 0x140213938 (PackMouseSettings.c)
 *     PackPenSettings @ 0x140213990 (PackPenSettings.c)
 *     PackTouchpadSettings @ 0x1402139E8 (PackTouchpadSettings.c)
 *     ?ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x140217710 (-ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x140217880 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall IVRootDeliver::Settings::SendSettingsUpdateToContainer(
        IVRootDeliver::Settings *this,
        const struct CONTAINER_ID *a2)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v4; // [rsp+30h] [rbp-28h]

  CIVSerializer::CIVSerializer((__int64)v3, 9);
  v3[0] = &CIVGenericSerializer::`vftable';
  if ( v4 )
  {
    PackTouchpadSettings(v4);
    PackMouseSettings(v4);
    PackPenSettings(v4);
    if ( *(_WORD *)this || *((_WORD *)this + 1) )
      ivrIVSend((const struct CIVSerializer *)v3, 3u, this);
    else
      ivrIVBroadcast((const struct CIVSerializer *)v3, 3u, this);
  }
  v3[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v3);
}
