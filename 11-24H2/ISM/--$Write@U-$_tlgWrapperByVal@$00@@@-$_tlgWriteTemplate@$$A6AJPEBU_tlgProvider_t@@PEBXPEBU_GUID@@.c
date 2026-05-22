/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180002414
 * Callers:
 *     ?MPCHolographicInputManager_DisplayContextChanged_@ISMTracing@@QEAAXAEB_N@Z @ 0x1800BAA50 (-MPCHolographicInputManager_DisplayContextChanged_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?MPCHolographicInputManager_FocusedAppDisabled3DGamepad_@ISMTracing@@QEAAXAEB_N@Z @ 0x1800BAAB0 (-MPCHolographicInputManager_FocusedAppDisabled3DGamepad_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?MPCHolographicInputManager_FocusedAppDisabled3DMouse_@ISMTracing@@QEAAXAEB_N@Z @ 0x1800BAB08 (-MPCHolographicInputManager_FocusedAppDisabled3DMouse_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?MPCCursorManager_Update2DCursor_@ISMTracing@@QEAAXAEB_N@Z @ 0x1800BEE34 (-MPCCursorManager_Update2DCursor_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ??$CursorSuppressed@AEA_N@TestCursorTraceLogging@@SAXAEA_N@Z @ 0x1800F826C (--$CursorSuppressed@AEA_N@TestCursorTraceLogging@@SAXAEA_N@Z.c)
 *     ?IsInputContextOptedOut@ContextualProcessor@ShellHandwriting@InputTraceLogging@@SAX_N@Z @ 0x1801AEF74 (-IsInputContextOptedOut@ContextualProcessor@ShellHandwriting@InputTraceLogging@@SAX_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180011720 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _BYTE v6[32]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v9 = 0;
  v7 = a5;
  v8 = 1;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 3, v6);
}
