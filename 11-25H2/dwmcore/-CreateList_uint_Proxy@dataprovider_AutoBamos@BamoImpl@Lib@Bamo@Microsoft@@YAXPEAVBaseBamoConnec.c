/*
 * XREFs of ?CreateList_uint_Proxy@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@YAXPEAVBaseBamoConnectionImpl@25@PEAVBamoPeer@1@PEAPEAVBamoProxy@45@@Z @ 0x18027889C
 * Callers:
 *     ?Materialize_Microsoft_Bamo_Lib_dataprovider_AutoBamos_BamoList_uint_Proxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180279614 (-Materialize_Microsoft_Bamo_Lib_dataprovider_AutoBamos_BamoList_uint_Proxy@BamoPeerImpl@dataprov.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801CF6D4 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1801CF974 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateProxy_List@@YAJPEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAV?$ListProxy@I@2Lib@Bamo@Microsoft@@@Z @ 0x1802881CC (-CreateProxy_List@@YAJPEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAV-$ListProxy@I@2Lib@Bamo@Micros.c)
 */

void __fastcall Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::CreateList_uint_Proxy(
        Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct dataprovider_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v8; // rbx
  const char *v9; // r9
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v10,
    this);
  v12 = 0LL;
  v6 = CreateProxy_List(v5, &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BEE,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v6);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2706,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)v7,
      v10[0]);
  }
  v8 = v12;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v10);
  *(_QWORD *)a3 = v8;
  if ( !v8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x270B,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      v9);
}
