/*
 * XREFs of MiVadPagesTradable @ 0x1402CA000
 * Callers:
 *     MiLockStealUserVm @ 0x1402C97A0 (MiLockStealUserVm.c)
 *     NtUnlockVirtualMemory @ 0x1403875B0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiProcessVaContiguityInformation @ 0x14068184C (MiProcessVaContiguityInformation.c)
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
