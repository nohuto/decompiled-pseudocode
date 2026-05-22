/*
 * XREFs of ??1?$CalloutWrapper@VBamoShellHandwritingHostServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180075BC8
 * Callers:
 *     ?OnDisconnectedThunk@BamoShellHandwritingHostServerStubImpl@BamoImpl@@UEAAJXZ @ 0x180075B50 (-OnDisconnectedThunk@BamoShellHandwritingHostServerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     ?OnPropertiesRefreshedThunk@BamoShellHandwritingHostServerStubImpl@BamoImpl@@UEAAJXZ @ 0x18015ACC0 (-OnPropertiesRefreshedThunk@BamoShellHandwritingHostServerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     ?RegisterShellHandwritingHostClient@BamoShellHandwritingHostServerPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18015AE70 (-RegisterShellHandwritingHostClient@BamoShellHandwritingHostServerPrincipalImpl@BamoImpl@@QEAAJI.c)
 *     _BamoImpl::BamoShellHandwritingHostServerPrincipalImpl::RegisterShellHandwritingHostClient_::_1_::dtor$0 @ 0x1801CBDB2 (_BamoImpl--BamoShellHandwritingHostServerPrincipalImpl--RegisterShellHandwritingHostClient_--_1_.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180046B80 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellHandwritingHostServerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoShellHandwritingHostServerPrincipalImpl>(
        __int64 a1)
{
  __int64 v2; // rcx
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( (*(_BYTE *)(a1 + 16) & 2) != 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 - 16) + 48LL))(v2 - 16);
      if ( v4 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x87,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v4,
          v5);
    }
  }
  if ( *(_QWORD *)a1 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)a1);
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
