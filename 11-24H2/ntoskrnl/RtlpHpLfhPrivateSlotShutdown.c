/*
 * XREFs of RtlpHpLfhPrivateSlotShutdown @ 0x140606D74
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextTlsCleanup @ 0x140606890 (RtlpHpLfhContextTlsCleanup.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x140606C4C (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14020D790 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhHeatMapQuery @ 0x1402B4550 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1402B5B00 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x1402B6864 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhSlotActiveSubsegmentReset @ 0x1404597B8 (RtlpHpLfhSlotActiveSubsegmentReset.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14045CC3C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhContextMetadataFree @ 0x140606834 (RtlpHpLfhContextMetadataFree.c)
 */

__int64 __fastcall RtlpHpLfhPrivateSlotShutdown(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  unsigned __int8 *v6; // r13
  unsigned __int16 v7; // bx
  int v9; // r9d
  int v10; // esi
  __int64 *v11; // r14
  __int64 *v12; // r8
  __int64 v13; // r8
  __int64 ***v14; // rax
  __int64 *v15; // r14
  __int64 *v16; // r8
  __int64 ***v17; // r8
  __int64 ***v18; // rax
  bool v19; // cc
  char v20; // r9
  __int64 v21; // r8
  char v22; // r10
  _WORD *v23; // rdx
  int v24; // r8d
  unsigned __int8 *v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int64 *v29; // [rsp+30h] [rbp-10h] BYREF
  __int64 ***v30; // [rsp+38h] [rbp-8h]
  unsigned __int8 v31; // [rsp+94h] [rbp+54h]

  v31 = BYTE4(a3);
  v4 = *(unsigned __int16 *)(a2 + 2);
  v30 = (__int64 ***)&v29;
  v6 = (unsigned __int8 *)(a1 + (v4 << 6));
  v29 = (__int64 *)&v29;
  v7 = a3;
  RtlpHpLfhSlotActiveSubsegmentReset(a2);
  RtlpHpLfhOwnerRunMaintenance(a1, a2, (volatile __int32 **)&v29, 2u);
  v10 = 0;
  v11 = *(__int64 **)(a2 + 40);
  while ( v11 != (__int64 *)(a2 + 40) )
  {
    v12 = v11;
    v11 = (__int64 *)*v11;
    if ( (unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, (char *)a2, v12, 3, 3) )
    {
      v14 = v30;
      if ( *v30 != &v29 )
LABEL_17:
        __fastfail(3u);
      *(_QWORD *)(v13 + 8) = v30;
      *(_QWORD *)v13 = &v29;
      *v14 = (__int64 **)v13;
      v30 = (__int64 ***)v13;
    }
    else
    {
      *(_WORD *)(v13 + 46) = 0;
    }
  }
  v15 = *(__int64 **)(a2 + 24);
  while ( v15 != (__int64 *)(a2 + 24) )
  {
    v16 = v15;
    v15 = (__int64 *)*v15;
    RtlpHpLfhOwnerMoveSubsegment(a1, (char *)a2, v16, 3, 2);
    v18 = v30;
    if ( *v30 != &v29 )
      goto LABEL_17;
    v17[1] = (__int64 **)v30;
    *v17 = &v29;
    *v18 = (__int64 **)v17;
    v30 = v17;
  }
  v19 = (int)RtlpHpLfhHeatMapQuery(a1, a1 + 192, v6, v9) < 1;
  v20 = 8;
  if ( v19 )
    v20 = 4;
  RtlpHpLfhBucketAddSubsegment(a1, (__int64)v6, &v29, (2 * (a4 & 1)) | v20);
  v22 = 0;
  if ( (a4 & 1) == 0 )
    v22 = RtlpHpAcquireLockExclusive((int *)v6 + 20, *(unsigned __int8 *)(a1 + 65), v21);
  v23 = v6 + 88;
  v24 = *(unsigned __int16 *)(a2 + 18);
  if ( *(_WORD *)(a2 + 16) )
    v25 = (unsigned __int8 *)(a1 + (*(unsigned __int16 *)(a2 + 16) << 6) + 16LL);
  else
    v25 = v6 + 88;
  if ( *(_WORD *)(a2 + 18) )
    v23 = (_WORD *)(a1 + (unsigned int)(v24 << 6) + 16LL);
  *v23 = *(_WORD *)(a2 + 16);
  *((_WORD *)v25 + 1) = v24;
  if ( (a4 & 1) == 0 )
    RtlpHpReleaseLockExclusive((ULONG_PTR)(v6 + 80), *(unsigned __int8 *)(a1 + 65), v22);
  *(_BYTE *)(a2 + 1) = -1;
  LOBYTE(v10) = *(_QWORD *)(a2 + 40) != a2 + 40;
  RtlpHpLfhContextMetadataFree(a1, a2, (unsigned int)(v10 + 2));
  v26 = (unsigned __int64)*v6 >> 1;
  v27 = *(unsigned __int16 *)(a1 + 2 * (v26 + ((unsigned __int64)v31 << 7)) + 1472);
  *(_WORD *)(a1 + (v7 << 6) + 2 * v26) = v27;
  return a1 + (v27 << 6);
}
