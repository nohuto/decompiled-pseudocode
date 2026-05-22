/*
 * XREFs of ??0BamoSystemCursorControllerPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18009529C
 * Callers:
 *     ??0SystemCursorController2@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000E460 (--0SystemCursorController2@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18000E01C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

BamoSystemCursorControllerPrincipal *__fastcall BamoSystemCursorControllerPrincipal::BamoSystemCursorControllerPrincipal(
        BamoSystemCursorControllerPrincipal *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  *(_QWORD *)this = &BamoSystemCursorControllerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &SystemCursorController2::`vftable'{for `ISystemCursorControllerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl(
    (BamoSystemCursorControllerPrincipal *)((char *)this + 16),
    a2);
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 2) = &BamoImpl::BamoSystemCursorControllerPrincipalImpl::`vftable';
  return this;
}
