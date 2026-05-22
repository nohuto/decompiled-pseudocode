/*
 * XREFs of ??0ActivatableEntityBamoPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@_K@Z @ 0x18000E6F4
 * Callers:
 *     ?AddActivatableEntity@ActivationWatcherBamoPrincipal@@QEAAJ_KU_LUID@@0IIW4ACTIVATION_OBJECT_STATE@@@Z @ 0x18000E540 (-AddActivatableEntity@ActivationWatcherBamoPrincipal@@QEAAJ_KU_LUID@@0IIW4ACTIVATION_OBJECT_STAT.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18000E77C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

ActivatableEntityBamoPrincipal *__fastcall ActivatableEntityBamoPrincipal::ActivatableEntityBamoPrincipal(
        ActivatableEntityBamoPrincipal *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2,
        __int64 a3)
{
  ActivatableEntityBamoPrincipal *result; // rax

  *(_QWORD *)this = &BamoActivatableEntityPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoActivatableEntityPrincipal::`vftable'{for `IActivatableEntityPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((ActivatableEntityBamoPrincipal *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoActivatableEntityPrincipalImpl::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *(_QWORD *)this = &ActivatableEntityBamoPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoActivatableEntityPrincipal::`vftable'{for `IActivatableEntityPrincipal'};
  result = this;
  *((_QWORD *)this + 11) = a3;
  return result;
}
