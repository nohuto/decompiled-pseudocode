/*
 * XREFs of RtlZeroMemory @ 0x180104CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall RtlZeroMemory(void *a1, size_t a2)
{
  return memset_thunk_772440563353939046(a1, 0, a2);
}
