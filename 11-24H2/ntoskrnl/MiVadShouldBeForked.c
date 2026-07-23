/*
 * XREFs of MiVadShouldBeForked @ 0x140485458
 * Callers:
 *     MiAllocateChildVads @ 0x140A47718 (MiAllocateChildVads.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadShouldBeForked(__int64 a1)
{
  int v1; // edx
  int v2; // eax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0xA00000) == 0xA00000 )
    return 0LL;
  if ( (v1 & 0x200000) == 0 || (v1 & 0x800000) == 0 && (v1 & 0x180000u) < 0x100000 )
  {
    v2 = v1 & 0x70;
    if ( ((v1 & 0x70) == 0 || v2 == 32 || v2 == 80) && (v1 & 0xC200000) != 0x8200000 )
    {
      if ( (*(_DWORD *)(a1 + 48) & 0x200000) == 0 )
        return (*(_DWORD *)(a1 + 64) >> 2) & 1;
      return 1LL;
    }
    return 0LL;
  }
  return 1LL;
}
