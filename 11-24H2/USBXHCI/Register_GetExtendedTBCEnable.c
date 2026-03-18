/*
 * XREFs of Register_GetExtendedTBCEnable @ 0x14001BA8C
 * Callers:
 *     Controller_Start @ 0x14001B1F0 (Controller_Start.c)
 *     Register_GetExtendedTBCTRBStatusSupported @ 0x14001BA64 (Register_GetExtendedTBCTRBStatusSupported.c)
 * Callees:
 *     <none>
 */

bool __fastcall Register_GetExtendedTBCEnable(__int64 a1)
{
  return (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 744LL) & 0x800LL) == 0 && (*(_BYTE *)(a1 + 108) & 0x50) == 80;
}
