/*
 * XREFs of ??1?$CalloutWrapper@VBamoActivationListenerInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006FB0C
 * Callers:
 *     ?OnDisconnectedCallout@BamoActivationListenerInputObjectProxy@@EEAAJXZ @ 0x18006FA50 (-OnDisconnectedCallout@BamoActivationListenerInputObjectProxy@@EEAAJXZ.c)
 *     ?OnConnectedCallout@BamoActivationListenerInputObjectProxy@@EEAAJXZ @ 0x18006FAB0 (-OnConnectedCallout@BamoActivationListenerInputObjectProxy@@EEAAJXZ.c)
 *     ?UpdateHWND@BamoActivationListenerInputObjectProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x180098704 (-UpdateHWND@BamoActivationListenerInputObjectProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     ?OnPropertiesRefreshedCallout@BamoActivationListenerInputObjectProxy@@EEAAJXZ @ 0x180120CD0 (-OnPropertiesRefreshedCallout@BamoActivationListenerInputObjectProxy@@EEAAJXZ.c)
 *     _BamoImpl::BamoActivationListenerInputObjectProxyImpl::UpdateHWND_::_1_::dtor$1 @ 0x1801D304D (_BamoImpl--BamoActivationListenerInputObjectProxyImpl--UpdateHWND_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180043610 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationListenerInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoActivationListenerInputObjectProxyImpl>(
        __int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( (*(_BYTE *)(a1 + 16) & 2) != 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 - 16) + 96LL))(v2 - 16);
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
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
