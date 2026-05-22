/*
 * XREFs of ?CreateWindowsMessageDeliveryProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18002EBAC
 * Callers:
 *     ?Materialize_BamoWindowsMessageDeliveryProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18002EB00 (-Materialize_BamoWindowsMessageDeliveryProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ??0WindowsMessageDeliveryProxy@@QEAA@PEAVBamoPeer@ISMBamos_AutoBamos@@@Z @ 0x18002EE58 (--0WindowsMessageDeliveryProxy@@QEAA@PEAVBamoPeer@ISMBamos_AutoBamos@@@Z.c)
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180046AC0 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180046AF0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180046B80 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall BamoImpl::CreateWindowsMessageDeliveryProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v6; // rbx
  WindowsMessageDeliveryProxy *v7; // rdi
  const char *v8; // r9
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  WindowsMessageDeliveryProxy *v12; // [rsp+60h] [rbp+18h]

  *(_QWORD *)a3 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v6 = 0LL;
  if ( !*((_DWORD *)this + 47) )
  {
    v6 = this;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(this);
  }
  v12 = (WindowsMessageDeliveryProxy *)operator new(0x48uLL);
  v7 = WindowsMessageDeliveryProxy::WindowsMessageDeliveryProxy(v12, a2);
  if ( v6 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v6);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(&v9);
  *(_QWORD *)a3 = v7;
  if ( !v7 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x7A78,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
      v8);
}
