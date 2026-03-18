/*
 * XREFs of IsAllocationOffered @ 0x1400F6E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IsAllocationOffered(void *a1)
{
  return *(_DWORD *)(*(_QWORD *)a1 + 312LL) != 4 && *(_WORD *)(*(_QWORD *)(*(_QWORD *)a1 + 392LL) + 8LL) == 2;
}
