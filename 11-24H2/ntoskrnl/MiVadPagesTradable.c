/*
 * XREFs of MiVadPagesTradable @ 0x1403FE990
 * Callers:
 *     MiLockStealUserVm @ 0x140227A3C (MiLockStealUserVm.c)
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiProcessVaContiguityInformation @ 0x14068D0DC (MiProcessVaContiguityInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadPagesTradable(__int64 a1)
{
  int v1; // eax
  int v2; // edx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = v1 & 0x200000;
  if ( (v1 & 0x70) != 0 )
  {
    if ( !v2 && (*(_DWORD *)(a1 + 64) & 1) != 0 )
      return 0LL;
    return (*(_DWORD *)(a1 + 48) & 0x70) == 32;
  }
  else
  {
    return !v2 || (v1 & 0x800000) == 0 && (v1 & 0x180000u) < 0x100000;
  }
}
