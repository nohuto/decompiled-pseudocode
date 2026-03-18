/*
 * XREFs of IsAllocationOffered @ 0x1400F8DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IsAllocationOffered(void *a1)
{
  return *(_DWORD *)(*(_QWORD *)a1 + 296LL) != 4 && *(_WORD *)(*(_QWORD *)(*(_QWORD *)a1 + 376LL) + 8LL) == 2;
}
