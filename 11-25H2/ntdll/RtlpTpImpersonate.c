/*
 * XREFs of RtlpTpImpersonate @ 0x18003DE10
 * Callers:
 *     RtlpTpWorkCallback @ 0x18003D6C0 (RtlpTpWorkCallback.c)
 *     RtlpTpTimerCallback @ 0x18003E090 (RtlpTpTimerCallback.c)
 *     RtlpTpWaitCallback @ 0x180041F40 (RtlpTpWaitCallback.c)
 * Callees:
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlpTpImpersonate(__int64 a1)
{
  unsigned int v1; // ebx
  NTSTATUS v2; // eax
  __int64 ThreadInformation; // [rsp+20h] [rbp-C8h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF

  ThreadInformation = a1;
  v1 = 0;
  memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
  while ( 1 )
  {
    v2 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    ++v1;
    if ( v2 >= 0 )
      break;
    if ( v1 >= 2 )
    {
      ExceptionRecord.ExceptionCode = v2;
      RtlRaiseException(&ExceptionRecord);
      return;
    }
  }
}
