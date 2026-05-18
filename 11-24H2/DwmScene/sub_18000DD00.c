/*
 * XREFs of sub_18000DD00 @ 0x18000DD00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010048 @ 0x180010048 (sub_180010048.c)
 */

DWORD __fastcall sub_18000DD00(DWORD dwMessageId, LPWSTR lpBuffer, DWORD nSize)
{
  const void *v6; // rax

  v6 = (const void *)sub_180010048();
  return FormatMessageW(0x1A00u, v6, dwMessageId, 0x400u, lpBuffer, nSize, 0LL);
}
