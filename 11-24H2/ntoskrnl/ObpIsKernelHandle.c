/*
 * XREFs of ObpIsKernelHandle @ 0x1404068A0
 * Callers:
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(__int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 != -2 && a1 != -1;
}
