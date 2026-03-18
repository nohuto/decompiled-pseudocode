/*
 * XREFs of DestroyProcessHidRequests @ 0x1401F4060
 * Callers:
 *     <none>
 * Callees:
 *     FreeProcessHidTable @ 0x1401F4078 (FreeProcessHidTable.c)
 */

__int64 DestroyProcessHidRequests()
{
  return FreeProcessHidTable();
}
