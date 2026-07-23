/*
 * XREFs of UcpLogUnexpectedCodePathEvent @ 0x140695C10
 * Callers:
 *     UcInitialize @ 0x140695608 (UcInitialize.c)
 *     UcpLogEventGenerateDump @ 0x140695B7C (UcpLogEventGenerateDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void UcpLogUnexpectedCodePathEvent()
{
  unsigned int *v0; // r8
  int v1; // r9d
  __int64 v2; // r10
  unsigned __int8 CurrentIrql; // al
  unsigned int v4; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v5; // [rsp+34h] [rbp-45h] BYREF
  int v6; // [rsp+38h] [rbp-41h] BYREF
  int v7; // [rsp+3Ch] [rbp-3Dh] BYREF
  __int64 v8; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v10; // [rsp+70h] [rbp-9h]
  __int64 v11; // [rsp+78h] [rbp-1h]
  unsigned int *v12; // [rsp+80h] [rbp+7h]
  __int64 v13; // [rsp+88h] [rbp+Fh]
  unsigned int *v14; // [rsp+90h] [rbp+17h]
  __int64 v15; // [rsp+98h] [rbp+1Fh]
  int *v16; // [rsp+A0h] [rbp+27h]
  __int64 v17; // [rsp+A8h] [rbp+2Fh]
  int *v18; // [rsp+B0h] [rbp+37h]
  __int64 v19; // [rsp+B8h] [rbp+3Fh]

  if ( (unsigned int)dword_140E0A090 > 4 && tlgKeywordOn((__int64)&dword_140E0A090, 0x400000000000LL) )
  {
    v8 = *v0;
    v10 = &v8;
    v4 = v0[1];
    v12 = &v4;
    v5 = v0[2];
    v14 = &v5;
    v16 = &v6;
    v11 = 8LL;
    v13 = v2;
    v15 = v2;
    v6 = v1;
    v17 = v2;
    CurrentIrql = KeGetCurrentIrql();
    v7 = CurrentIrql;
    v18 = &v7;
    v19 = v2;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E0A090, (unsigned __int8 *)word_1400595EA, 0LL, 0LL, 7u, &v9);
  }
}
