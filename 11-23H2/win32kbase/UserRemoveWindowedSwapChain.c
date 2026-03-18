/*
 * XREFs of UserRemoveWindowedSwapChain @ 0x1C0233360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*UserRemoveWindowedSwapChain())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296118;
  if ( qword_1C0296118 )
    return (__int64 (*)(void))qword_1C0296118();
  return result;
}
