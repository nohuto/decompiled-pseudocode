/*
 * XREFs of MiActivePageTradeable @ 0x140217690
 * Callers:
 *     MiTradeActivePage @ 0x1402172BC (MiTradeActivePage.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 */

_BOOL8 __fastcall MiActivePageTradeable(ULONG_PTR a1, unsigned __int64 a2, int a3, char a4)
{
  return (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
      && (unsigned __int16)*(_DWORD *)(a1 + 32) == 1
      && (a3 < 1
       || ((MiFlags & 0x4000) == 0 || !(unsigned int)MiGetPagePrivilege(a1))
       && ((MiFlags & 0x20000) == 0 || !(unsigned int)MiGetPagePrivilege(a1))
       && ((*(_QWORD *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0x42) == 0 || (a4 & 2) != 0));
}
