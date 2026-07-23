/*
 * XREFs of IopMergeRelationLists @ 0x140731730
 * Callers:
 *     PnpQueuePendingSurpriseRemoval @ 0x1409BCDB8 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpProcessRelation @ 0x140A54854 (PnpProcessRelation.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x1409BDF04 (PipDeviceObjectListIndexOf.c)
 *     IopAddRelationToList @ 0x140A54B0C (IopAddRelationToList.c)
 */

__int64 __fastcall IopMergeRelationLists(unsigned int **a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  unsigned int v7; // esi
  unsigned int v8; // r13d
  unsigned int *v9; // rcx
  __int64 v10; // r11
  char v11; // r15
  __int64 v12; // r9
  int v13; // eax
  char v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v7 = 0;
  v8 = **a1;
  while ( 1 )
  {
    v9 = *a1;
    if ( v7 >= **(_DWORD **)a2 )
      break;
    if ( (int)PipDeviceObjectListIndexOf(v9, *(_QWORD *)(*(_QWORD *)a2 + 24LL * v7 + 16), v8, &v15) < 0 )
    {
      v11 = 0;
      v12 = *(_BYTE *)(v10 + 24LL * v7 + 32) & 1;
    }
    else
    {
      v11 = 1;
      v12 = a3 && (*(_DWORD *)(v10 + 24LL * v7 + 32) & 1) != 0;
    }
    v13 = IopAddRelationToList(a1, *(_QWORD *)(v10 + 24LL * v7 + 16), *(unsigned int *)(v10 + 24LL * v7 + 24), v12);
    if ( (!v11 || v13 != -1073741771) && v13 < 0 )
      return (unsigned int)v13;
    ++v7;
  }
  if ( !*v9 )
    *((_BYTE *)a1 + 8) = *(_BYTE *)(a2 + 8);
  return v3;
}
