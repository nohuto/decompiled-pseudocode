/*
 * XREFs of EtwpIsProcessZombie @ 0x1408EF5F4
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1408EF230 (EtwpProcessEnumCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140A56950 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpIsProcessZombie(__int64 a1)
{
  return (*(_DWORD *)(a1 + 500) & 4) != 0
      && *(_DWORD *)(a1 + 4)
      && !*(_DWORD *)(a1 + 896)
      && *(_QWORD *)(a1 + 48) == a1 + 48;
}
