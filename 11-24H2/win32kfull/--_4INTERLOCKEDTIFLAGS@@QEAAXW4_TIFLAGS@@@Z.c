/*
 * XREFs of ??_4INTERLOCKEDTIFLAGS@@QEAAXW4_TIFLAGS@@@Z @ 0x1401A6C98
 * Callers:
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

void __fastcall INTERLOCKEDTIFLAGS::operator&=(volatile signed __int32 *a1, unsigned int a2)
{
  _InterlockedAnd(a1, a2);
}
