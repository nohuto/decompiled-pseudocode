/*
 * XREFs of ??$Start@AEBW4SnapRegion@@AEA_NAEAK@OnSnappingCancelled@CSnapComponentTelemetry@@SA?AV01@AEBW4SnapRegion@@AEA_NAEAK@Z @ 0x1802A0FF4
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180270510 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 * Callees:
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18011F8B8 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?StartActivity@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAXW4SnapRegion@@_NK@Z @ 0x1802A105C (-StartActivity@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAXW4SnapRegion@@_NK@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct wil::details::IFailureCallback *__fastcall CSnapComponentTelemetry::OnSnappingCancelled::Start<enum SnapRegion const &,bool &,unsigned long &>(
        struct wil::details::IFailureCallback *a1,
        unsigned int *a2,
        _BYTE *a3,
        unsigned int *a4)
{
  __int64 v8; // r8

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1,
    (__int64)"OnSnappingCancelled");
  *(_QWORD *)a1 = &CSnapComponentTelemetry::OnSnappingCancelled::`vftable';
  LOBYTE(v8) = *a3;
  CSnapComponentTelemetry::OnSnappingCancelled::StartActivity(a1, *a2, v8, *a4);
  return a1;
}
