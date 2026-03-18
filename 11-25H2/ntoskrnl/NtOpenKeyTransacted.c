/*
 * XREFs of NtOpenKeyTransacted @ 0x1407C0740
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenKeyTransactedEx @ 0x140A315F0 (NtOpenKeyTransactedEx.c)
 */

__int64 __fastcall NtOpenKeyTransacted(int a1, int a2, int a3, void *Handle)
{
  return NtOpenKeyTransactedEx(a1, a2, a3, 0, Handle);
}
