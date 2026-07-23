/*
 * XREFs of IvtSetScalableModeContextEntry @ 0x14056E924
 * Callers:
 *     IvtInitializeIommu @ 0x140B53BE0 (IvtInitializeIommu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtSetScalableModeContextEntry(__int64 a1, signed __int64 *a2, volatile signed __int64 *a3)
{
  signed __int64 v3; // rbx
  signed __int64 v4; // rcx
  __int128 v5; // rax
  __int128 v6; // rt0
  unsigned __int8 v7; // tt

  v3 = *a2;
  v4 = a2[1];
  v5 = *(_OWORD *)a3;
  do
  {
    v6 = v5;
    v7 = _InterlockedCompareExchange128(a3, v4, v3, (signed __int64 *)&v6);
    v5 = v6;
  }
  while ( !v7 );
  return v5;
}
