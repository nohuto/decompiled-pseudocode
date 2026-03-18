/*
 * XREFs of TtmiLogQueueDequeueEvent @ 0x14076D7B4
 * Callers:
 *     TtmiRetrieveEventFromQueue @ 0x140770A58 (TtmiRetrieveEventFromQueue.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void TtmiLogQueueDequeueEvent()
{
  _DWORD *v0; // r8
  __int64 v1; // r9
  int v2; // [rsp+30h] [rbp-29h] BYREF
  __int64 v3; // [rsp+38h] [rbp-21h] BYREF
  _DWORD *v4; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v6; // [rsp+70h] [rbp+17h]
  __int64 v7; // [rsp+78h] [rbp+1Fh]
  _QWORD *v8; // [rsp+80h] [rbp+27h]
  __int64 v9; // [rsp+88h] [rbp+2Fh]
  int *v10; // [rsp+90h] [rbp+37h]
  __int64 v11; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_140FD78B8 > 5 && tlgKeywordOn((__int64)&dword_140FD78B8, 1LL) )
  {
    v3 = v1;
    v6 = &v3;
    v4 = v0;
    v8 = &v4;
    v2 = *v0;
    v7 = 8LL;
    v10 = &v2;
    v9 = 8LL;
    v11 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD78B8, (unsigned __int8 *)word_140050A12, 0LL, 0LL, 5u, &v5);
  }
}
