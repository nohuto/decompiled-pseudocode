/*
 * XREFs of MiFillCommitReturnInfo @ 0x140440D10
 * Callers:
 *     MiDecommitRegion @ 0x1408DC180 (MiDecommitRegion.c)
 *     MiRemoveVadCharges @ 0x1409B0374 (MiRemoveVadCharges.c)
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
