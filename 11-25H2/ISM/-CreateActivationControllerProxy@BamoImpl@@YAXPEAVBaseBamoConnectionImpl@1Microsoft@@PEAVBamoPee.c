/*
 * XREFs of ?CreateActivationControllerProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18002E754
 * Callers:
 *     ?Materialize_BamoActivationControllerProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18002E6AC (-Materialize_BamoActivationControllerProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180046AC0 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180046AF0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180046B80 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BamoImpl::CreateActivationControllerProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rdi
  _QWORD *v6; // rbx
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
  v6 = operator new(0x50uLL);
  memset_0(v6, 0, 0x50uLL);
  *((_DWORD *)v6 + 6) = 0;
  v6[4] = 0LL;
  v6[5] = 0LL;
  v6[2] = &BamoImpl::BamoActivationControllerProxyImpl::`vftable';
  *((_BYTE *)v6 + 48) = 0;
  v6[7] = 0LL;
  v6[8] = 0LL;
  v6[9] = 0LL;
  *v6 = &ActivationControllerBamoProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v6[1] = &ActivationControllerBamoProxy::`vftable'{for `IActivationControllerProxy'};
  if ( v5 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v5);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(&v7);
  *(_QWORD *)a3 = v6;
}
