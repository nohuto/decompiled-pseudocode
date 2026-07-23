/*
 * XREFs of PopDiagTraceAdaptiveOverrideClear @ 0x140753748
 * Callers:
 *     PopAdaptiveConsoleSessionOverrideClear @ 0x14075E15C (PopAdaptiveConsoleSessionOverrideClear.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void PopDiagTraceAdaptiveOverrideClear()
{
  int v0; // r8d
  int v1; // r9d
  int v2; // [rsp+30h] [rbp-19h] BYREF
  int v3; // [rsp+34h] [rbp-15h] BYREF
  __int64 v4; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-9h] BYREF
  int *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  int *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  __int64 *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
  {
    v2 = v1;
    v6 = &v2;
    v3 = v0;
    v8 = &v3;
    v7 = 4LL;
    v10 = &v4;
    v9 = 4LL;
    v4 = 0x1000000LL;
    v11 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)byte_14004BCA8, 0LL, 0LL, 5u, &v5);
  }
}
