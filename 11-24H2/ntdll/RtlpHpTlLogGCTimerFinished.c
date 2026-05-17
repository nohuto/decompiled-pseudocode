/*
 * XREFs of RtlpHpTlLogGCTimerFinished @ 0x18014CCF8
 * Callers:
 *     RtlpHpGCTimerCallback @ 0x1801426E0 (RtlpHpGCTimerCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180051AD4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpTlLogGCTimerFinished(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _BYTE v5[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1801CC670 > 5 )
    return tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_1801CC670, byte_1801A2463, a3, a4, 2, (__int64)v5);
  return result;
}
