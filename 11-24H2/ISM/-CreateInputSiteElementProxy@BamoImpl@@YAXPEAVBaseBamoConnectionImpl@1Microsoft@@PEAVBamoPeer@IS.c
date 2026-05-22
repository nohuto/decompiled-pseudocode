/*
 * XREFs of ?CreateInputSiteElementProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x180042174
 * Callers:
 *     ?Materialize_BamoInputSiteElementProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1800420A4 (-Materialize_BamoInputSiteElementProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ??0BamoInputSiteElementProxyImpl@BamoImpl@@QEAA@XZ @ 0x180041FA8 (--0BamoInputSiteElementProxyImpl@BamoImpl@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180043550 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180043580 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180043610 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BamoImpl::CreateInputSiteElementProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  int v8; // [rsp+30h] [rbp-18h]

  *(_QWORD *)a3 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v5 = 0LL;
  if ( !*((_DWORD *)this + 47) )
  {
    v5 = this;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(this);
  }
  v6 = operator new(0x158uLL);
  memset_0(v6, 0, 0x158uLL);
  BamoImpl::BamoInputSiteElementProxyImpl::BamoInputSiteElementProxyImpl((BamoImpl::BamoInputSiteElementProxyImpl *)(v6 + 2));
  *v6 = &InputSiteElementProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v6[1] = &InputSiteElementProxy::`vftable'{for `IInputSiteElementProxy'};
  v6[42] = 0LL;
  if ( v5 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v5);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(&v7);
  *(_QWORD *)a3 = v6;
}
