/*
 * XREFs of ObpIsKernelHandle @ 0x140410650
 * Callers:
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(__int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 != -2 && a1 != -1;
}
