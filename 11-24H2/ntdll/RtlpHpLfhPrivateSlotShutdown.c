/*
 * XREFs of RtlpHpLfhPrivateSlotShutdown @ 0x180060ADC
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextTlsCleanup @ 0x1800D5FC0 (RtlpHpLfhContextTlsCleanup.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x1800E4020 (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     RtlpHpLfhHeatMapQuery @ 0x180060E00 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180063450 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180064030 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x1800642C0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhContextMetadataFree @ 0x1800D660C (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhSlotActiveSubsegmentReset @ 0x1800DF800 (RtlpHpLfhSlotActiveSubsegmentReset.c)
 */

__int64 __fastcall RtlpHpLfhPrivateSlotShutdown(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  _RTL_SRWLOCK *v6; // r13
  unsigned __int16 v7; // bx
  int v9; // edi
  _QWORD *v10; // rsi
  _QWORD *v11; // rsi
  bool v12; // cc
  int v13; // r9d
  _RTL_SRWLOCK *v14; // rcx
  int v15; // r8d
  _RTL_SRWLOCK *v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  int v20; // r8d
  __int64 *v21; // r8
  __int64 *v22; // rax
  int v23; // r8d
  __int64 v24; // r8
  __int64 *v25; // rax
  __int64 v26; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v27; // [rsp+38h] [rbp-8h]
  unsigned __int8 v28; // [rsp+94h] [rbp+54h]

  v28 = BYTE4(a3);
  v4 = *(unsigned __int16 *)(a2 + 2);
  v27 = &v26;
  v6 = (_RTL_SRWLOCK *)(a1 + (v4 << 6));
  v26 = (__int64)&v26;
  v7 = a3;
  RtlpHpLfhSlotActiveSubsegmentReset(a2);
  RtlpHpLfhOwnerRunMaintenance(a1, a2, &v26, 2LL);
  v9 = 0;
  v10 = *(_QWORD **)(a2 + 40);
  while ( v10 != (_QWORD *)(a2 + 40) )
  {
    v23 = (int)v10;
    v10 = (_QWORD *)*v10;
    if ( (unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, a2, v23, 3, 3) )
    {
      v25 = v27;
      if ( (__int64 *)*v27 != &v26 )
LABEL_17:
        __fastfail(3u);
      *(_QWORD *)(v24 + 8) = v27;
      *(_QWORD *)v24 = &v26;
      *v25 = v24;
      v27 = (__int64 *)v24;
    }
    else
    {
      *(_WORD *)(v24 + 46) = 0;
    }
  }
  v11 = *(_QWORD **)(a2 + 24);
  while ( v11 != (_QWORD *)(a2 + 24) )
  {
    v20 = (int)v11;
    v11 = (_QWORD *)*v11;
    RtlpHpLfhOwnerMoveSubsegment(a1, a2, v20, 3, 2);
    v22 = v27;
    if ( (__int64 *)*v27 != &v26 )
      goto LABEL_17;
    v21[1] = (__int64)v27;
    *v21 = (__int64)&v26;
    *v22 = (__int64)v21;
    v27 = v21;
  }
  v12 = (int)RtlpHpLfhHeatMapQuery(a1, a1 + 192, v6) < 1;
  v13 = 8;
  if ( v12 )
    v13 = 4;
  RtlpHpLfhBucketAddSubsegment(a1, v6, &v26, (2 * (a4 & 1)) | (unsigned int)v13);
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive(v6 + 10);
  v14 = v6 + 11;
  v15 = *(unsigned __int16 *)(a2 + 18);
  if ( *(_WORD *)(a2 + 16) )
    v16 = (_RTL_SRWLOCK *)(a1 + (*(unsigned __int16 *)(a2 + 16) << 6) + 16LL);
  else
    v16 = v6 + 11;
  if ( *(_WORD *)(a2 + 18) )
    v14 = (_RTL_SRWLOCK *)(a1 + (unsigned int)(v15 << 6) + 16LL);
  *(_WORD *)&v14->0 = *(_WORD *)(a2 + 16);
  WORD1(v16->Value) = v15;
  if ( (a4 & 1) == 0 )
    RtlReleaseSRWLockExclusive(v6 + 10);
  *(_BYTE *)(a2 + 1) = -1;
  LOBYTE(v9) = *(_QWORD *)(a2 + 40) != a2 + 40;
  RtlpHpLfhContextMetadataFree(a1, a2, (unsigned int)(v9 + 2));
  v17 = (unsigned __int64)LOBYTE(v6->Value) >> 1;
  v18 = *(unsigned __int16 *)(a1 + 2 * (v17 + ((unsigned __int64)v28 << 7)) + 1472);
  *(_WORD *)(a1 + (v7 << 6) + 2 * v17) = v18;
  return a1 + (v18 << 6);
}
