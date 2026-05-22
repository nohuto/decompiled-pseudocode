/*
 * XREFs of ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800C399C
 * Callers:
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z @ 0x1800375DC (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z.c)
 *     ?EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventId@2@0PEAUHSTRING__@@P6AX67PEAX@Z8@Z @ 0x180037654 (-EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventI.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003795C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18006CF4C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?CreateInteropCompositor@WindowsCompositionGlobals@SystemCursors@@SAJPEAPEAUICompositor@Composition@UI@Windows@@@Z @ 0x180081628 (-CreateInteropCompositor@WindowsCompositionGlobals@SystemCursors@@SAJPEAPEAUICompositor@Composit.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800C3808 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800D22A4 (--1SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 *     ?Close@?$HandleT@UHMODULETraits@SpatialRimDeviceCollection@@@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x1800D2740 (-Close@-$HandleT@UHMODULETraits@SpatialRimDeviceCollection@@@Wrappers@WRL@Microsoft@@QEAAXXZ.c)
 *     ?Close@?$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x1800DCCA8 (-Close@-$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::RaiseException(Microsoft::WRL::Details *this)
{
  RaiseException((DWORD)this, 1u, 0, 0LL);
}
