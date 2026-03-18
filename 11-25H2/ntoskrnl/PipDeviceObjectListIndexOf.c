/*
 * XREFs of PipDeviceObjectListIndexOf @ 0x140831A14
 * Callers:
 *     IopMergeRelationLists @ 0x140727564 (IopMergeRelationLists.c)
 *     IopRemoveRelationFromList @ 0x1407276CC (IopRemoveRelationFromList.c)
 *     PipIsDeviceInDeviceObjectList @ 0x1408319F0 (PipIsDeviceInDeviceObjectList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PipDeviceObjectListIndexOf(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v4; // r10d
  _QWORD *v5; // rax

  v4 = 0;
  v5 = (_QWORD *)(a1 + 16);
  while ( v4 < a3 )
  {
    if ( a2 == *v5 )
    {
      if ( a4 )
        *a4 = a1 + 8 * (3LL * v4 + 2);
      return (unsigned int)v4;
    }
    ++v4;
    v5 += 3;
  }
  v4 = -1;
  if ( a4 )
    *a4 = 0LL;
  return (unsigned int)v4;
}
