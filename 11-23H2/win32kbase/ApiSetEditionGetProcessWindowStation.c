/*
 * XREFs of ApiSetEditionGetProcessWindowStation @ 0x1C0069BB4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C0067DD0 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserActivateKeyboardLayout @ 0x1C0069830 (NtUserActivateKeyboardLayout.c)
 *     _GetKeyboardLayoutList @ 0x1C00699AC (_GetKeyboardLayoutList.c)
 *     ?IsWinstaLessSession@@YA_NXZ @ 0x1C0069B98 (-IsWinstaLessSession@@YA_NXZ.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C014D800 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionGetProcessWindowStation()
{
  __int64 v0; // rbx

  v0 = 0LL;
  if ( qword_1C0295368 && (int)qword_1C0295368() >= 0 && qword_1C0295370 )
    return qword_1C0295370(0LL);
  return v0;
}
