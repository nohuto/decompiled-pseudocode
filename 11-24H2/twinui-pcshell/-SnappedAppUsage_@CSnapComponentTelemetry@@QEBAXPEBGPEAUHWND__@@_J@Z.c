/*
 * XREFs of ?SnappedAppUsage_@CSnapComponentTelemetry@@QEBAXPEBGPEAUHWND__@@_J@Z @ 0x1805A963C
 * Callers:
 *     ?SendTelemetry@SnapInteraction@@YAXAEBU?$com_ptr@UIApplicationView@@@winrt@@AEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x1800CCB54 (-SendTelemetry@SnapInteraction@@YAXAEBU-$com_ptr@UIApplicationView@@@winrt@@AEBV-$duration@_JU-$.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18000F948 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTempl.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x1800B8E20 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 */

void __fastcall CSnapComponentTelemetry::SnappedAppUsage_(
        CSnapComponentTelemetry *this,
        const unsigned __int16 *a2,
        HWND a3)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // rbx
  const unsigned __int16 *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  const unsigned __int16 *v9; // [rsp+48h] [rbp-20h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h] BYREF

  v4 = WindowManagementLogging::Provider();
  v5 = (__int64)v4;
  if ( *(_DWORD *)v4 > 5u )
  {
    if ( tlgKeywordOn((__int64)v4, 0x400000000000LL) )
    {
      v9 = SQM::CensorAppID(a2, v6);
      v10 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v5,
        (__int64)&unk_18081504F,
        v7,
        v8,
        (__int64)&v10,
        &v9);
    }
  }
}
