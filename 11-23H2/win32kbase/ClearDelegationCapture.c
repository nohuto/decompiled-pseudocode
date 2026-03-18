/*
 * XREFs of ClearDelegationCapture @ 0x1C00AA064
 * Callers:
 *     zzzDestroyQueue @ 0x1C012DDA0 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*ClearDelegationCapture())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0295578;
  if ( qword_1C0295578 )
    return (__int64 (*)(void))qword_1C0295578();
  return result;
}
