/*
 * XREFs of VfAvlReserveNode @ 0x1403E5340
 * Callers:
 *     VfTargetDriversAdd @ 0x1403E3ED4 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x140B94404 (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140B94620 (VerifierIoInitializeRemoveLockEx.c)
 *     VfLookasideAdd @ 0x140BA1E44 (VfLookasideAdd.c)
 *     VfTrackResource @ 0x140BA39B0 (VfTrackResource.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402E2DD0 (ExAllocateFromNPagedLookasideList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

_QWORD *__fastcall VfAvlReserveNode(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  if ( *((_DWORD *)a1 + 7) == 1 )
    result = ExAllocateFromNPagedLookasideList(&ViAvlNodeLookaside);
  else
    result = (_QWORD *)ExAllocatePool2(0x40uLL, *((unsigned int *)a1 + 7), 0x54416656u);
  if ( result )
  {
    result += 4;
    *result = a2;
    if ( !a3 )
      a3 = *a1;
    result[1] = a3;
  }
  return result;
}
