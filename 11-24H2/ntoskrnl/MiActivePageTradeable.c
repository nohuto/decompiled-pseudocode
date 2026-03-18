/*
 * XREFs of MiActivePageTradeable @ 0x1403A0B30
 * Callers:
 *     MiTradeActivePage @ 0x1403A0758 (MiTradeActivePage.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 */

_BOOL8 __fastcall MiActivePageTradeable(ULONG_PTR a1, unsigned __int64 a2, int a3, char a4)
{
  return (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
      && (unsigned __int16)*(_DWORD *)(a1 + 32) == 1
      && (a3 < 1
       || ((MiFlags & 0x4000) == 0 || !(unsigned int)MiGetPagePrivilege(a1, 2, 0LL))
       && ((MiFlags & 0x20000) == 0 || !(unsigned int)MiGetPagePrivilege(a1, 2, 0LL))
       && ((*(_QWORD *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0x42) == 0 || (a4 & 2) != 0));
}
