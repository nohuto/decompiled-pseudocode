/*
 * XREFs of ??0BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180184714
 * Callers:
 *     ??0BamoSimpleHapticsControllerPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1801846DC (--0BamoSimpleHapticsControllerPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18000E77C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *__fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::BamoSimpleHapticsControllerPrincipalImpl(
        BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl(this, a2);
  *(_QWORD *)this = &BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::`vftable';
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  return this;
}
