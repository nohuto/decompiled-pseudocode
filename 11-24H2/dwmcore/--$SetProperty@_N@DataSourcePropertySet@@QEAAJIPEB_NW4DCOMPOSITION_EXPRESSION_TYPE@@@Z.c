/*
 * XREFs of ??$SetProperty@_N@DataSourcePropertySet@@QEAAJIPEB_NW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801A84E4
 * Callers:
 *     ?SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z @ 0x1801A8380 (-SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AddProperty@_N@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAI@Z @ 0x1801856E8 (--$AddProperty@_N@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4.c)
 *     ??$?RI@?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@QEBA_KAEBI@Z @ 0x1801A86E4 (--$-RI@-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@QEBA_KAEBI@Z.c)
 *     ?GetDataType@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@I@Z @ 0x1801A8720 (-GetDataType@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA-AW4DCOM.c)
 *     ??$GetPropertyValue@_N@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAPEA_NI@Z @ 0x1801A8750 (--$GetPropertyValue@_N@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QE.c)
 *     ??$emplace@AEAIAEAI@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@AEAI0@Z @ 0x180271964 (--$emplace@AEAIAEAI@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@.c)
 */

__int64 __fastcall DataSourcePropertySet::SetProperty<bool>(_QWORD *a1, int a2, char *a3)
{
  __int64 v5; // rax
  int v6; // r10d
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rdi
  unsigned int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // bl
  int v17; // ebx
  __int64 v18; // rdx
  _BYTE v19[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v21; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v22; // [rsp+58h] [rbp+20h] BYREF

  v21 = a2;
  v22 = 0;
  v5 = std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>::operator()<unsigned int>(
         a1,
         &v21);
  v7 = a1[3];
  v8 = 2 * (a1[6] & v5);
  v9 = *(_QWORD *)(v7 + 8 * v8 + 8);
  if ( v9 == a1[1] )
  {
LABEL_6:
    v9 = 0LL;
  }
  else
  {
    v10 = *(_QWORD *)(v7 + 8 * v8);
    while ( v6 != *(_DWORD *)(v9 + 16) )
    {
      if ( v9 == v10 )
        goto LABEL_6;
      v9 = *(_QWORD *)(v9 + 8);
    }
  }
  v11 = a1 + 8;
  if ( !v9 || v9 == a1[1] )
  {
    v17 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<bool>(
            (__int64)(a1 + 8),
            17,
            a3,
            &v22);
    if ( v17 >= 0 )
    {
      std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::emplace<unsigned int &,unsigned int &>(
        a1,
        v19,
        &v21,
        &v22);
      return 0LL;
    }
    v18 = 37LL;
  }
  else
  {
    v12 = *(_DWORD *)(v9 + 20);
    if ( (unsigned int)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetDataType(v11) == 17 )
    {
      v15 = *a3;
      *(_BYTE *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<bool>(
                  v11,
                  v12,
                  v13,
                  v14) = v15;
      return 0LL;
    }
    v17 = -2147024809;
    v18 = 48LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\DataSourcePropertySet.h",
    (const char *)(unsigned int)v17);
  return (unsigned int)v17;
}
