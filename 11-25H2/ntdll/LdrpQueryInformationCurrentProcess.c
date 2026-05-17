/*
 * XREFs of LdrpQueryInformationCurrentProcess @ 0x18006AF20
 * Callers:
 *     LdrQueryInLoadOrderModuleList32 @ 0x18006ADD0 (LdrQueryInLoadOrderModuleList32.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall LdrpQueryInformationCurrentProcess(__int64 a1, PROCESSINFOCLASS a2, void *a3, ULONG a4, ULONG *a5)
{
  return NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4, a5);
}
