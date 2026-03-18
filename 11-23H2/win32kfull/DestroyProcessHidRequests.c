/*
 * XREFs of DestroyProcessHidRequests @ 0x1C009A5E0
 * Callers:
 *     <none>
 * Callees:
 *     FreeProcessHidTable @ 0x1C009A5F8 (FreeProcessHidTable.c)
 */

__int64 DestroyProcessHidRequests()
{
  return FreeProcessHidTable();
}
