/*
 * XREFs of ?LogDisplayTelemetryAdapterInfo@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEAVDISPLAYDIAGNOSTICADAPTERDATA@@@Z @ 0x1401C1374
 * Callers:
 *     ?LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1401C14F0 (-LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4Dxg.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400401E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

void __fastcall DISPLAYSTATECHECKER::LogDisplayTelemetryAdapterInfo(
        DISPLAYSTATECHECKER *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        struct DISPLAYDIAGNOSTICADAPTERDATA *a3)
{
  __int64 v3; // r9
  const GUID *v4; // r10
  __int64 v5; // rax
  int v6; // [rsp+50h] [rbp-49h] BYREF
  int v7; // [rsp+54h] [rbp-45h] BYREF
  __int64 v8; // [rsp+58h] [rbp-41h] BYREF
  __int64 v9; // [rsp+60h] [rbp-39h] BYREF
  __int64 v10; // [rsp+68h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+70h] [rbp-29h] BYREF
  __int64 *v12; // [rsp+90h] [rbp-9h]
  int v13; // [rsp+98h] [rbp-1h]
  int v14; // [rsp+9Ch] [rbp+3h]
  __int64 *v15; // [rsp+A0h] [rbp+7h]
  int v16; // [rsp+A8h] [rbp+Fh]
  int v17; // [rsp+ACh] [rbp+13h]
  int *v18; // [rsp+B0h] [rbp+17h]
  int v19; // [rsp+B8h] [rbp+1Fh]
  int v20; // [rsp+BCh] [rbp+23h]
  int *v21; // [rsp+C0h] [rbp+27h]
  int v22; // [rsp+C8h] [rbp+2Fh]
  int v23; // [rsp+CCh] [rbp+33h]
  __int64 *v24; // [rsp+D0h] [rbp+37h]
  int v25; // [rsp+D8h] [rbp+3Fh]
  int v26; // [rsp+DCh] [rbp+43h]

  if ( a3 && a2 )
  {
    if ( (unsigned int)dword_14015E650 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_14015E650, 0x400000000400LL) )
      {
        v5 = *(_QWORD *)(v3 + 3496);
        v26 = 0;
        v23 = 0;
        v20 = 0;
        v17 = 0;
        v14 = 0;
        v8 = v5;
        v6 = *(unsigned __int8 *)(v3 + 3488);
        v7 = *(unsigned __int8 *)(v3 + 3248);
        v9 = *(_QWORD *)(v3 + 8);
        v24 = &v8;
        v21 = &v6;
        v18 = &v7;
        v15 = &v9;
        v12 = &v10;
        v25 = 8;
        v22 = 4;
        v19 = 4;
        v16 = 8;
        v13 = 8;
        v10 = 33556480LL;
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14015E650, byte_14013C6EB, v4, 0LL, 7u, &v11);
      }
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 344;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"Invalid parameters not expected",
      344LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
