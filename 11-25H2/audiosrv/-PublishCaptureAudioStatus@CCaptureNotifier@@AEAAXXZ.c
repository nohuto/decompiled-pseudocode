/*
 * XREFs of ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x1800753A4
 * Callers:
 *     ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z @ 0x1800751D4 (-UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z.c)
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x1800CBEA4 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CCaptureNotifier@@QEAA@XZ @ 0x1801038AC (--1CCaptureNotifier@@QEAA@XZ.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?SerializeEventHeaderFromApplicationMap@CCaptureNotifier@@AEAAXPEAEK@Z @ 0x180075468 (-SerializeEventHeaderFromApplicationMap@CCaptureNotifier@@AEAAXPEAEK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180075D20 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE_ea_180075D20.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     _alloca_probe @ 0x18015E810 (_alloca_probe.c)
 */

void __fastcall CCaptureNotifier::PublishCaptureAudioStatus(CCaptureNotifier *this)
{
  unsigned int v2; // r8d
  int v3; // ebx
  _DWORD *v4; // rcx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  _DWORD v8[4]; // [rsp+30h] [rbp-1028h] BYREF
  unsigned __int8 v9[4096]; // [rsp+40h] [rbp-1018h] BYREF

  memset_0(v9, 0, sizeof(v9));
  CCaptureNotifier::SerializeEventHeaderFromApplicationMap(this, v9, v2);
  v3 = RtlPublishWnfStateData(WNF_AUDC_CAPTURE, 0LL, v9, 4096LL, 0LL);
  v4 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v4 > 4u && tlgKeywordOn((__int64)v4, 64LL) )
  {
    v8[0] = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v5,
      (unsigned int)&unk_1801A2825,
      v6,
      v7,
      (__int64)v8);
  }
}
