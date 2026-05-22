/*
 * XREFs of ?OnPeerRequestsConnectThunk@BamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@MEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x18007CC60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180046AC0 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180046AF0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180046B80 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::OnPeerRequestsConnectThunk(
        BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl *this,
        unsigned int a2,
        unsigned int *a3,
        struct MsgString **a4)
{
  __int64 v7; // rdi
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v8; // rbx
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 v11; // r8
  const char *v12; // r9
  __int64 v14; // [rsp+38h] [rbp-20h] BYREF
  int v15; // [rsp+40h] [rbp-18h]

  v7 = *((_QWORD *)this + 2);
  v14 = 0LL;
  v15 = 0;
  v8 = 0LL;
  if ( !*((_DWORD *)this + 47) )
  {
    v8 = this;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(this);
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, struct MsgString **))(*(_QWORD *)v7 + 88LL))(
          v7,
          a2,
          a3,
          a4);
  if ( v8 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v8);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(
    &v14,
    v9,
    v11,
    v12);
  return v10;
}
