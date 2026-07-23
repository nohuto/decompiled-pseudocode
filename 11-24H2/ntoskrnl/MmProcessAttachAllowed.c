/*
 * XREFs of MmProcessAttachAllowed @ 0x14044C648
 * Callers:
 *     PspSelectSessionAttachProcess @ 0x140A12D74 (PspSelectSessionAttachProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MmProcessAttachAllowed(__int64 a1)
{
  return (HIBYTE(*(_DWORD *)(a1 + 1208)) & 0x30) != 32;
}
