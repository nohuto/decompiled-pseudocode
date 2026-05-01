/*
 * XREFs of ??$CannotSwitchToAppFlyout@AEA_NAEA_NAEAI@MeetAndChatTelemetry@@SAXAEA_N0AEAI@Z @ 0x1805F12DC
 * Callers:
 *     ?SwitchToApplicationFlyoutIfNeeded@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805F6E34 (-SwitchToApplicationFlyoutIfNeeded@MeetAndChatManager@implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800CC51C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@MeetAndChatTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1802B2C54 (-Provider@MeetAndChatTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

int __fastcall MeetAndChatTelemetry::CannotSwitchToAppFlyout<bool &,bool &,unsigned int &>(char *a1, char *a2, int *a3)
{
  const struct _tlgProvider_t *v6; // rax
  char v7; // dl
  int v8; // r8d
  char v10; // [rsp+38h] [rbp-19h] BYREF
  char v11; // [rsp+39h] [rbp-18h] BYREF
  int v12; // [rsp+3Ch] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-9h] BYREF
  char *v14; // [rsp+68h] [rbp+17h]
  __int64 v15; // [rsp+70h] [rbp+1Fh]
  char *v16; // [rsp+78h] [rbp+27h]
  __int64 v17; // [rsp+80h] [rbp+2Fh]
  int *v18; // [rsp+88h] [rbp+37h]
  __int64 v19; // [rsp+90h] [rbp+3Fh]

  v6 = MeetAndChatTelemetryLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v6 > 5u )
  {
    v7 = *a2;
    v8 = *a3;
    v11 = *a1;
    v18 = &v12;
    v16 = &v10;
    v14 = &v11;
    v12 = v8;
    v10 = v7;
    v19 = 4LL;
    v17 = 1LL;
    v15 = 1LL;
    LODWORD(v6) = tlgWriteTransfer_EventWriteTransfer((__int64)v6, byte_1808191A8, 0LL, 0LL, 5u, &v13);
  }
  return (int)v6;
}
