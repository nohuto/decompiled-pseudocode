/*
 * XREFs of KeCopyPrivilegedPage @ 0x14048C138
 * Callers:
 *     MiTradeBootImagePage @ 0x140C4A804 (MiTradeBootImagePage.c)
 * Callees:
 *     VslCopyProtectedPage @ 0x14048C174 (VslCopyProtectedPage.c)
 */

__int64 __fastcall KeCopyPrivilegedPage(int a1, int a2, int a3, int a4, __int64 a5, char a6)
{
  return VslCopyProtectedPage(a3, a4, a1, a2, a5, a6 & 1);
}
