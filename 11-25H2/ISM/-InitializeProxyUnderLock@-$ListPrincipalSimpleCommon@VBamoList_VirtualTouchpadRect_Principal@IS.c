/*
 * XREFs of ?InitializeProxyUnderLock@?$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_VirtualTouchpadRect_Stub@2345@UVirtualTouchpadRect@@AEBU8@@Bamo@Microsoft@@MEAAJPEAVBamoList_VirtualTouchpadRect_Stub@ISMBamos_AutoBamos@Lib@23@@Z @ 0x18013B0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Stub,VirtualTouchpadRect,VirtualTouchpadRect const &>::InitializeProxyUnderLock(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64, _QWORD, int *); // rax
  int v8; // eax
  int v10[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( (unsigned int)i >= 0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)(a1 + 64) - v5) >> 3) )
      break;
    v6 = *(_QWORD *)(a2 + 8);
    *(_OWORD *)v10 = *(_OWORD *)(v5 + 24 * i);
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, int *))(v6 + 24);
    v11 = *(_QWORD *)(v5 + 24 * i + 16);
    v8 = v7(a2 + 8, (unsigned int)i, v10);
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
