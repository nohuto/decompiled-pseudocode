/*
 * XREFs of CrmLogSrvActivityWindowClosedReasonUnsubscribeStart @ 0x180069698
 * Callers:
 *     CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x1800695C8 (CrmSrvActivityWindowClosedReasonUnsubscribe.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180055770 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void CrmLogSrvActivityWindowClosedReasonUnsubscribeStart()
{
  __int64 v0; // rcx
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+30h] [rbp-48h] BYREF
  UUID *v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1800E82E8 > 5 && tlgKeywordOn((__int64)&dword_1800E82E8, 1LL) )
  {
    v4 = 0;
    v2 = &Uuid;
    v3 = 16;
    tlgWriteTransfer_EventWriteTransfer(v0, byte_1800D29EA, 0LL, 0LL, 3u, &v1);
  }
}
