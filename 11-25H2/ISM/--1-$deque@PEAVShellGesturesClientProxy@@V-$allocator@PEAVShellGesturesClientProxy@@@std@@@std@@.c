/*
 * XREFs of ??1?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAA@XZ @ 0x18007BD48
 * Callers:
 *     _dynamic_atexit_destructor_for__ShellGesturesProcessor::s_clients__ @ 0x1801D2780 (_dynamic_atexit_destructor_for__ShellGesturesProcessor--s_clients__.c)
 * Callees:
 *     ?_Tidy@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAXXZ @ 0x18007BD74 (-_Tidy@-$deque@PEAVShellGesturesClientProxy@@V-$allocator@PEAVShellGesturesClientProxy@@@std@@@s.c)
 */

void __fastcall std::deque<ShellGesturesClientProxy *>::~deque<ShellGesturesClientProxy *>(char **a1)
{
  char *v2; // rcx

  std::deque<ShellGesturesClientProxy *>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x10);
}
