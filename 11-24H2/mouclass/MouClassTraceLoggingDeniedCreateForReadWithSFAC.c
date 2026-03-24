/*
 * XREFs of MouClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0005770
 * Callers:
 *     MouseClassCreate @ 0x1C00037F0 (MouseClassCreate.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0001008 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C000103C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0006AE0 (__security_check_cookie.c)
 */

void MouClassTraceLoggingDeniedCreateForReadWithSFAC()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C000B000 > 5 && tlgKeywordOn() )
  {
    v7 = 0;
    v5 = &v3;
    v3 = v0;
    v6 = 4;
    tlgWriteTransfer_EtwWriteTransfer(v0, (unsigned __int8 *)dword_1C00095F1, v1, v2, 3u, &v4);
  }
}
