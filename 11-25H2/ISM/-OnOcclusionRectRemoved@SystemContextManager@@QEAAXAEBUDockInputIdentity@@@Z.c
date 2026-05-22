/*
 * XREFs of ?OnOcclusionRectRemoved@SystemContextManager@@QEAAXAEBUDockInputIdentity@@@Z @ 0x18013BF2C
 * Callers:
 *     ?OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z @ 0x18019AA08 (-OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x1800643A8 (--0-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoIn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??8@YA_NAEBUDockInputIdentity@@0@Z @ 0x180139C54 (--8@YA_NAEBUDockInputIdentity@@0@Z.c)
 *     ?GetItemAt@?$ListPrincipalDetails@UDisplayOcclusionRect@@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@3@VBamoList_DisplayOcclusionRect_Stub@3456@$0A@$00$0A@@Bamo@Microsoft@@QEAAAEBUDisplayOcclusionRect@@I@Z @ 0x18013AF08 (-GetItemAt@-$ListPrincipalDetails@UDisplayOcclusionRect@@VBamoList_DisplayOcclusionRect_Principa.c)
 *     ?RemoveAt@?$ListPrincipalCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@UDisplayOcclusionRect@@@Bamo@Microsoft@@QEAAJI@Z @ 0x18013DB60 (-RemoveAt@-$ListPrincipalCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SystemContextManager::OnOcclusionRectRemoved(
        SystemContextManager *this,
        const struct DockInputIdentity *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  void (__fastcall ***v5)(_QWORD); // rax
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 ItemAt; // rax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 7);
  v4 = *((_QWORD *)this + 8);
  while ( v3 != v4 )
  {
    v5 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v3 + 8LL) + 32LL))(*(_QWORD *)v3 + 8LL);
    wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
      &v11,
      v5);
    v6 = 0;
    v7 = v11;
    while ( v6 < -1171354717 * (unsigned int)((__int64)(*(_QWORD *)(v7 + 64) - *(_QWORD *)(v7 + 56)) >> 4) )
    {
      ItemAt = Microsoft::Bamo::ListPrincipalDetails<DisplayOcclusionRect,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Stub,0,1,0>::GetItemAt(
                 v7,
                 v6);
      if ( operator==(ItemAt, (__int64)a2) )
      {
        v9 = Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal,ISMBamos_AutoBamos::BamoConnection,DisplayOcclusionRect>::RemoveAt(
               v7,
               v6);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xB8,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\manager\\systemcontextmanager.cpp",
            (const char *)(unsigned int)v9);
        break;
      }
      ++v6;
    }
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v11);
    v3 += 8LL;
  }
}
