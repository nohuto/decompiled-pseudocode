/*
 * XREFs of RtlClearAllBitsEx @ 0x18013C6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall RtlClearAllBitsEx(__int64 a1)
{
  return memset_thunk_772440563353939046(
           *(void **)(a1 + 8),
           0,
           4 * ((*(_QWORD *)a1 >> 5) + ((*(_QWORD *)a1 & 0x1F) != 0)));
}
