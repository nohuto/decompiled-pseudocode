/*
 * XREFs of NtOpenKeyTransacted @ 0x1407CFE40
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenKeyTransactedEx @ 0x1409E3C50 (NtOpenKeyTransactedEx.c)
 */

__int64 __fastcall NtOpenKeyTransacted(int a1, int a2, int a3, void *Handle)
{
  return NtOpenKeyTransactedEx(a1, a2, a3, 0, Handle);
}
