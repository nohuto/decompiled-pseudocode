/*
 * XREFs of NtSaveKey @ 0x1407D1070
 * Callers:
 *     <none>
 * Callees:
 *     NtSaveKeyEx @ 0x140A6DF30 (NtSaveKeyEx.c)
 */

__int64 __fastcall NtSaveKey(__int64 a1, __int64 a2)
{
  return NtSaveKeyEx(a1, a2, 1LL);
}
