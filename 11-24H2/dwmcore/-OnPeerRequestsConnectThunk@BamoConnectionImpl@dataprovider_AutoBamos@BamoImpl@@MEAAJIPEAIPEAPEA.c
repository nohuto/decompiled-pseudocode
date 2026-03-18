/*
 * XREFs of ?OnPeerRequestsConnectThunk@BamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@MEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x1801A9700
 * Callers:
 *     <none>
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801A7D8C (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801A7E04 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A8C44 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::OnPeerRequestsConnectThunk(
        BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl *this,
        unsigned int a2,
        unsigned int *a3,
        struct MsgString **a4)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v4; // rbx
  __int64 v7; // rdi
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 v11; // r8
  const char *v12; // r9
  __int64 v14; // [rsp+38h] [rbp-20h] BYREF
  int v15; // [rsp+40h] [rbp-18h]

  v14 = 0LL;
  v4 = 0LL;
  v15 = 0;
  v7 = *((_QWORD *)this + 2);
  if ( !*((_DWORD *)this + 47) )
  {
    v4 = this;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(this);
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, struct MsgString **))(*(_QWORD *)v7 + 88LL))(
          v7,
          a2,
          a3,
          a4);
  if ( v4 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v4);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(
    &v14,
    v9,
    v11,
    v12);
  return v10;
}
