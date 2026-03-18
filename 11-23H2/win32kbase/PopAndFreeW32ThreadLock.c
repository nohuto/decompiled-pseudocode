/*
 * XREFs of PopAndFreeW32ThreadLock @ 0x1C00AA2B0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*PopAndFreeW32ThreadLock())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0295548;
  if ( qword_1C0295548 )
    return (__int64 (*)(void))qword_1C0295548();
  return result;
}
