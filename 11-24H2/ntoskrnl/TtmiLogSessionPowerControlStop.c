/*
 * XREFs of TtmiLogSessionPowerControlStop @ 0x14076E1E4
 * Callers:
 *     TtmpSessionPowerControl @ 0x14076AE8C (TtmpSessionPowerControl.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void TtmiLogSessionPowerControlStop()
{
  int SessionId; // eax
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_140FD88C8 > 5 && tlgKeywordOn((__int64)&dword_140FD88C8, 1LL) )
  {
    SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    v5 = 0;
    v1 = SessionId;
    v4 = 4;
    v3 = &v1;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD88C8, (unsigned __int8 *)&dword_1400517CC, 0LL, 0LL, 3u, &v2);
  }
}
