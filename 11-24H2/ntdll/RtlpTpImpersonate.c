/*
 * XREFs of RtlpTpImpersonate @ 0x18008BBF0
 * Callers:
 *     RtlpTpWaitCallback @ 0x18004CF30 (RtlpTpWaitCallback.c)
 *     RtlpTpTimerCallback @ 0x180089C30 (RtlpTpTimerCallback.c)
 *     RtlpTpWorkCallback @ 0x18008C070 (RtlpTpWorkCallback.c)
 * Callees:
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
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
