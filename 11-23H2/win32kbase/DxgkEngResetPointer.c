/*
 * XREFs of DxgkEngResetPointer @ 0x1C0169460
 * Callers:
 *     <none>
 * Callees:
 *     IsUserResetPointerSupported @ 0x1C0018F24 (IsUserResetPointerSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*DxgkEngResetPointer())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))IsUserResetPointerSupported();
  if ( (int)result >= 0 )
  {
    result = qword_1C0294438;
    if ( qword_1C0294438 )
      return (__int64 (*)(void))qword_1C0294438();
  }
  return result;
}
