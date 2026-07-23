/*
 * XREFs of RtlpHpLfhPrivateSlotShutdown @ 0x140604374
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextTlsCleanup @ 0x140603ED0 (RtlpHpLfhContextTlsCleanup.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x14060428C (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14035EA3C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1403D8700 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x1403D9464 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhHeatMapQuery @ 0x1404321F4 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhSlotActiveSubsegmentReset @ 0x14044E4E8 (RtlpHpLfhSlotActiveSubsegmentReset.c)
 *     RtlpHpLfhContextMetadataFree @ 0x140603E74 (RtlpHpLfhContextMetadataFree.c)
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
  volatile __int32 ***v14; // rax
  __int64 *v15; // r14
  __int64 *v16; // r8
  volatile __int32 ***v17; // r8
  volatile __int32 ***v18; // rax
  bool v19; // cc
  char v20; // r9
  char v21; // r10
  _WORD *v22; // rdx
  int v23; // r8d
  unsigned __int8 *v24; // rcx
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  volatile __int32 *v28; // [rsp+30h] [rbp-10h] BYREF
  volatile __int32 ***v29; // [rsp+38h] [rbp-8h]
  unsigned __int8 v30; // [rsp+94h] [rbp+54h]

  v30 = BYTE4(a3);
  v4 = *(unsigned __int16 *)(a2 + 2);
  v29 = (volatile __int32 ***)&v28;
  v6 = (unsigned __int8 *)(a1 + (v4 << 6));
  v28 = (volatile __int32 *)&v28;
  v7 = a3;
  RtlpHpLfhSlotActiveSubsegmentReset(a2);
  RtlpHpLfhOwnerRunMaintenance(a1, a2, &v28, 2u);
  v10 = 0;
  v11 = *(__int64 **)(a2 + 40);
  while ( v11 != (__int64 *)(a2 + 40) )
  {
    v12 = v11;
    v11 = (__int64 *)*v11;
    if ( (unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, (char *)a2, v12, 3, 3) )
    {
      v14 = v29;
      if ( *v29 != &v28 )
LABEL_17:
        __fastfail(3u);
      *(_QWORD *)(v13 + 8) = v29;
      *(_QWORD *)v13 = &v28;
      *v14 = (volatile __int32 **)v13;
      v29 = (volatile __int32 ***)v13;
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
    v18 = v29;
    if ( *v29 != &v28 )
      goto LABEL_17;
    v17[1] = (volatile __int32 **)v29;
    *v17 = &v28;
    *v18 = (volatile __int32 **)v17;
    v29 = v17;
  }
  v19 = (int)RtlpHpLfhHeatMapQuery(a1, a1 + 192, v6, v9) < 1;
  v20 = 8;
  if ( v19 )
    v20 = 4;
  RtlpHpLfhBucketAddSubsegment(a1, (__int64)v6, &v28, (2 * (a4 & 1)) | v20);
  v21 = 0;
  if ( (a4 & 1) == 0 )
    v21 = RtlpHpAcquireLockExclusive((int *)v6 + 20, *(unsigned __int8 *)(a1 + 65));
  v22 = v6 + 88;
  v23 = *(unsigned __int16 *)(a2 + 18);
  if ( *(_WORD *)(a2 + 16) )
    v24 = (unsigned __int8 *)(a1 + (*(unsigned __int16 *)(a2 + 16) << 6) + 16LL);
  else
    v24 = v6 + 88;
  if ( *(_WORD *)(a2 + 18) )
    v22 = (_WORD *)(a1 + (unsigned int)(v23 << 6) + 16LL);
  *v22 = *(_WORD *)(a2 + 16);
  *((_WORD *)v24 + 1) = v23;
  if ( (a4 & 1) == 0 )
    RtlpHpReleaseLockExclusive((ULONG_PTR)(v6 + 80), *(unsigned __int8 *)(a1 + 65), v21);
  *(_BYTE *)(a2 + 1) = -1;
  LOBYTE(v10) = *(_QWORD *)(a2 + 40) != a2 + 40;
  RtlpHpLfhContextMetadataFree(a1, (_QWORD *)a2, v10 + 2);
  v25 = (unsigned __int64)*v6 >> 1;
  v26 = *(unsigned __int16 *)(a1 + 2 * (v25 + ((unsigned __int64)v30 << 7)) + 1472);
  *(_WORD *)(a1 + (v7 << 6) + 2 * v25) = v26;
  return a1 + (v26 << 6);
}
