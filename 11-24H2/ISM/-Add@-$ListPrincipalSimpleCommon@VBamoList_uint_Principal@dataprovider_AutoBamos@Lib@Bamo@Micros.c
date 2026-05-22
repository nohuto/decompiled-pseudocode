/*
 * XREFs of ?Add@?$ListPrincipalSimpleCommon@VBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_uint_Stub@2345@II@Bamo@Microsoft@@QEAAJI@Z @ 0x180100B50
 * Callers:
 *     ?CreateDataSource@AnimationDataProvider@@UEBA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x180102460 (-CreateDataSource@AnimationDataProvider@@UEBA-AV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I.c)
 *     std::for_each_std::_List_const_iterator_std::_List_val_std::_List_simple_types_unsigned_int_______lambda_1f06d20aa2c7b6f65f005431986a59fb___ @ 0x1801463CC (std--for_each_std--_List_const_iterator_std--_List_val_std--_List_simple_types_unsigned_int_____.c)
 * Callees:
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800252DC (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x180025454 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_uint_Stub@2345@II@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@II@Z @ 0x1801029F0 (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Ba.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal,dataprovider_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Stub,unsigned int,unsigned int>::Add(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v4; // r8
  struct Microsoft::Bamo::BaseBamoConnection *v5; // rbx
  unsigned int inserted; // ebx
  Microsoft::BamoImpl::BamoImplObject *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1[4] + 32LL);
  v5 = 0LL;
  if ( *(int *)(v4 + 8) > 0 )
    v5 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v4 + 16);
  Microsoft::Bamo::Lock::Lock(v8, v5);
  inserted = Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal,dataprovider_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Stub,unsigned int,unsigned int>::InsertWorker(
               a1,
               v5,
               (__int64)(a1[8] - a1[7]) >> 2,
               a2);
  Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v8);
  return inserted;
}
