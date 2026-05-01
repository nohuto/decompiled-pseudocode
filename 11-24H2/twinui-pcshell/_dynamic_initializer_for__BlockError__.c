/*
 * XREFs of _dynamic_initializer_for__BlockError__ @ 0x18021A880
 * Callers:
 *     <none>
 * Callees:
 *     ?_Buy_nonzero@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x180048948 (-_Buy_nonzero@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z.c)
 */

int dynamic_initializer_for__BlockError__()
{
  __int64 v0; // rcx

  std::vector<Windows::UI::Color>::_Buy_nonzero(&BlockError, 1uLL);
  v0 = BlockError;
  *(_DWORD *)BlockError = 0xFFFF;
  qword_1808C9558 = v0 + 4;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__BlockError__);
}
