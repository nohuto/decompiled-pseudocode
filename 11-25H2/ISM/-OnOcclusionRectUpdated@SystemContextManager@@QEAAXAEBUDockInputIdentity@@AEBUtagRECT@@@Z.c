/*
 * XREFs of ?OnOcclusionRectUpdated@SystemContextManager@@QEAAXAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x18013C00C
 * Callers:
 *     ?OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x18019AB18 (-OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x1800643A8 (--0-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoIn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??8@YA_NAEBUDockInputIdentity@@0@Z @ 0x180139C54 (--8@YA_NAEBUDockInputIdentity@@0@Z.c)
 *     ?GetItemAt@?$ListPrincipalDetails@UDisplayOcclusionRect@@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@3@VBamoList_DisplayOcclusionRect_Stub@3456@$0A@$00$0A@@Bamo@Microsoft@@QEAAAEBUDisplayOcclusionRect@@I@Z @ 0x18013AF08 (-GetItemAt@-$ListPrincipalDetails@UDisplayOcclusionRect@@VBamoList_DisplayOcclusionRect_Principa.c)
 *     ?Replace@?$ListPrincipalSimpleCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_DisplayOcclusionRect_Stub@2345@UDisplayOcclusionRect@@AEBU8@@Bamo@Microsoft@@QEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18013DD44 (-Replace@-$ListPrincipalSimpleCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SystemContextManager::OnOcclusionRectUpdated(
        SystemContextManager *this,
        const struct DockInputIdentity *a2,
        const struct tagRECT *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rbp
  void (__fastcall ***v7)(_QWORD); // rax
  unsigned int v8; // esi
  __int64 v9; // rbx
  __int64 ItemAt; // rax
  int v11; // eax
  __int64 v12[2]; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v13; // [rsp+30h] [rbp-E8h] BYREF
  __m256i v14; // [rsp+40h] [rbp-D8h]
  __int128 v15; // [rsp+60h] [rbp-B8h]
  __int128 v16; // [rsp+70h] [rbp-A8h]
  __int128 v17; // [rsp+80h] [rbp-98h]
  __int128 v18; // [rsp+90h] [rbp-88h]
  __int128 v19; // [rsp+A0h] [rbp-78h]
  __int128 v20; // [rsp+B0h] [rbp-68h]
  __int128 v21; // [rsp+C0h] [rbp-58h]
  __int128 v22; // [rsp+D0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  v5 = *((_QWORD *)this + 7);
  v6 = *((_QWORD *)this + 8);
  while ( v5 != v6 )
  {
    v7 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v5 + 8LL) + 32LL))(*(_QWORD *)v5 + 8LL);
    wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
      v12,
      v7);
    v8 = 0;
    v9 = v12[0];
    while ( v8 < -1171354717 * (unsigned int)((__int64)(*(_QWORD *)(v9 + 64) - *(_QWORD *)(v9 + 56)) >> 4) )
    {
      ItemAt = Microsoft::Bamo::ListPrincipalDetails<DisplayOcclusionRect,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Stub,0,1,0>::GetItemAt(
                 v9,
                 v8);
      v13 = *(_OWORD *)ItemAt;
      v14 = *(__m256i *)(ItemAt + 16);
      v15 = *(_OWORD *)(ItemAt + 48);
      v16 = *(_OWORD *)(ItemAt + 64);
      v17 = *(_OWORD *)(ItemAt + 80);
      v18 = *(_OWORD *)(ItemAt + 96);
      v19 = *(_OWORD *)(ItemAt + 112);
      v20 = *(_OWORD *)(ItemAt + 128);
      v21 = *(_OWORD *)(ItemAt + 144);
      v22 = *(_OWORD *)(ItemAt + 160);
      if ( operator==((__int64)&v13, (__int64)a2) )
      {
        *(struct tagRECT *)&v14.m256i_u64[1] = *a3;
        v11 = Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Stub,DisplayOcclusionRect,DisplayOcclusionRect const &>::Replace(
                v9,
                v8,
                &v13);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA3,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\manager\\systemcontextmanager.cpp",
            (const char *)(unsigned int)v11);
        break;
      }
      ++v8;
    }
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v12);
    v5 += 8LL;
  }
}
