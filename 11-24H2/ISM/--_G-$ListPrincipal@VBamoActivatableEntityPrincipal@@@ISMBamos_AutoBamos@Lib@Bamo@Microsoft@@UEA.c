/*
 * XREFs of ??_G?$ListPrincipal@VBamoActivatableEntityPrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z @ 0x1800AC8B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ListPrincipalCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@Bamo@Microsoft@@UEAA@XZ @ 0x1800AC620 (--1-$ListPrincipalCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@B.c)
 */

void *__fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoActivatableEntityPrincipal>::`scalar deleting destructor'(
        void *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl

  v4 = a2;
  Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>::~ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>(
    (__int64)a1,
    a2,
    a3,
    a4);
  if ( (v4 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x50);
  return a1;
}
