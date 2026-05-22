/*
 * XREFs of ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x18013ED40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x18000D230 (-GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18000E77C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x18000F93C (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@PEAVAsyncStringPrincipal@@@?$vector@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV23@$$QEAPEAVAsyncStringPrincipal@@@Z @ 0x180064670 (--$_Emplace_reallocate@PEAVAsyncStringPrincipal@@@-$vector@V-$com_ptr_t@VAsyncStringPrincipal@@U.c)
 *     ??0?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x1800647E8 (--0-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoIn.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x18007A554 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x1800947D0 (-ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSys.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x18009B814 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ?Add@?$ListPrincipalSimpleCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_DisplayOcclusionRect_Stub@2345@UDisplayOcclusionRect@@AEBU8@@Bamo@Microsoft@@QEAAJAEBUDisplayOcclusionRect@@@Z @ 0x18013BF4C (-Add@-$ListPrincipalSimpleCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib.c)
 *     ?Add@?$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_VirtualTouchpadRect_Stub@2345@UVirtualTouchpadRect@@AEBU8@@Bamo@Microsoft@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x18013BFD0 (-Add@-$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@.c)
 *     ?GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1801A1260 (-GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConf.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x1801A12E8 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1801A1D60 (-GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputCon.c)
 *     ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x1801A1DC0 (-GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SystemContextManager::RegisterSystemContextEndpoint(
        SystemContextManager *this,
        struct BamoSystemContextManagerStub *a2,
        struct BamoSystemContextEndpointProxy *a3,
        const char *a4)
{
  struct BamoSystemContextEndpointProxy **i; // rax
  char *v7; // rsi
  void (__fastcall *v8)(char *, _QWORD *); // r12
  _QWORD *v9; // r15
  __int64 v10; // rax
  struct Microsoft::Bamo::BaseBamoConnection *v11; // rdx
  void (__fastcall *v12)(char *, _QWORD *); // r12
  _QWORD *v13; // rax
  _QWORD *v14; // r15
  __int64 v15; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v16; // rdx
  struct InputConfigContextProvider *Instance; // rax
  int v18; // eax
  struct DisplayOcclusionContextProvider *v19; // rax
  void (__fastcall ***v20)(_QWORD); // rax
  __int64 v21; // r15
  __int64 j; // rbx
  struct VirtualTouchpadContextProvider *v23; // rax
  void (__fastcall ***v24)(_QWORD); // rax
  __int64 v25; // rsi
  __int64 k; // rbx
  __int64 v28; // [rsp+20h] [rbp-20h] BYREF
  __int64 v29; // [rsp+28h] [rbp-18h]
  char v30; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  _QWORD *v32; // [rsp+80h] [rbp+40h] BYREF
  struct BamoSystemContextEndpointProxy *v33; // [rsp+90h] [rbp+50h] BYREF

  v33 = a3;
  for ( i = (struct BamoSystemContextEndpointProxy **)*((_QWORD *)this + 7);
        i != *((struct BamoSystemContextEndpointProxy ***)this + 8) && *i != a3;
        ++i )
  {
    ;
  }
  if ( i != *((struct BamoSystemContextEndpointProxy ***)this + 8) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\manager\\systemcontextmanager.cpp",
      a4);
  v7 = (char *)a3 + 8;
  v8 = *(void (__fastcall **)(char *, _QWORD *))(*((_QWORD *)a3 + 1) + 40LL);
  v9 = operator new(0x50uLL);
  v32 = v9;
  v10 = *(_QWORD *)(*((_QWORD *)this + 4) + 32LL);
  if ( *(int *)(v10 + 8) <= 0 )
    v11 = 0LL;
  else
    v11 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v10 + 16);
  *v9 = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v9[1] = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>::`vftable'{for `Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_DisplayOcclusionRect_Principal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v9 + 2), v11);
  v9[2] = &Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_PrincipalImpl::`vftable';
  v9[7] = 0LL;
  v9[8] = 0LL;
  v9[9] = 0LL;
  *v9 = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v9[1] = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>::`vftable'{for `Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_DisplayOcclusionRect_Principal'};
  v8(v7, v9);
  v12 = *(void (__fastcall **)(char *, _QWORD *))(*(_QWORD *)v7 + 56LL);
  v13 = operator new(0x50uLL);
  v14 = v13;
  v32 = v13;
  v15 = *(_QWORD *)(*((_QWORD *)this + 4) + 32LL);
  if ( *(int *)(v15 + 8) <= 0 )
    v16 = 0LL;
  else
    v16 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v15 + 16);
  *v13 = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v13[1] = &Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal,ISMBamos_AutoBamos::BamoConnection,VirtualTouchpadRect>::`vftable'{for `Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_VirtualTouchpadRect_Principal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v13 + 2), v16);
  v14[2] = &Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_PrincipalImpl::`vftable';
  v14[1] = &Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal,ISMBamos_AutoBamos::BamoConnection,VirtualTouchpadRect>::`vftable'{for `Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_VirtualTouchpadRect_Principal'};
  v14[7] = 0LL;
  v14[8] = 0LL;
  v14[9] = 0LL;
  *v14 = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<VirtualTouchpadRect>::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v14[1] = &Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal,ISMBamos_AutoBamos::BamoConnection,VirtualTouchpadRect>::`vftable'{for `Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_VirtualTouchpadRect_Principal'};
  v12(v7, v14);
  v30 = 0;
  Instance = InputConfigContextProvider::GetInstance();
  if ( (int)InputConfigContextProvider::GetCurrentContext((__int64)Instance, (__int64)&v28) >= 0 )
  {
    if ( v30 != 1 )
      std::_Throw_bad_variant_access();
    v18 = SystemContextManager::ProcessInputConfigMessage(this, (const struct InputConfigContextMessage *)&v28, a3);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x25,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\manager\\systemcontextmanager.cpp",
        (const char *)(unsigned int)v18);
  }
  v19 = DisplayOcclusionContextProvider::GetInstance();
  if ( (int)DisplayOcclusionContextProvider::GetCurrentContext(v19, &v28) >= 0 )
  {
    v20 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v7 + 32LL))(v7);
    wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
      &v32,
      v20);
    if ( v30 != 2 )
      std::_Throw_bad_variant_access();
    v21 = v29;
    for ( j = v28; j != v21; j += 176LL )
      Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Stub,DisplayOcclusionRect,DisplayOcclusionRect const &>::Add(
        v32,
        j);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v32);
  }
  v23 = VirtualTouchpadContextProvider::GetInstance();
  if ( (int)VirtualTouchpadContextProvider::GetCurrentContext(v23, &v28) >= 0 )
  {
    v24 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v7 + 48LL))(v7);
    wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
      &v32,
      v24);
    if ( v30 != 3 )
      std::_Throw_bad_variant_access();
    v25 = v29;
    for ( k = v28; k != v25; k += 24LL )
      Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Stub,VirtualTouchpadRect,VirtualTouchpadRect const &>::Add(
        v32,
        k);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v32);
  }
  if ( *((_QWORD *)this + 8) == *((_QWORD *)this + 9) )
  {
    std::vector<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>::_Emplace_reallocate<AsyncStringPrincipal *>(
      (char **)this + 7,
      *((char **)this + 8),
      &v33);
  }
  else
  {
    wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
      *((_QWORD **)this + 8),
      (void (__fastcall ***)(_QWORD))a3);
    *((_QWORD *)this + 8) += 8LL;
  }
  std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy((__int64)&v28);
  return 0LL;
}
