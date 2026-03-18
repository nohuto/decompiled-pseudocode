/*
 * XREFs of NtReadVirtualMemory @ 0x1409C4CB0
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x1409C4CE0 (MiReadWriteVirtualMemory.c)
 */

__int64 __fastcall NtReadVirtualMemory(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return MiReadWriteVirtualMemory(a1, a5, 16, 0);
}
