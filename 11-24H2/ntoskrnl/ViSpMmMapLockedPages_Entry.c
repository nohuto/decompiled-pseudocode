/*
 * XREFs of ViSpMmMapLockedPages_Entry @ 0x1406A3CB0
 * Callers:
 *     <none>
 * Callees:
 *     ViSpMmMapLockedPagesSanityChecks @ 0x140BA4B60 (ViSpMmMapLockedPagesSanityChecks.c)
 */

__int64 __fastcall ViSpMmMapLockedPages_Entry(__int64 a1)
{
  return ViSpMmMapLockedPagesSanityChecks(*(_QWORD *)(a1 + 16));
}
