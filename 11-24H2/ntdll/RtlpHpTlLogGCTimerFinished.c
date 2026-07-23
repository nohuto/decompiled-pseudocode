/*
 * XREFs of RtlpHpTlLogGCTimerFinished @ 0x18014B0C0
 * Callers:
 *     RtlpHpGCTimerCallback @ 0x180140890 (RtlpHpGCTimerCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800676B4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

ULONG __fastcall RtlpHpTlLogGCTimerFinished(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG result; // eax
  _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1801CB670 > 5 )
    return tlgWriteTransfer_EtwEventWriteTransfer(
             (__int64)&dword_1801CB670,
             (unsigned __int8 *)dword_1801A1598,
             a3,
             a4,
             2u,
             &v5);
  return result;
}
