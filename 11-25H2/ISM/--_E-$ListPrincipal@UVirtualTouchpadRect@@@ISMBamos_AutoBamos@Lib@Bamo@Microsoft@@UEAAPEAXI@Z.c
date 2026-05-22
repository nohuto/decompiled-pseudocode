/*
 * XREFs of ??_E?$ListPrincipal@UVirtualTouchpadRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z @ 0x180139CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ListPrincipalCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@UVirtualTouchpadRect@@@Bamo@Microsoft@@UEAA@XZ @ 0x180139BFC (--1-$ListPrincipalCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Mic.c)
 */

void *__fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<VirtualTouchpadRect>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal,ISMBamos_AutoBamos::BamoConnection,VirtualTouchpadRect>::~ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal,ISMBamos_AutoBamos::BamoConnection,VirtualTouchpadRect>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x50);
  return a1;
}
