/*
 * XREFs of ?Materialize_BamoDataSourceProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180279520
 * Callers:
 *     ?Thunk_Materialize_BamoDataSourceProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18027A7C0 (-Thunk_Materialize_BamoDataSourceProxy_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImp.c)
 * Callees:
 *     ??4?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScribble@@@Z @ 0x1800FCF9C (--4-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScrib.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801CF6D4 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1801CF974 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateDataSourceProxy@@YAJPEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoDataSourceProxy@@@Z @ 0x180288118 (-CreateDataSourceProxy@@YAJPEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoDataSourceProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::Materialize_BamoDataSourceProxy(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this,
        unsigned int a2)
{
  struct dataprovider_AutoBamos::BamoPeer *v4; // rcx
  int v5; // eax
  const char *v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-38h]
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct BamoDataSourceProxy *v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v12,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL));
  v5 = CreateDataSourceProxy(v4, &v14);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x26E5,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v5,
      v11);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v12);
  if ( !v14 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x26EA,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      v6);
  v7 = (*(__int64 (__fastcall **)(struct BamoDataSourceProxy *))(*(_QWORD *)v14 + 56LL))(v14);
  wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>::operator=(
    (__int64 *)(v7 + 16),
    (void (__fastcall ***)(_QWORD))this);
  *(_DWORD *)(v7 + 24) = a2;
  v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 64LL);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v8 + 40LL))(
         v8,
         *((unsigned int *)this + 9),
         a2,
         v7);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3C25,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v9,
      v11);
  return 0LL;
}
