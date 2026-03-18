/*
 * XREFs of ApiSetEditionPostShellHookMessages @ 0x1C0207590
 * Callers:
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C014E894 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C014E9E0 (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C014EB94 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionPostShellHookMessages(__int64 a1, __int64 a2, __int64 a3, __int64 a4))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0295D38;
  if ( qword_1C0295D38 )
  {
    result = (__int64 (*)(void))qword_1C0295D38();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0295D40;
      if ( qword_1C0295D40 )
        return (__int64 (*)(void))qword_1C0295D40(11LL, a2, a3, a4);
    }
  }
  return result;
}
