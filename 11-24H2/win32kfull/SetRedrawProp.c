/*
 * XREFs of SetRedrawProp @ 0x140031254
 * Callers:
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1401D1FA4 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     UserGetGlobalAtomTableOfWindow @ 0x1400312A8 (UserGetGlobalAtomTableOfWindow.c)
 *     InternalSetProp @ 0x140031458 (InternalSetProp.c)
 */

__int64 __fastcall SetRedrawProp(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int16 AtomFromAtomTable; // ax

  v2 = a2;
  result = UserGetGlobalAtomTableOfWindow();
  if ( result )
  {
    AtomFromAtomTable = UserFindAtomFromAtomTable(result, L"SysSetRedraw");
    return InternalSetProp(a1, AtomFromAtomTable, v2, 0LL);
  }
  return result;
}
