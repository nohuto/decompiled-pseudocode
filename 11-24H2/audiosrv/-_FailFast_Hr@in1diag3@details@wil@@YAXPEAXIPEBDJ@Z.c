/*
 * XREFs of ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180123098
 * Callers:
 *     ?OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x18004DCF0 (-OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@.c)
 *     ?GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z @ 0x18009F010 (-GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z @ 0x18009F1B4 (-GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z.c)
 *     ?AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x180122CB4 (-AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z.c)
 *     ?Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z @ 0x180122D98 (-Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z.c)
 *     ?RemoveFromDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x180122FB0 (-RemoveFromDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z.c)
 *     ?Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x1801234F8 (-Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPA.c)
 *     ?IssueGrantToASAR@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x180123764 (-IssueGrantToASAR@CStreamResource@Sarm@@AEAAJI_J@Z.c)
 * Callees:
 *     ??$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1800A8280 (--$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_FailFast_Hr(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4,
        int a5)
{
  int v5; // [rsp+20h] [rbp-28h]
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v6) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<3>((__int64)this, a2, a3, (__int64)a4, v5, retaddr, v6);
}
