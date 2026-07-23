/*
 * XREFs of RtlpHpLfhPrivateSlotShutdown @ 0x1800334C4
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x180033990 (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpLfhContextTlsCleanup @ 0x1800FCC00 (RtlpHpLfhContextTlsCleanup.c)
 * Callees:
 *     RtlpHpLfhContextMetadataFree @ 0x180009A2C (RtlpHpLfhContextMetadataFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180032300 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180033000 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180033290 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSlotActiveSubsegmentReset @ 0x180033700 (RtlpHpLfhSlotActiveSubsegmentReset.c)
 *     RtlpHpLfhHeatMapQuery @ 0x180033740 (RtlpHpLfhHeatMapQuery.c)
 */

_RTL_SRWLOCK *__fastcall RtlpHpLfhPrivateSlotShutdown(_RTL_SRWLOCK *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  _RTL_SRWLOCK *v6; // r13
  unsigned __int16 v7; // bx
  int v9; // edi
  __int64 *v10; // rsi
  __int64 *v11; // rsi
  bool v12; // cc
  char v13; // r9
  _RTL_SRWLOCK *v14; // rcx
  int v15; // r8d
  _RTL_SRWLOCK *v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *v20; // r8
  __int64 ***v21; // r8
  __int64 ***v22; // rax
  __int64 *v23; // r8
  __int64 v24; // r8
  __int64 ***v25; // rax
  __int64 *v26; // [rsp+30h] [rbp-10h] BYREF
  __int64 ***v27; // [rsp+38h] [rbp-8h]
  unsigned __int8 v28; // [rsp+94h] [rbp+54h]

  v28 = BYTE4(a3);
  v4 = *(unsigned __int16 *)(a2 + 2);
  v27 = (__int64 ***)&v26;
  v6 = &a1[8 * v4];
  v26 = (__int64 *)&v26;
  v7 = a3;
  RtlpHpLfhSlotActiveSubsegmentReset(a2);
  RtlpHpLfhOwnerRunMaintenance((unsigned __int64)a1, a2, (unsigned __int64 *)&v26, 2);
  v9 = 0;
  v10 = *(__int64 **)(a2 + 40);
  while ( v10 != (__int64 *)(a2 + 40) )
  {
    v23 = v10;
    v10 = (__int64 *)*v10;
    if ( (unsigned int)RtlpHpLfhOwnerMoveSubsegment((__int64)a1, (char *)a2, v23, 3, 3) )
    {
      v25 = v27;
      if ( *v27 != &v26 )
LABEL_17:
        __fastfail(3u);
      *(_QWORD *)(v24 + 8) = v27;
      *(_QWORD *)v24 = &v26;
      *v25 = (__int64 **)v24;
      v27 = (__int64 ***)v24;
    }
    else
    {
      *(_WORD *)(v24 + 46) = 0;
    }
  }
  v11 = *(__int64 **)(a2 + 24);
  while ( v11 != (__int64 *)(a2 + 24) )
  {
    v20 = v11;
    v11 = (__int64 *)*v11;
    RtlpHpLfhOwnerMoveSubsegment((__int64)a1, (char *)a2, v20, 3, 2);
    v22 = v27;
    if ( *v27 != &v26 )
      goto LABEL_17;
    v21[1] = (__int64 **)v27;
    *v21 = &v26;
    *v22 = (__int64 **)v21;
    v27 = v21;
  }
  v12 = (int)RtlpHpLfhHeatMapQuery(a1, &a1[24], v6) < 1;
  v13 = 8;
  if ( v12 )
    v13 = 4;
  RtlpHpLfhBucketAddSubsegment((unsigned __int64)a1, (__int64)v6, &v26, (2 * (a4 & 1)) | v13);
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive(v6 + 10);
  v14 = v6 + 11;
  v15 = *(unsigned __int16 *)(a2 + 18);
  if ( *(_WORD *)(a2 + 16) )
    v16 = &a1[8 * *(unsigned __int16 *)(a2 + 16) + 2];
  else
    v16 = v6 + 11;
  if ( *(_WORD *)(a2 + 18) )
    v14 = (_RTL_SRWLOCK *)((char *)a1 + (unsigned int)(v15 << 6) + 16);
  *(_WORD *)&v14->0 = *(_WORD *)(a2 + 16);
  WORD1(v16->Value) = v15;
  if ( (a4 & 1) == 0 )
    RtlReleaseSRWLockExclusive(v6 + 10);
  *(_BYTE *)(a2 + 1) = -1;
  LOBYTE(v9) = *(_QWORD *)(a2 + 40) != a2 + 40;
  RtlpHpLfhContextMetadataFree(a1, (unsigned __int64 *)a2, v9 + 2);
  v17 = (unsigned __int64)LOBYTE(v6->Value) >> 1;
  v18 = *((unsigned __int16 *)&a1[32 * (unsigned __int64)v28 + 184].Value + v17);
  *((_WORD *)&a1[8 * v7].0 + v17) = v18;
  return &a1[8 * v18];
}
