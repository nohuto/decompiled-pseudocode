/*
 * XREFs of MiGetAggregateWorkingSetSize @ 0x14068FE28
 * Callers:
 *     MmLogSystemShareablePfnInfo @ 0x1407F8804 (MmLogSystemShareablePfnInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAggregateWorkingSetSize(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // eax
  int *v3; // rcx

  v1 = *(_QWORD *)(a1 + 144);
  v2 = *(_DWORD *)(a1 + 184);
  v3 = &dword_140E38900;
  if ( (v2 & 0xF) != 1 )
    v3 = 0LL;
  if ( v3 )
    return *((_QWORD *)v3 + 1);
  return v1;
}
