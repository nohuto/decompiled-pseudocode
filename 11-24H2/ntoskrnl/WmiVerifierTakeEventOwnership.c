/*
 * XREFs of WmiVerifierTakeEventOwnership @ 0x14064C490
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x140BA1650 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall WmiVerifierTakeEventOwnership(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0x20000) == 0;
}
