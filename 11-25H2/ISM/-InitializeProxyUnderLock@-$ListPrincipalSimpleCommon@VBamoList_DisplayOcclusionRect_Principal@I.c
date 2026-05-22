/*
 * XREFs of ?InitializeProxyUnderLock@?$ListPrincipalSimpleCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_DisplayOcclusionRect_Stub@2345@UDisplayOcclusionRect@@AEBU8@@Bamo@Microsoft@@MEAAJPEAVBamoList_DisplayOcclusionRect_Stub@ISMBamos_AutoBamos@Lib@23@@Z @ 0x18013AF80
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Stub,DisplayOcclusionRect,DisplayOcclusionRect const &>::InitializeProxyUnderLock(
        __int64 a1,
        __int64 a2)
{
  unsigned int i; // ebx
  __int64 v5; // rdx
  _OWORD *v6; // rdx
  __int64 (__fastcall *v7)(__int64, _QWORD, _OWORD *); // rax
  int v8; // eax
  _OWORD v10[11]; // [rsp+20h] [rbp-C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  for ( i = 0; ; ++i )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( i >= (unsigned __int64)(0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD *)(a1 + 64) - v5) >> 4)) )
      break;
    v6 = (_OWORD *)(176LL * i + v5);
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, _OWORD *))(*(_QWORD *)(a2 + 8) + 24LL);
    v10[0] = *v6;
    v10[1] = v6[1];
    v10[2] = v6[2];
    v10[3] = v6[3];
    v10[4] = v6[4];
    v10[5] = v6[5];
    v10[6] = v6[6];
    v10[7] = v6[7];
    v10[8] = v6[8];
    v10[9] = v6[9];
    v10[10] = v6[10];
    v8 = v7(a2 + 8, i, v10);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x135,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v8,
        v10[0]);
  }
  return 0LL;
}
