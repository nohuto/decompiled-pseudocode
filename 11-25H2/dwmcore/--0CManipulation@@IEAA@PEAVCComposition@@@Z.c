/*
 * XREFs of ??0CManipulation@@IEAA@PEAVCComposition@@@Z @ 0x180214460
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180129660 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801EF650 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0ManipulationData@@QEAA@XZ @ 0x180214594 (--0ManipulationData@@QEAA@XZ.c)
 *     ??0ScrollingConfiguration@CManipulation@@QEAA@XZ @ 0x1802260A0 (--0ScrollingConfiguration@CManipulation@@QEAA@XZ.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

CManipulation *__fastcall CManipulation::CManipulation(CManipulation *this, struct CComposition *a2)
{
  CDirtyRegionAnnotation *v3; // rbx
  __int64 v4; // rsi
  CDirtyRegionAnnotation *v5; // rbx
  __int64 v6; // rsi
  CManipulation *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CManipulation::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CManipulation::`vftable'{for `IManipulationResource'};
  ManipulationData::ManipulationData((CManipulation *)((char *)this + 88));
  ManipulationData::ManipulationData((CManipulation *)((char *)this + 272));
  v3 = (CManipulation *)((char *)this + 468);
  v4 = 3LL;
  do
  {
    --v4;
    if ( (char *)CManipulation::ScrollingConfiguration::ScrollingConfiguration == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v3);
    else
      CManipulation::ScrollingConfiguration::ScrollingConfiguration(v3);
    v3 = (CDirtyRegionAnnotation *)((char *)v3 + 8);
  }
  while ( v4 );
  v5 = (CManipulation *)((char *)this + 496);
  v6 = 5LL;
  do
  {
    --v6;
    if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v5);
    else
      wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v5);
    v5 = (CDirtyRegionAnnotation *)((char *)v5 + 8);
  }
  while ( v6 );
  *((_QWORD *)this + 67) = 0LL;
  *((_OWORD *)this + 34) = 0LL;
  *((_OWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  memset_0((char *)this + 584, 0, 0x88uLL);
  *((_DWORD *)this + 180) = 0;
  result = this;
  *((_QWORD *)this + 91) = 0LL;
  return result;
}
