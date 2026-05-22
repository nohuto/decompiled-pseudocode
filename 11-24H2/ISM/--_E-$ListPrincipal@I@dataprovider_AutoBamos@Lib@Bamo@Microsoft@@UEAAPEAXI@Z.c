/*
 * XREFs of ??_E?$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z @ 0x180100990
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ListPrincipalCommon@VBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@I@Bamo@Microsoft@@UEAA@XZ @ 0x180100884 (--1-$ListPrincipalCommon@VBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@VBa.c)
 */

void *__fastcall Microsoft::Bamo::Lib::dataprovider_AutoBamos::ListPrincipal<unsigned int>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal,dataprovider_AutoBamos::BamoConnection,unsigned int>::~ListPrincipalCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal,dataprovider_AutoBamos::BamoConnection,unsigned int>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x50);
  return a1;
}
