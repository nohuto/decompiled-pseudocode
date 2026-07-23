/*
 * XREFs of PopDiagTraceAdaptiveOverrideTriggered @ 0x140753818
 * Callers:
 *     PopAdaptiveConsoleSessionOverrideTrigger @ 0x14075E1DC (PopAdaptiveConsoleSessionOverrideTrigger.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void PopDiagTraceAdaptiveOverrideTriggered()
{
  int v0; // r8d
  int v1; // r9d
  int v2; // r10d
  __int64 v3; // r11
  int v4; // [rsp+30h] [rbp-69h] BYREF
  int v5; // [rsp+34h] [rbp-65h] BYREF
  int v6; // [rsp+38h] [rbp-61h] BYREF
  __int64 v7; // [rsp+40h] [rbp-59h] BYREF
  __int64 v8; // [rsp+48h] [rbp-51h] BYREF
  __int64 v9; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp-39h] BYREF
  __int64 *v11; // [rsp+80h] [rbp-19h]
  int v12; // [rsp+88h] [rbp-11h]
  int v13; // [rsp+8Ch] [rbp-Dh]
  __int64 *v14; // [rsp+90h] [rbp-9h]
  int v15; // [rsp+98h] [rbp-1h]
  int v16; // [rsp+9Ch] [rbp+3h]
  int *v17; // [rsp+A0h] [rbp+7h]
  int v18; // [rsp+A8h] [rbp+Fh]
  int v19; // [rsp+ACh] [rbp+13h]
  int *v20; // [rsp+B0h] [rbp+17h]
  int v21; // [rsp+B8h] [rbp+1Fh]
  int v22; // [rsp+BCh] [rbp+23h]
  int *v23; // [rsp+C0h] [rbp+27h]
  int v24; // [rsp+C8h] [rbp+2Fh]
  int v25; // [rsp+CCh] [rbp+33h]
  __int64 *v26; // [rsp+D0h] [rbp+37h]
  int v27; // [rsp+D8h] [rbp+3Fh]
  int v28; // [rsp+DCh] [rbp+43h]

  if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
  {
    v13 = 0;
    v11 = &v7;
    v7 = v3;
    v12 = 8;
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v5 = v0;
    v14 = &v8;
    v8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    v17 = &v4;
    v18 = 4;
    v20 = &v5;
    v21 = 4;
    v23 = &v6;
    v26 = &v9;
    v6 = v1;
    v24 = 4;
    v15 = 8;
    v4 = v2;
    v9 = 0x1000000LL;
    v27 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)word_14004BBB2, 0LL, 0LL, 8u, &v10);
  }
}
