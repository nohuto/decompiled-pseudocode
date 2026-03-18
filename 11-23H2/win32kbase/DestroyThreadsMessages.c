/*
 * XREFs of DestroyThreadsMessages @ 0x1C00AA0D8
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*DestroyThreadsMessages())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02954F0;
  if ( qword_1C02954F0 )
    return (__int64 (*)(void))qword_1C02954F0();
  return result;
}
