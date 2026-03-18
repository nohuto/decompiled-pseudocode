/*
 * XREFs of ?ShouldEscapeProximity@@YAEXZ @ 0x1401AE51C
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@554@Z @ 0x1400032F0 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U2@@-$.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall ShouldEscapeProximity(__int64 a1)
{
  char v1; // si
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 UserSessionState; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v12; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-8h] BYREF
  char v14; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int64 v15; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v16; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v17; // [rsp+A8h] [rbp+48h] BYREF

  v1 = 0;
  v2 = -1LL;
  v3 = MEMORY[0xFFFFF78000000008];
  UserSessionState = W32GetUserSessionState(a1);
  ++*(_DWORD *)(UserSessionState + 592);
  if ( *(_QWORD *)(W32GetUserSessionState(v5) + 576) != -1LL )
  {
    if ( v3 <= *(_QWORD *)(W32GetUserSessionState(v6) + 576) )
    {
      LODWORD(v15) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 844);
    }
    v2 = v3 - *(_QWORD *)(W32GetUserSessionState(v7) + 576);
    if ( v2 < 0x1C9C380 )
    {
      v1 = 1;
      v8 = W32GetUserSessionState(v6);
      ++*(_DWORD *)(v8 + 588);
    }
  }
  if ( (unsigned int)dword_14029ADF8 > 5 && tlgKeywordOn((__int64)&dword_14029ADF8, 0x400000000000LL) )
  {
    v15 = v3;
    v16 = *(_DWORD *)(W32GetUserSessionState(v6) + 588);
    v17 = *(_DWORD *)(W32GetUserSessionState(v16) + 584);
    v12 = *(_DWORD *)(W32GetUserSessionState(v17) + 592);
    v13 = v2;
    v14 = v1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v12,
      (__int64)&unk_140275285,
      v9,
      v10,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15);
  }
  *(_QWORD *)(W32GetUserSessionState(v6) + 576) = v3;
  return v1;
}
