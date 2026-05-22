/*
 * XREFs of ?_Throw_bad_weak_ptr@std@@YAXXZ @ 0x1800908EC
 * Callers:
 *     ?shared_from_this@?$enable_shared_from_this@VSystemCursorService2@@@std@@QEAA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x1800908B4 (-shared_from_this@-$enable_shared_from_this@VSystemCursorService2@@@std@@QEAA-AV-$shared_ptr@VSy.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18009DAE6 (_CxxThrowException_0.c)
 */

void __noreturn std::_Throw_bad_weak_ptr(void)
{
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v1; // [rsp+28h] [rbp-20h]

  pExceptionObject = &std::bad_weak_ptr::`vftable';
  v1 = 0LL;
  throw (std::bad_weak_ptr *)&pExceptionObject;
}
