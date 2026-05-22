/*
 * XREFs of ?OnForegroundChange@WinKeyScenarioTelemetry@@SAX_K@Z @ 0x18010BAD0
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x180022E3C (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180011720 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ @ 0x180024E10 (-UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

void __fastcall WinKeyScenarioTelemetry::OnForegroundChange(__int64 a1)
{
  __int64 v2; // rcx
  DWORD LowPart; // [rsp+30h] [rbp-29h] BYREF
  __int64 v4; // [rsp+38h] [rbp-21h] BYREF
  __int64 v5; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v7; // [rsp+70h] [rbp+17h]
  __int64 v8; // [rsp+78h] [rbp+1Fh]
  __int64 *v9; // [rsp+80h] [rbp+27h]
  __int64 v10; // [rsp+88h] [rbp+2Fh]
  DWORD *p_LowPart; // [rsp+90h] [rbp+37h]
  __int64 v12; // [rsp+98h] [rbp+3Fh]

  if ( WinKeyScenarioTelemetry::UpdateWinKeyScenarioStatusAndLogLatency()
    && (unsigned int)dword_18024E2B8 > 5
    && tlgKeywordOn((__int64)&dword_18024E2B8, 0x400000000000LL) )
  {
    LowPart = WinKeyScenarioTelemetry::s_startTime.LowPart;
    v4 = a1;
    p_LowPart = &LowPart;
    v5 = 0x2000000LL;
    v9 = &v4;
    v7 = &v5;
    v12 = 4LL;
    v10 = 8LL;
    v8 = 8LL;
    tlgWriteTransfer_EventWriteTransfer(v2, byte_1802152FD, 0LL, 0LL, 5u, &v6);
  }
}
