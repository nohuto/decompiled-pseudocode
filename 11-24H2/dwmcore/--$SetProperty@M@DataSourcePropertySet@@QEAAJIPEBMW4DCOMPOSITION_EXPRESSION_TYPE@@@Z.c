/*
 * XREFs of ??$SetProperty@M@DataSourcePropertySet@@QEAAJIPEBMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180271220
 * Callers:
 *     ?SetScalarValue@DataSourceProxy@@MEAAJIM@Z @ 0x180272560 (-SetScalarValue@DataSourceProxy@@MEAAJIM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetPropertyValue@UD2DMatrix@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAPEAUD2DMatrix@@I@Z @ 0x180182A2C (--$GetPropertyValue@UD2DMatrix@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAlloc.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@AEBI@Z @ 0x1801A8680 (--$find@X@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$a.c)
 *     ?GetDataType@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@I@Z @ 0x1801A8720 (-GetDataType@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA-AW4DCOM.c)
 *     ??$AddProperty@M@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBMPEAI@Z @ 0x1801DBEBC (--$AddProperty@M@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4D.c)
 *     ??$emplace@AEAIAEAI@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@AEAI0@Z @ 0x180271964 (--$emplace@AEAIAEAI@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@.c)
 */

__int64 __fastcall DataSourcePropertySet::SetProperty<float>(__int64 a1, int a2, int *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  unsigned int v10; // edi
  int v11; // xmm6_4
  _BYTE v12[16]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+78h] [rbp+20h] BYREF

  v15 = a2;
  v16 = 0;
  std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::find<void>(
    a1,
    (__int64)&v14,
    &v15);
  v5 = a1 + 64;
  v6 = a1 + 64;
  if ( v14 == *(_QWORD *)(a1 + 8) )
  {
    v7 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<float>(v6, 18, a3, &v16);
    if ( v7 < 0 )
    {
      v8 = 37LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\DataSourcePropertySet.h",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
    std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::emplace<unsigned int &,unsigned int &>(
      a1,
      v12,
      &v15,
      &v16);
  }
  else
  {
    v10 = *(_DWORD *)(v14 + 20);
    if ( (unsigned int)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetDataType(v6, v10) != 18 )
    {
      v7 = -2147024809;
      v8 = 48LL;
      goto LABEL_4;
    }
    v11 = *a3;
    *(_DWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DMatrix>(v5, v10) = v11;
  }
  return 0LL;
}
