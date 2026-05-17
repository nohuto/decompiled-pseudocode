/*
 * XREFs of RtlpTpImpersonate @ 0x18006F310
 * Callers:
 *     RtlpTpWaitCallback @ 0x180020530 (RtlpTpWaitCallback.c)
 *     RtlpTpTimerCallback @ 0x18006D350 (RtlpTpTimerCallback.c)
 *     RtlpTpWorkCallback @ 0x18006F790 (RtlpTpWorkCallback.c)
 * Callees:
 *     RtlRaiseException @ 0x180070510 (RtlRaiseException.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlpTpImpersonate(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  __int64 v3; // [rsp+20h] [rbp-C8h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF

  v3 = a1;
  v1 = 0;
  memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
  while ( 1 )
  {
    v2 = NtSetInformationThread(-2LL, 5LL, &v3);
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
