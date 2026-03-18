/*
 * XREFs of VfAvlReserveNode @ 0x1403F1620
 * Callers:
 *     VfTargetDriversAdd @ 0x1403F01F8 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x140B92404 (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140B92620 (VerifierIoInitializeRemoveLockEx.c)
 *     VfLookasideAdd @ 0x140B9FE44 (VfLookasideAdd.c)
 *     VfTrackResource @ 0x140BA19B0 (VfTrackResource.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140248B90 (ExAllocateFromNPagedLookasideList.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

_QWORD *__fastcall VfAvlReserveNode(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  if ( *((_DWORD *)a1 + 7) == 1 )
    result = ExAllocateFromNPagedLookasideList(&ViAvlNodeLookaside);
  else
    result = (_QWORD *)ExAllocatePool2(0x40uLL);
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
