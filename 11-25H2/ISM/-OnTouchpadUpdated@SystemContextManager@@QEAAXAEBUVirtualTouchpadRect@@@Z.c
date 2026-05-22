/*
 * XREFs of ?OnTouchpadUpdated@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z @ 0x18013C304
 * Callers:
 *     ?OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x18019A004 (-OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x1800643A8 (--0-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoIn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetItemAt@?$ListPrincipalDetails@UVirtualTouchpadRect@@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@3@VBamoList_VirtualTouchpadRect_Stub@3456@$0A@$00$0A@@Bamo@Microsoft@@QEAAAEBUVirtualTouchpadRect@@I@Z @ 0x18013AF34 (-GetItemAt@-$ListPrincipalDetails@UVirtualTouchpadRect@@VBamoList_VirtualTouchpadRect_Principal@.c)
 *     ?Replace@?$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_VirtualTouchpadRect_Stub@2345@UVirtualTouchpadRect@@AEBU8@@Bamo@Microsoft@@QEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x18013DF0C (-Replace@-$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SystemContextManager::OnTouchpadUpdated(
        SystemContextManager *this,
        const struct VirtualTouchpadRect *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  void (__fastcall ***v5)(_QWORD); // rax
  unsigned int v6; // esi
  __int64 v7; // rbx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 7);
  v4 = *((_QWORD *)this + 8);
  while ( v3 != v4 )
  {
    v5 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v3 + 8LL) + 48LL))(*(_QWORD *)v3 + 8LL);
    wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
      &v10,
      v5);
    v6 = 0;
    v7 = v10;
    while ( v6 < -1431655765 * (unsigned int)((__int64)(*(_QWORD *)(v7 + 64) - *(_QWORD *)(v7 + 56)) >> 3) )
    {
      if ( *(_QWORD *)Microsoft::Bamo::ListPrincipalDetails<VirtualTouchpadRect,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Stub,0,1,0>::GetItemAt(
                        v7,
                        v6) == *(_QWORD *)a2 )
      {
        v8 = Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Stub,VirtualTouchpadRect,VirtualTouchpadRect const &>::Replace(
               v7,
               v6,
               a2);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xD9,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\manager\\systemcontextmanager.cpp",
            (const char *)(unsigned int)v8);
        break;
      }
      ++v6;
    }
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v10);
    v3 += 8LL;
  }
}
