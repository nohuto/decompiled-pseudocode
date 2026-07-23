/*
 * XREFs of PipVisitDeviceObjectListEntry @ 0x1409BDD98
 * Callers:
 *     PipSortDeviceObjectList @ 0x1409BDCEC (PipSortDeviceObjectList.c)
 *     PipVisitDeviceObjectListEntry @ 0x1409BDD98 (PipVisitDeviceObjectListEntry.c)
 * Callees:
 *     PiEnumerateDependentListEntry @ 0x1406F75AC (PiEnumerateDependentListEntry.c)
 *     PipVisitDeviceObjectListEntry @ 0x1409BDD98 (PipVisitDeviceObjectListEntry.c)
 *     PipIsDeviceInDeviceObjectList @ 0x1409BDEE0 (PipIsDeviceInDeviceObjectList.c)
 */

__int64 __fastcall PipVisitDeviceObjectListEntry(_DWORD *a1, _DWORD *a2, int *a3)
{
  int v5; // eax
  __int64 v7; // rdi
  __int64 i; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rbx
  __int64 *j; // rdi
  int v14; // eax
  _QWORD *v16; // [rsp+68h] [rbp+20h]

  v16 = 0LL;
  v5 = a1[4];
  if ( (v5 & 2) == 0 )
  {
    a1[4] = v5 | 2;
    if ( *(_QWORD *)a1 )
      v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 312LL) + 40LL);
    else
      v7 = 0LL;
    for ( i = 0LL; (unsigned int)i < *a2; i = (unsigned int)(i + 1) )
    {
      v9 = &a2[4 * i + 4 + 2 * i];
      v10 = (_QWORD *)*v9;
      v16 = v9;
      if ( v10 )
        v10 = *(_QWORD **)(v10[39] + 40LL);
      if ( v10[2] == v7 || (v10[81] & 0xFFFFFFFFFFFFFFFEuLL) == v7 )
        PipVisitDeviceObjectListEntry(v9, a2, a3);
    }
    if ( *(_QWORD *)a1 && (v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 312LL) + 80LL)) != 0 )
      v12 = (__int64 *)(v11 + 32);
    else
      v12 = &PiDependencyNodeEmptyList;
    for ( j = (__int64 *)*v12; j != v12; j = (__int64 *)*j )
      PiEnumerateDependentListEntry((__int64)j);
    v14 = *a3;
    a1[3] = *a3;
    *a3 = v14 + 1;
  }
  return 0LL;
}
