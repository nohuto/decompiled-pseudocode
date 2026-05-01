/*
 * XREFs of _dynamic_initializer_for__BlockIdle__ @ 0x18020ADF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Buy_nonzero@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x180048948 (-_Buy_nonzero@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z.c)
 */

int dynamic_initializer_for__BlockIdle__()
{
  __int64 v0; // rcx

  std::vector<Windows::UI::Color>::_Buy_nonzero(&BlockIdle, 1uLL);
  v0 = BlockIdle;
  *(_DWORD *)BlockIdle = 0;
  qword_1808C9570 = v0 + 4;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__BlockIdle__);
}
