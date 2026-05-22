/*
 * XREFs of ??0?$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z @ 0x1800FEAD8
 * Callers:
 *     ?CreateDataSource@AnimationDataProvider@@UEBA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x180100760 (-CreateDataSource@AnimationDataProvider@@UEBA-AV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I.c)
 *     ?CreateProcessIdList@AnimationDataProvider@@UEBA?AV?$ComPtr@V?$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@@WRL@Microsoft@@XZ @ 0x180100990 (-CreateProcessIdList@AnimationDataProvider@@UEBA-AV-$ComPtr@V-$ListPrincipal@I@dataprovider_Auto.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18000E01C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

_QWORD *__fastcall Microsoft::Bamo::Lib::dataprovider_AutoBamos::ListPrincipal<unsigned int>::ListPrincipal<unsigned int>(
        _QWORD *a1,
        struct Microsoft::Bamo::BaseBamoConnection *a2)
{
  *a1 = &Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  a1[1] = &Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal::`vftable'{for `Microsoft::Bamo::Lib::dataprovider_AutoBamos::IList_uint_Principal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(a1 + 2), a2);
  a1[2] = &Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::BamoList_uint_PrincipalImpl::`vftable';
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  *a1 = &Microsoft::Bamo::Lib::dataprovider_AutoBamos::ListPrincipal<unsigned int>::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  a1[1] = &Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal::`vftable'{for `Microsoft::Bamo::Lib::dataprovider_AutoBamos::IList_uint_Principal'};
  return a1;
}
