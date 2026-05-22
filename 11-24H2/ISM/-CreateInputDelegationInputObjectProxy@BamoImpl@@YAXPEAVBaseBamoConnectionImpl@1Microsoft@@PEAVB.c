/*
 * XREFs of ?CreateInputDelegationInputObjectProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18002E700
 * Callers:
 *     ?Materialize_BamoInputDelegationInputObjectProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18002E658 (-Materialize_BamoInputDelegationInputObjectProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJ.c)
 * Callees:
 *     ?CreateInputDelegationInputObjectProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputDelegationInputObjectProxy@@@Z @ 0x18002E7B8 (-CreateInputDelegationInputObjectProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputDele.c)
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180043550 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180043580 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180043610 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BamoImpl::CreateInputDelegationInputObjectProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rbx
  int v6; // eax
  const char *v7; // r9
  struct BamoInputDelegationInputObjectProxy *v8; // rax
  int v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  int v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct BamoInputDelegationInputObjectProxy *v13; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)a3 = 0LL;
  v13 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v5 = 0LL;
  v9 = 0;
  if ( !*((_DWORD *)this + 47) )
  {
    v5 = this;
    v9 = (int)this;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(this);
  }
  v6 = CreateInputDelegationInputObjectProxy(this, &v13);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x62A0,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v6,
      v9);
  if ( v5 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v5);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(&v10);
  v8 = v13;
  *(_QWORD *)a3 = v13;
  if ( !v8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x62A5,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      v7);
}
