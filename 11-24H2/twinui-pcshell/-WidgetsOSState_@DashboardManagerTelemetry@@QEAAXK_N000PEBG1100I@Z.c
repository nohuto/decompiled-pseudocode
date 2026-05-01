/*
 * XREFs of ?WidgetsOSState_@DashboardManagerTelemetry@@QEAAXK_N000PEBG1100I@Z @ 0x1805DA818
 * Callers:
 *     ??$WidgetsOSState@AEAKAEA_NAEAK_NAEA_NPEBGPEBGAEAPEBG_N_NI@DashboardManagerTelemetry@@SAXAEAKAEA_N0$$QEA_N1$$QEAPEBG3AEAPEBG22$$QEAI@Z @ 0x1805C3620 (--$WidgetsOSState@AEAKAEA_NAEAK_NAEA_NPEBGPEBGAEAPEBG_N_NI@DashboardManagerTelemetry@@SAXAEAKAEA.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U?$_tlgWrapSz@G@@U3@U3@U2@U2@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@444AEBU?$_tlgWrapSz@G@@55443AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18001005C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@U2@U2@U-$_tlgWrapSz@G@@U3@U3@U2@U2.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ?Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180191A90 (-Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall DashboardManagerTelemetry::WidgetsOSState_(
        DashboardManagerTelemetry *this,
        int a2,
        char a3,
        char a4,
        bool a5,
        bool a6,
        const unsigned __int16 *a7,
        const unsigned __int16 *a8,
        const unsigned __int16 *a9,
        bool a10,
        bool a11,
        unsigned int a12)
{
  const struct _tlgProvider_t *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r10
  bool v19; // [rsp+89h] [rbp-18h] BYREF
  bool v20; // [rsp+8Ah] [rbp-17h] BYREF
  char v21; // [rsp+8Bh] [rbp-16h] BYREF
  _BYTE v22[4]; // [rsp+8Ch] [rbp-15h] BYREF
  unsigned int v23; // [rsp+90h] [rbp-11h]
  int v24; // [rsp+94h] [rbp-Dh] BYREF
  __int64 v25; // [rsp+98h] [rbp-9h]
  const unsigned __int16 *v26; // [rsp+A0h] [rbp-1h] BYREF
  const unsigned __int16 *v27; // [rsp+A8h] [rbp+7h] BYREF
  const unsigned __int16 *v28; // [rsp+B0h] [rbp+Fh] BYREF

  v15 = DashboardManagerTelemetry::Provider((__int64)this);
  if ( *(_DWORD *)v15 > 5u )
  {
    if ( tlgKeywordOn((__int64)v15, 0x800000000000LL) )
    {
      v26 = a9;
      v27 = a8;
      v28 = a7;
      v19 = a6;
      v20 = a5;
      v23 = a12;
      v25 = 0x1000000LL;
      v21 = a4;
      v22[0] = a3;
      v24 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v18,
        (__int64)&unk_180817278,
        v16,
        v17,
        (__int64)&v24,
        (__int64)v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        &v28,
        &v27,
        &v26);
    }
  }
}
