/*
 * XREFs of ?SetVector3Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMM@Z @ 0x1801CEED4
 * Callers:
 *     ?Thunk_SetVector3Value_30@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180289180 (-Thunk_SetVector3Value_30@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEA.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801CEEA0 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801CF944 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801D0CFC (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801D0D74 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v14; // [rsp+38h] [rbp-40h] BYREF
  int v15; // [rsp+40h] [rbp-38h]

  v4 = *((_QWORD *)this + 2);
  v5 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v8 = *(_QWORD *)(v4 + 24);
  v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v8 + 32);
  if ( !*((_DWORD *)v9 + 47) )
  {
    v5 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v8 + 32);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v9);
  }
  v10 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 144LL))((char *)this - 16, a2);
  if ( v5 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v5);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(&v14);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v11, v12);
  return v10;
}
