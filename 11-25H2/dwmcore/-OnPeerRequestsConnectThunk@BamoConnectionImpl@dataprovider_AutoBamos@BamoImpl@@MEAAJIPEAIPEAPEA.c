/*
 * XREFs of ?OnPeerRequestsConnectThunk@BamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@MEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x1801CEE00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801CF944 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801D0CFC (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801D0D74 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::OnPeerRequestsConnectThunk(
        BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl *this,
        unsigned int a2,
        unsigned int *a3,
        struct MsgString **a4)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v4; // rbx
  __int64 v7; // rdi
  unsigned int v9; // edi
  __int64 v11; // [rsp+38h] [rbp-20h] BYREF
  int v12; // [rsp+40h] [rbp-18h]

  v11 = 0LL;
  v4 = 0LL;
  v12 = 0;
  v7 = *((_QWORD *)this + 2);
  if ( !*((_DWORD *)this + 47) )
  {
    v4 = this;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(this);
  }
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, struct MsgString **))(*(_QWORD *)v7 + 88LL))(
         v7,
         a2,
         a3,
         a4);
  if ( v4 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v4);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(&v11);
  return v9;
}
