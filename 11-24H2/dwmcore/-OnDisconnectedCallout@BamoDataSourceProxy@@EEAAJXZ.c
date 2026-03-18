/*
 * XREFs of ?OnDisconnectedCallout@BamoDataSourceProxy@@EEAAJXZ @ 0x18024EB20
 * Callers:
 *     <none>
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801A7D8C (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801A7E04 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A8C44 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoDataSourceProxy::OnDisconnectedCallout(BamoDataSourceProxy *this)
{
  __int64 v1; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v2; // rbx
  __int64 v4; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // r8
  const char *v9; // r9
  __int64 v11; // [rsp+28h] [rbp-20h] BYREF
  int v12; // [rsp+30h] [rbp-18h]

  v1 = *((_QWORD *)this + 4);
  v2 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v4 = *(_QWORD *)(v1 + 24);
  v5 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v4 + 32);
  if ( !*((_DWORD *)v5 + 47) )
  {
    v2 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v4 + 32);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v5);
  }
  v7 = (*(__int64 (__fastcall **)(BamoDataSourceProxy *))(*(_QWORD *)this + 40LL))(this);
  if ( v2 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v2);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(
    &v11,
    v6,
    v8,
    v9);
  return v7;
}
