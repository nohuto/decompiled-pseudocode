/*
 * XREFs of PopEtProcessSnapshotUpdate @ 0x14099BF8C
 * Callers:
 *     PopEtProcessEnumSnapshotCallback @ 0x140860740 (PopEtProcessEnumSnapshotCallback.c)
 *     PopEtEnergyTrackerEnumSnapshotCallback @ 0x14099BD08 (PopEtEnergyTrackerEnumSnapshotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopEtAggregateKeyCleanup @ 0x14099BE60 (PopEtAggregateKeyCleanup.c)
 *     PopEtProcessSnapshotFind @ 0x14099C16C (PopEtProcessSnapshotFind.c)
 *     PopEtEnergyTrackerUpdateAggregate @ 0x14099C280 (PopEtEnergyTrackerUpdateAggregate.c)
 *     PopEtProcessSnapshotUpdateFromSnapshotContext @ 0x14099C6E8 (PopEtProcessSnapshotUpdateFromSnapshotContext.c)
 *     PopEtProcessSnapshotCreate @ 0x14099D018 (PopEtProcessSnapshotCreate.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEtProcessSnapshotUpdate(unsigned int *a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  __int64 v4; // r14
  _QWORD *v5; // rbx
  int v6; // ebx
  _QWORD *v8; // rdx
  __int64 v9; // [rsp+40h] [rbp+8h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *(_QWORD *)(v1 + 1640);
  if ( (*(_DWORD *)(v1 + 500) & 4) != 0 && *a1 != 4 || *(_QWORD *)(v4 + 456) == PopEtGlobals + 792 )
    return 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)(v3 + 16));
  v10 = PopEtProcessSnapshotFind(a1);
  v5 = (_QWORD *)v10;
  if ( v10 )
    goto LABEL_4;
  v6 = PopEtProcessSnapshotCreate(a1, &v10);
  if ( v6 >= 0 )
  {
    if ( *a1 == 1 || *(_DWORD *)(v4 + 476) > 1u )
    {
      v5 = (_QWORD *)v10;
      goto LABEL_5;
    }
    v5 = (_QWORD *)v10;
LABEL_4:
    PopEtEnergyTrackerUpdateAggregate(v3, v5, *((_QWORD *)a1 + 3), *a1);
LABEL_5:
    if ( *a1 == 4 )
    {
      v9 = v5[1] & (-1LL << (*(_DWORD *)(v3 + 68) & 0x1F));
      v8 = (_QWORD *)(*(_QWORD *)(v3 + 72)
                    + 8LL
                    * ((37
                      * (BYTE6(v9)
                       + 37
                       * (BYTE5(v9)
                        + 37
                        * (BYTE4(v9)
                         + 37
                         * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
                      + HIBYTE(v9)) & (unsigned int)((*(_DWORD *)(v3 + 68) >> 5) - 1)));
      if ( (*v5 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v5 = (_QWORD *)v10;
      while ( (*v8 & 1) == 0 )
      {
        if ( (_QWORD *)*v8 == v5 )
        {
          *v8 = *v5;
          --*(_DWORD *)(v3 + 64);
          *v5 |= 0x8000000000000002uLL;
          goto LABEL_21;
        }
        v8 = (_QWORD *)*v8;
      }
      v5 = (_QWORD *)v10;
LABEL_21:
      PopEtAggregateKeyCleanup(v5 + 2);
      ExFreePoolWithTag(v5, 0x54456F50u);
    }
    else
    {
      PopEtProcessSnapshotUpdateFromSnapshotContext(v5, a1);
    }
    v6 = 0;
  }
  PopReleaseRwLock((signed __int64 *)(v3 + 16));
  return (unsigned int)v6;
}
