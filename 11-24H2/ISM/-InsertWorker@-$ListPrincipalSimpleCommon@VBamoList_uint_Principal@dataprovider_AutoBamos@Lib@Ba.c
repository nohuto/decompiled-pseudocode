/*
 * XREFs of ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_uint_Stub@2345@II@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@II@Z @ 0x1801029F0
 * Callers:
 *     ?Add@?$ListPrincipalSimpleCommon@VBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_uint_Stub@2345@II@Bamo@Microsoft@@QEAAJI@Z @ 0x180100B50 (-Add@-$ListPrincipalSimpleCommon@VBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Micros.c)
 * Callees:
 *     ?IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ @ 0x1800252B8 (-IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x180066A64 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?BroadcastRemoteInsert@BamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@UEAAJII@Z @ 0x1801011F0 (-BroadcastRemoteInsert@BamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@UEAAJI.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal,dataprovider_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Stub,unsigned int,unsigned int>::InsertWorker(
        __int64 a1,
        Microsoft::Bamo::BaseBamoConnection *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v4; // edi
  unsigned int *v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  unsigned int *v11; // rbx
  const char *v12; // r9
  int v13; // eax
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v17; // [rsp+58h] [rbp+20h] BYREF

  v17 = a4;
  v4 = a4;
  v8 = *(unsigned int **)(a1 + 64);
  v9 = *(_QWORD *)(a1 + 56);
  v10 = ((__int64)v8 - v9) >> 2;
  if ( a3 > v10 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x14D,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      (const char *)v10);
  v11 = (unsigned int *)(v9 + 4LL * a3);
  if ( v8 == *(unsigned int **)(a1 + 72) )
  {
    try
    {
      std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>(
        (const void **)(a1 + 56),
        (_BYTE *)(v9 + 4LL * a3),
        &v17,
        v10);
      v4 = v17;
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x153,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v12);
    }
  }
  else if ( v11 == v8 )
  {
    *v8 = v4;
    *(_QWORD *)(a1 + 64) += 4LL;
  }
  else
  {
    *v8 = *(v8 - 1);
    *(_QWORD *)(a1 + 64) += 4LL;
    memmove_0(v11 + 1, v11, (char *)(v8 - 1) - (char *)v11);
    *v11 = v4;
  }
  if ( !Microsoft::Bamo::BaseBamoConnection::IsDisconnected(a2) )
  {
    v13 = Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal::BroadcastRemoteInsert(
            (struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 8),
            a3,
            v4);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x157,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v13,
        v15);
  }
  return 0LL;
}
