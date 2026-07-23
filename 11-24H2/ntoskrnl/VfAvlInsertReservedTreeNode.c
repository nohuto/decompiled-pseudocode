/*
 * XREFs of VfAvlInsertReservedTreeNode @ 0x1403E4050
 * Callers:
 *     VfTargetDriversAdd @ 0x1403E3ED4 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x140B94404 (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140B94620 (VerifierIoInitializeRemoveLockEx.c)
 *     VfLookasideAdd @ 0x140BA1E44 (VfLookasideAdd.c)
 *     VfTrackResource @ 0x140BA39B0 (VfTrackResource.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1403E40F0 (RtlInsertElementGenericTableAvl.c)
 *     ViAvlTableIndex @ 0x1403E4F58 (ViAvlTableIndex.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403E4F80 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403E4FE4 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403E51B0 (ViAvlReleaseTableLockFromDpcLevel.c)
 */

__int64 __fastcall VfAvlInsertReservedTreeNode(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  BOOLEAN NewElement; // [rsp+30h] [rbp+8h] BYREF

  v6 = ViAvlTableIndex(a1, *a3);
  ViAvlRaiseIrqlSafe(a2);
  v6 *= 192LL;
  ViAvlAcquireTableLockAtDpcLevelSafe(v6 + *(_QWORD *)(a1 + 16), a2);
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + v6 + 104) = a3;
  RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v6 + *(_QWORD *)(a1 + 16)), a3, 8u, &NewElement);
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8));
  return ViAvlReleaseTableLockFromDpcLevel(v6 + *(_QWORD *)(a1 + 16), a2);
}
