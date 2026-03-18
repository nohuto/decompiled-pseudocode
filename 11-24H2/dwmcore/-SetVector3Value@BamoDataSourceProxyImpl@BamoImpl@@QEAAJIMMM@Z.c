/*
 * XREFs of ?SetVector3Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMM@Z @ 0x1801A95FC
 * Callers:
 *     ?Thunk_SetVector3Value_30@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18027E080 (-Thunk_SetVector3Value_30@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEA.c)
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801A7D8C (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801A7E04 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A8C44 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801A96C4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceProxyImpl::SetVector3Value(
        BamoImpl::BamoDataSourceProxyImpl *this,
        unsigned int a2,
        float a3,
        float a4)
{
  __int64 v4; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rbx
  __int64 v8; // r8
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // esi
  __int64 v12; // r8
  const char *v13; // r9
  __int64 v15; // [rsp+38h] [rbp-40h] BYREF
  int v16; // [rsp+40h] [rbp-38h]

  v4 = *((_QWORD *)this + 2);
  v5 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v8 = *(_QWORD *)(v4 + 24);
  v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v8 + 32);
  if ( !*((_DWORD *)v9 + 47) )
  {
    v5 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v8 + 32);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v9);
  }
  v11 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 144LL))((char *)this - 16, a2);
  if ( v5 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v5);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(
    &v15,
    v10,
    v12,
    v13);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this);
  return v11;
}
