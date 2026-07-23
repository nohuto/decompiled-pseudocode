/*
 * XREFs of PsIsProcessPrimaryTokenFrozen @ 0x140A31EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsProcessPrimaryTokenFrozen(__int64 a1)
{
  return (*(_DWORD *)(a1 + 496) & 0x8000) != 0;
}
