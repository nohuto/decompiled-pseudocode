/*
 * XREFs of ?SetBooleanValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI_N@Z @ 0x1801CE8E0
 * Callers:
 *     ?Thunk_SetBooleanValue_17@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18025BB30 (-Thunk_SetBooleanValue_17@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEA.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801CEEA0 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801CF944 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801D0CFC (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801D0D74 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned int v10; // esi
  __int64 v12; // [rsp+28h] [rbp-20h] BYREF
  int v13; // [rsp+30h] [rbp-18h]

  v3 = *((_QWORD *)this + 2);
  v4 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v6 = a3;
  v8 = *(_QWORD *)(v3 + 24);
  v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v8 + 32);
  if ( !*((_DWORD *)v9 + 47) )
  {
    v4 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v8 + 32);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v9);
  }
  LOBYTE(a3) = v6;
  v10 = (*(__int64 (__fastcall **)(char *, _QWORD, __int64))(*((_QWORD *)this - 2) + 120LL))((char *)this - 16, a2, a3);
  if ( v4 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v4);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(&v12);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this);
  return v10;
}
