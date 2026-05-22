/*
 * XREFs of ??0BamoSimpleHapticsControllerPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1801846DC
 * Callers:
 *     ??0TouchpadHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEBULegacyDeviceInfo@@@Z @ 0x180184828 (--0TouchpadHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEBULegacyDeviceInfo@@@Z.c)
 *     ??0PenHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180188128 (--0PenHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??0MouseHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180188B70 (--0MouseHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@KAEBV-$basic_string@GU-$char_t.c)
 * Callees:
 *     ??0BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180184714 (--0BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos.c)
 */

BamoSimpleHapticsControllerPrincipal *__fastcall BamoSimpleHapticsControllerPrincipal::BamoSimpleHapticsControllerPrincipal(
        BamoSimpleHapticsControllerPrincipal *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  *(_QWORD *)this = &BamoSimpleHapticsControllerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &MouseHapticDevice::`vftable'{for `ISimpleHapticsControllerPrincipal'};
  BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::BamoSimpleHapticsControllerPrincipalImpl(
    (BamoSimpleHapticsControllerPrincipal *)((char *)this + 16),
    a2);
  return this;
}
