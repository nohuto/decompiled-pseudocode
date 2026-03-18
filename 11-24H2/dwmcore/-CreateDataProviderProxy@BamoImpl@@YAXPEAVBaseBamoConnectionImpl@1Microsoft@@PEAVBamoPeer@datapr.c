/*
 * XREFs of ?CreateDataProviderProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18026E0D4
 * Callers:
 *     ?Materialize_BamoDataProviderProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18026ED68 (-Materialize_BamoDataProviderProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1801A89C4 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801A8E88 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0DataProviderProxy@@QEAA@XZ @ 0x1802485C8 (--0DataProviderProxy@@QEAA@XZ.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

void __fastcall BamoImpl::CreateDataProviderProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct dataprovider_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  DataProviderProxy *v5; // rax
  DataProviderProxy *v6; // rbx
  __int64 v7; // rdx
  DataProviderProxy *v8; // rbx
  __int64 v9; // r8
  const char *v10; // r9
  int v11[10]; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v11,
    this);
  v5 = (DataProviderProxy *)DefaultHeap::AllocClear(0xA8uLL);
  v6 = v5;
  if ( !v5 )
    ModuleFailFastForHRESULT(0x8007000E, retaddr);
  memset_0(v5, 0, 0xA8uLL);
  v8 = DataProviderProxy::DataProviderProxy(v6);
  if ( !v8 )
  {
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x1D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataproviderfactory.cpp",
      (const char *)0x8007000ELL);
    wil::details::in1diag3::FailFast_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x26B5,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x8007000ELL,
      v11[0]);
  }
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v11,
    v7,
    v9,
    v10);
  *(_QWORD *)a3 = v8;
}
