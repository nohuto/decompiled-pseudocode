/*
 * XREFs of NtFlushBuffersFile @ 0x140938D50
 * Callers:
 *     <none>
 * Callees:
 *     NtFlushBuffersFileEx @ 0x140938D80 (NtFlushBuffersFileEx.c)
 */

__int64 __fastcall NtFlushBuffersFile(int a1, __int64 a2)
{
  return NtFlushBuffersFileEx(a1, 0, 0, 0, a2);
}
