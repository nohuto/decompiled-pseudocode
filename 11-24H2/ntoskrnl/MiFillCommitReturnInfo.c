/*
 * XREFs of MiFillCommitReturnInfo @ 0x1404377E0
 * Callers:
 *     MiDecommitRegion @ 0x1408DA3B0 (MiDecommitRegion.c)
 *     MiRemoveVadCharges @ 0x14099A074 (MiRemoveVadCharges.c)
 * Callees:
 *     <none>
 */

void __fastcall MiFillCommitReturnInfo(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx

  v3 = a1 - *(_QWORD *)(a2 + 16);
  *a3 = v3;
  a3[1] = v3 - *(_QWORD *)(a2 + 8);
}
