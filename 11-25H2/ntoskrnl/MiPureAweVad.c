/*
 * XREFs of MiPureAweVad @ 0x140246010
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPureAweVad(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  return (*(_BYTE *)(a1 + 48) & 0x70) == 0x30 && ((v1 & 0x200000) == 0 || (v1 & 0xC000000) != 0x8000000);
}
