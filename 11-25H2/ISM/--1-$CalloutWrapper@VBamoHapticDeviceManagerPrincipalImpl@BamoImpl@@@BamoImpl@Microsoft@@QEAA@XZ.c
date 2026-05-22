/*
 * XREFs of ??1?$CalloutWrapper@VBamoHapticDeviceManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180185F1C
 * Callers:
 *     ?OnDisconnectedThunk@BamoHapticDeviceManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x180186F70 (-OnDisconnectedThunk@BamoHapticDeviceManagerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     ?OnPropertiesRefreshedThunk@BamoHapticDeviceManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x1801870C0 (-OnPropertiesRefreshedThunk@BamoHapticDeviceManagerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoHapticDeviceManagerStubImpl::OnPropertiesRefreshedThunk_::_1_::dtor$0 @ 0x1801D0F27 (_BamoImpl--BamoHapticDeviceManagerStubImpl--OnPropertiesRefreshedThunk_--_1_--dtor$0.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180046B80 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoHapticDeviceManagerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoHapticDeviceManagerPrincipalImpl>(
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
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 - 16) + 48LL))(v2 - 16);
      if ( v3 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x87,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v3,
          v5);
    }
  }
  if ( *(_QWORD *)a1 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)a1);
  return wil::com_ptr_t<BamoImpl::BamoHapticDeviceManagerPrincipalImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoHapticDeviceManagerPrincipalImpl,wil::err_returncode_policy>((__int64 *)(a1 + 8));
}
