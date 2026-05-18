/*
 * XREFs of sub_18000DC20 @ 0x18000DC20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FF48 @ 0x18000FF48 (sub_18000FF48.c)
 */

DWORD __fastcall sub_18000DC20(DWORD dwMessageId, LPWSTR lpBuffer, DWORD nSize)
{
  const void *v6; // rax

  v6 = (const void *)sub_18000FF48();
  return FormatMessageW(0x1A00u, v6, dwMessageId, 0x400u, lpBuffer, nSize, 0LL);
}
