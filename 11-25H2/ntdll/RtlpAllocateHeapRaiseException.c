/*
 * XREFs of RtlpAllocateHeapRaiseException @ 0x1801186A8
 * Callers:
 *     RtlpHpTagAllocateHeap @ 0x18002E060 (RtlpHpTagAllocateHeap.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpAllocateNTHeapInternal @ 0x180050E70 (RtlpAllocateNTHeapInternal.c)
 * Callees:
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlpAllocateHeapRaiseException(unsigned __int64 a1)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionAddress = RtlRaiseException;
  ExceptionRecord.ExceptionCode = -1073741801;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionInformation[0] = a1;
  RtlRaiseException(&ExceptionRecord);
}
