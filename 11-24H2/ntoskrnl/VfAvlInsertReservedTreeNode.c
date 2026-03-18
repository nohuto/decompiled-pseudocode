/*
 * XREFs of VfAvlInsertReservedTreeNode @ 0x1403F0328
 * Callers:
 *     VfTargetDriversAdd @ 0x1403F01F8 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x140B92404 (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140B92620 (VerifierIoInitializeRemoveLockEx.c)
 *     VfLookasideAdd @ 0x140B9FE44 (VfLookasideAdd.c)
 *     VfTrackResource @ 0x140BA19B0 (VfTrackResource.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1403F03D0 (RtlInsertElementGenericTableAvl.c)
 *     ViAvlTableIndex @ 0x1403F1238 (ViAvlTableIndex.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403F1260 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403F12C4 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403F1490 (ViAvlReleaseTableLockFromDpcLevel.c)
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
