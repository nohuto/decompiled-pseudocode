/*
 * XREFs of ?CreateList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@YAXPEAVBaseBamoConnectionImpl@25@PEAVBamoPeer@1@PEAPEAVBamoProxy@45@@Z @ 0x180115E98
 * Callers:
 *     ?Materialize_Microsoft_Bamo_Lib_ISMBamos_AutoBamos_BamoList_DisplayOcclusionRect_Proxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18011F150 (-Materialize_Microsoft_Bamo_Lib_ISMBamos_AutoBamos_BamoList_DisplayOcclusionRect_Proxy@BamoPeerI.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x18004257C (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800429EC (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateProxy_List@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAV?$ListProxy@UDisplayOcclusionRect@@@2Lib@Bamo@Microsoft@@@Z @ 0x18013A02C (-CreateProxy_List@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAV-$ListProxy@UDisplayOcclusionRect@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::CreateList_DisplayOcclusionRect_Proxy(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ebx
  const char *v9; // r9
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  *(_QWORD *)a3 = 0LL;
  v5 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v10,
    this);
  v12 = 0LL;
  v7 = CreateProxy_List(v6, &v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v5 = v12;
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7805,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7);
  }
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6521,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v10[0]);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v10);
  *(_QWORD *)a3 = v5;
  if ( !v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x6526,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      v9);
}
