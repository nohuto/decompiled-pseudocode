/*
 * XREFs of KeCopyPrivilegedPage @ 0x140486C0C
 * Callers:
 *     MiTradeBootImagePage @ 0x140C5DD20 (MiTradeBootImagePage.c)
 * Callees:
 *     VslCopyProtectedPage @ 0x140486C48 (VslCopyProtectedPage.c)
 */

__int64 __fastcall KeCopyPrivilegedPage(int a1, int a2, int a3, int a4, __int64 a5, char a6)
{
  return VslCopyProtectedPage(a3, a4, a1, a2, a5, a6 & 1);
}
