/*
 * XREFs of ?OnPeerConnectedThunk@BamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@PEA_NPEAPEAVBamoPrincipal@Bamo@5@@Z @ 0x1801CF8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801CF944 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801D0CFC (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801D0D74 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::OnPeerConnectedThunk(
        BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        bool *a3,
        struct Microsoft::Bamo::BamoPrincipal **a4)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v4; // rbx
  __int64 v7; // rdi
  __int64 v8; // r14
  unsigned int v9; // edi
  __int64 v11; // [rsp+38h] [rbp-20h] BYREF
  int v12; // [rsp+40h] [rbp-18h]

  v11 = 0LL;
  v4 = 0LL;
  v12 = 0;
  v7 = *((_QWORD *)this + 2);
  v8 = *((_QWORD *)a2 + 2);
  if ( !*((_DWORD *)this + 47) )
  {
    v4 = this;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(this);
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, bool *, struct Microsoft::Bamo::BamoPrincipal **))(*(_QWORD *)v7 + 96LL))(
         v7,
         v8,
         a3,
         a4);
  if ( v4 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v4);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(&v11);
  return v9;
}
