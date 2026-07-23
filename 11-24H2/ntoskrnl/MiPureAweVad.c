/*
 * XREFs of MiPureAweVad @ 0x14030CA90
 * Callers:
 *     MiQueryAddressState @ 0x14030ABA0 (MiQueryAddressState.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPureAweVad(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  return (*(_BYTE *)(a1 + 48) & 0x70) == 0x30 && ((v1 & 0x200000) == 0 || (v1 & 0xC000000) != 0x8000000);
}
