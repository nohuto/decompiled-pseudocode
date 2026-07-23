/*
 * XREFs of PipDeviceObjectListElementAt @ 0x140A4EC14
 * Callers:
 *     IopRemoveCurrentRelationFromList @ 0x140731810 (IopRemoveCurrentRelationFromList.c)
 *     IopEnumerateRelations @ 0x140A4EB78 (IopEnumerateRelations.c)
 *     PipGrowDeviceObjectList @ 0x140A54CC8 (PipGrowDeviceObjectList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PipDeviceObjectListElementAt(unsigned int *a1, unsigned int a2, _QWORD *a3, _DWORD *a4, int *a5)
{
  unsigned int v5; // r10d
  __int64 v6; // rdx

  v5 = 0;
  if ( a1 )
  {
    if ( a2 >= *a1 )
    {
      return (unsigned int)-1073741684;
    }
    else
    {
      v6 = 3LL * a2;
      *a3 = *(_QWORD *)&a1[2 * v6 + 4];
      if ( a4 )
        *a4 = a1[2 * v6 + 6];
      if ( a5 )
        *a5 = a1[2 * v6 + 8] & 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
