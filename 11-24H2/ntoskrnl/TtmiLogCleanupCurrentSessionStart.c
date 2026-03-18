/*
 * XREFs of TtmiLogCleanupCurrentSessionStart @ 0x140AAD584
 * Callers:
 *     TtmCleanupCurrentSession @ 0x140AAD48C (TtmCleanupCurrentSession.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void TtmiLogCleanupCurrentSessionStart()
{
  int SessionId; // eax
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_140FD78B8 > 5 && tlgKeywordOn((__int64)&dword_140FD78B8, 1LL) )
  {
    SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    v5 = 0;
    v1 = SessionId;
    v4 = 4;
    v3 = &v1;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD78B8, (unsigned __int8 *)byte_14004FCDD, 0LL, 0LL, 3u, &v2);
  }
}
