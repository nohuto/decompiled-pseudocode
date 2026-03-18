/*
 * XREFs of ?SetBooleanValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI_N@Z @ 0x1801A97A0
 * Callers:
 *     ?Thunk_SetBooleanValue_17@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1802504E0 (-Thunk_SetBooleanValue_17@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEA.c)
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801A7D8C (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801A7E04 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A8C44 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801A96C4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceProxyImpl::SetBooleanValue(
        BamoImpl::BamoDataSourceProxyImpl *this,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v4; // rbx
  char v6; // si
  __int64 v8; // r9
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // esi
  __int64 v12; // r8
  const char *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v17; // [rsp+28h] [rbp-20h] BYREF
  int v18; // [rsp+30h] [rbp-18h]

  v3 = *((_QWORD *)this + 2);
  v4 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v6 = a3;
  v8 = *(_QWORD *)(v3 + 24);
  v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v8 + 32);
  if ( !*((_DWORD *)v9 + 47) )
  {
    v4 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v8 + 32);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v9);
  }
  LOBYTE(a3) = v6;
  v11 = (*(__int64 (__fastcall **)(char *, _QWORD, __int64))(*((_QWORD *)this - 2) + 120LL))((char *)this - 16, a2, a3);
  if ( v4 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v4);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(
    &v17,
    v10,
    v12,
    v13);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v14, v15);
  return v11;
}
