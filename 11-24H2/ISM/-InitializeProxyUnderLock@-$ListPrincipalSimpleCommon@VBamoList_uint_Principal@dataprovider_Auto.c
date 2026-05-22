/*
 * XREFs of ?InitializeProxyUnderLock@?$ListPrincipalSimpleCommon@VBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_uint_Stub@2345@II@Bamo@Microsoft@@MEAAJPEAVBamoList_uint_Stub@dataprovider_AutoBamos@Lib@23@@Z @ 0x180102970
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal,dataprovider_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Stub,unsigned int,unsigned int>::InitializeProxyUnderLock(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx
  __int64 v5; // r8
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( (unsigned int)i >= (unsigned __int64)((*(_QWORD *)(a1 + 64) - v5) >> 2) )
      break;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a2 + 8) + 24LL))(
           a2 + 8,
           (unsigned int)i,
           *(unsigned int *)(v5 + 4 * i));
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x135,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v6,
        v8);
  }
  return 0LL;
}
