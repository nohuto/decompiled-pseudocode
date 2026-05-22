/*
 * XREFs of ??1?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180042A28
 * Callers:
 *     ?RegisterInputSiteElement@BamoInputSiteManagerPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18003D4C8 (-RegisterInputSiteElement@BamoInputSiteManagerPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?RegisterInputSiteElementWithHint@BamoInputSiteManagerPrincipalImpl@BamoImpl@@QEAAJIPEBUInputSiteId@@@Z @ 0x18003D640 (-RegisterInputSiteElementWithHint@BamoInputSiteManagerPrincipalImpl@BamoImpl@@QEAAJIPEBUInputSit.c)
 *     ?OnDisconnectedThunk@BamoInputSiteManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x180077270 (-OnDisconnectedThunk@BamoInputSiteManagerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     ?OnPropertiesRefreshedThunk@BamoInputSiteManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x180130070 (-OnPropertiesRefreshedThunk@BamoInputSiteManagerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoInputSiteManagerPrincipalImpl::RegisterInputSiteElement_::_1_::dtor$0 @ 0x1801D1ABE (_BamoImpl--BamoInputSiteManagerPrincipalImpl--RegisterInputSiteElement_--_1_--dtor$0.c)
 *     _BamoImpl::BamoInputSiteManagerPrincipalImpl::RegisterInputSiteElementWithHint_::_1_::dtor$0 @ 0x1801D1AD0 (_BamoImpl--BamoInputSiteManagerPrincipalImpl--RegisterInputSiteElementWithHint_--_1_--dtor$0.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180043610 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>(
        __int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( (*(_BYTE *)(a1 + 16) & 2) != 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 - 16) + 48LL))(v2 - 16);
      if ( v3 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x87,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v3,
          v5);
    }
  }
  if ( *(_QWORD *)a1 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)a1);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
}
