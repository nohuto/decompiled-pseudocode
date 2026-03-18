/*
 * XREFs of MiVadSupportsPhysicalContiguityQuery @ 0x1407F8070
 * Callers:
 *     MiProcessVaContiguityInformation @ 0x14068D0DC (MiProcessVaContiguityInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadSupportsPhysicalContiguityQuery(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 0x70) == 0 && (*(_DWORD *)(a1 + 48) & 0x200000) != 0;
}
