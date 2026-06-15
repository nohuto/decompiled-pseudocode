/*
 * XREFs of ?OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800AEA70
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001D3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x1800AE9BC (-OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ.c)
 */

void __fastcall CAudioDGProcess::OnADGProcessTerminatedHandler(
        struct _TP_CALLBACK_INSTANCE *a1,
        CAudioDGProcess *a2,
        struct _TP_WAIT *a3,
        int a4)
{
  _DWORD *v6; // rcx
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  int v11; // [rsp+58h] [rbp+20h] BYREF

  v6 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v6 > 2u && tlgKeywordOn((__int64)v6, 0x400000000080LL) )
  {
    v11 = *((_DWORD *)a2 + 24);
    v10 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v7,
      (int)&unk_18019DB51,
      v8,
      v9,
      (__int64)&v10,
      (__int64)&v11);
  }
  if ( !a4 )
    CAudioDGProcess::OnADGProcessTerminated(a2);
}
