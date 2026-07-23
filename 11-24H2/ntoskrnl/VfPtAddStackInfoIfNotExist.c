/*
 * XREFs of VfPtAddStackInfoIfNotExist @ 0x140B8DD84
 * Callers:
 *     ViPtProcessApt @ 0x140B8EAC8 (ViPtProcessApt.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14035B710 (MmDeterminePoolType.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403E40F0 (RtlInsertElementGenericTableAvl.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x14060FE3C (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     ViPtCleanupLockContext @ 0x14060FEAC (ViPtCleanupLockContext.c)
 *     ViPtInitializeLockContext @ 0x14060FF08 (ViPtInitializeLockContext.c)
 *     ViPtRaiseIrqlSafe @ 0x14060FF1C (ViPtRaiseIrqlSafe.c)
 *     ViPtReleaseTreeLockFromDpcLevel @ 0x14060FF70 (ViPtReleaseTreeLockFromDpcLevel.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

_QWORD *__fastcall VfPtAddStackInfoIfNotExist(_OWORD *a1, int a2, unsigned __int64 a3, int a4, __int64 a5)
{
  char *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  _QWORD *inserted; // rax
  _QWORD *v21; // rbx
  __int128 v22; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD Buffer[6]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h]
  __int64 v25; // [rsp+50h] [rbp-B0h]
  char v26; // [rsp+58h] [rbp-A8h] BYREF
  BOOLEAN NewElement; // [rsp+218h] [rbp+118h] BYREF

  NewElement = 0;
  v22 = 0LL;
  memset_0(Buffer, 0, 0x1B8uLL);
  v25 = 0LL;
  v9 = &v26;
  v10 = 3LL;
  Buffer[0] = a4;
  v11 = a5;
  Buffer[1] = a2;
  v24 = a5;
  do
  {
    v12 = a1[1];
    *(_OWORD *)v9 = *a1;
    v13 = a1[2];
    *((_OWORD *)v9 + 1) = v12;
    v14 = a1[3];
    *((_OWORD *)v9 + 2) = v13;
    v15 = a1[4];
    *((_OWORD *)v9 + 3) = v14;
    v16 = a1[5];
    *((_OWORD *)v9 + 4) = v15;
    v17 = a1[6];
    *((_OWORD *)v9 + 5) = v16;
    v18 = a1[7];
    a1 += 8;
    *((_OWORD *)v9 + 6) = v17;
    v9 += 128;
    *((_OWORD *)v9 - 1) = v18;
    --v10;
  }
  while ( v10 );
  *(_OWORD *)v9 = *a1;
  if ( !ViPoolStackInfoAvlInitialized )
    return 0LL;
  ViPtInitializeLockContext((__int64)&v22);
  ViPtRaiseIrqlSafe((__int64)&v22);
  ViPtAcquireTreeLockAtDpcLevelSafe((__int64)&ViPoolStackInfoAvl, (__int64)&v22);
  inserted = RtlInsertElementGenericTableAvl(&ViPoolStackInfoAvl, Buffer, 0x1B8u, &NewElement);
  v21 = inserted;
  if ( inserted )
  {
    if ( NewElement )
    {
      if ( MmDeterminePoolType(a3) == 64 )
        *((_DWORD *)v21 + 2) |= 0x10u;
      *((_DWORD *)v21 + 2) |= 1u;
      ++ViPoolStackInfoAllocCount;
      *((_DWORD *)v21 + 3) = 1;
    }
    else
    {
      inserted[3] += v11;
      ++*((_DWORD *)inserted + 3);
    }
  }
  else
  {
    ++ViPoolStackInfoFailureCount;
  }
  ViPtReleaseTreeLockFromDpcLevel((__int64)&ViPoolStackInfoAvl, (__int64)&v22);
  ViPtCleanupLockContext((__int64)&v22);
  return v21;
}
