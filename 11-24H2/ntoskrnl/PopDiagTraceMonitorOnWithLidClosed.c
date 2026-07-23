/*
 * XREFs of PopDiagTraceMonitorOnWithLidClosed @ 0x140A3ACF8
 * Callers:
 *     PopPowerAggregatorHandleActiveIntent @ 0x140A3ABE0 (PopPowerAggregatorHandleActiveIntent.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void PopDiagTraceMonitorOnWithLidClosed()
{
  bool v0; // bl
  char v1; // r8
  int v2; // r9d
  char v3; // r10
  char v4; // r11
  char v5; // [rsp+30h] [rbp-49h] BYREF
  char v6; // [rsp+31h] [rbp-48h] BYREF
  bool v7; // [rsp+32h] [rbp-47h] BYREF
  char v8; // [rsp+33h] [rbp-46h] BYREF
  int v9; // [rsp+34h] [rbp-45h] BYREF
  __int64 v10; // [rsp+38h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-39h] BYREF
  char *v12; // [rsp+60h] [rbp-19h]
  int v13; // [rsp+68h] [rbp-11h]
  int v14; // [rsp+6Ch] [rbp-Dh]
  char *v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  int *v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+8Ch] [rbp+13h]
  bool *v21; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+98h] [rbp+1Fh]
  int v23; // [rsp+9Ch] [rbp+23h]
  char *v24; // [rsp+A0h] [rbp+27h]
  int v25; // [rsp+A8h] [rbp+2Fh]
  int v26; // [rsp+ACh] [rbp+33h]
  __int64 *v27; // [rsp+B0h] [rbp+37h]
  int v28; // [rsp+B8h] [rbp+3Fh]
  int v29; // [rsp+BCh] [rbp+43h]

  v0 = dword_140F0B38C == 0;
  if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v12 = &v5;
    v15 = &v6;
    v18 = &v9;
    v21 = &v7;
    v24 = &v8;
    v10 = PopWnfCsEnterScenarioId;
    v27 = &v10;
    v13 = 1;
    v16 = 1;
    v9 = v2;
    v22 = 1;
    v8 = v1;
    v25 = 1;
    v28 = 8;
    v5 = v3;
    v6 = v4;
    v19 = 4;
    v7 = v0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)&word_140049836, 0LL, 0LL, 8u, &v11);
  }
}
