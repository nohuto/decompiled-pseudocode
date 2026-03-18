/*
 * XREFs of ??$SetProperty@UD2DVector2@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector2@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18027BC00
 * Callers:
 *     ?SetVector2Value@DataSourceProxy@@MEAAJIMM@Z @ 0x18027CCC0 (-SetVector2Value@DataSourceProxy@@MEAAJIMM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetPropertyValue@UD2DMatrix@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAPEAUD2DMatrix@@I@Z @ 0x1801A1C10 (--$GetPropertyValue@UD2DMatrix@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAlloc.c)
 *     ??$AddProperty@UD2DVector2@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@PEAI@Z @ 0x1801A1DCC (--$AddProperty@UD2DVector2@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@AEBI@Z @ 0x1801D01E0 (--$find@X@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$a.c)
 *     ?GetDataType@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@I@Z @ 0x1801D0280 (-GetDataType@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA-AW4DCOM.c)
 *     ??$emplace@AEAIAEAI@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@AEAI0@Z @ 0x18027C074 (--$emplace@AEAIAEAI@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@.c)
 */

__int64 __fastcall DataSourcePropertySet::SetProperty<D2DVector2>(__int64 a1, int a2, __int64 *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  unsigned int v10; // edi
  _DWORD *Property; // rax
  int v12; // xmm1_4
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v17; // [rsp+68h] [rbp+20h] BYREF

  v16 = a2;
  v17 = 0;
  std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::find<void>(
    a1,
    (__int64)&v15,
    &v16);
  v5 = a1 + 64;
  v6 = a1 + 64;
  if ( v15 == *(_QWORD *)(a1 + 8) )
  {
    v7 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DVector2>(v6, 35, a3, &v17);
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
      v13,
      &v16,
      &v17);
  }
  else
  {
    v10 = *(_DWORD *)(v15 + 20);
    if ( (unsigned int)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetDataType(v6, v10) != 35 )
    {
      v7 = -2147024809;
      v8 = 48LL;
      goto LABEL_4;
    }
    v15 = *a3;
    Property = (_DWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DMatrix>(
                           v5,
                           v10);
    v12 = HIDWORD(v15);
    *Property = v15;
    Property[1] = v12;
  }
  return 0LL;
}
