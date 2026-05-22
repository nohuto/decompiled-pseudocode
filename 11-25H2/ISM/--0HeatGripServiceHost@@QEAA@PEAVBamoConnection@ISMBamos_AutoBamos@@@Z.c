/*
 * XREFs of ??0HeatGripServiceHost@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000E3F8
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000D7E8 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18000E01C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

HeatGripServiceHost *__fastcall HeatGripServiceHost::HeatGripServiceHost(
        HeatGripServiceHost *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  *(_QWORD *)this = &BamoHeatGripServicePrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &HeatGripServiceHost::`vftable'{for `IHeatGripServicePrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((HeatGripServiceHost *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoHeatGripServicePrincipalImpl::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &HeatGripServiceHost::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &HeatGripServiceHost::`vftable'{for `IHeatGripServicePrincipal'};
  return this;
}
