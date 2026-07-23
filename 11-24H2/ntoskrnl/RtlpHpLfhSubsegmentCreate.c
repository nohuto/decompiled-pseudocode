/*
 * XREFs of RtlpHpLfhSubsegmentCreate @ 0x1404E751C
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpLfhSubsegmentInitialize @ 0x1403D8348 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhSubsegmentComputeCommitUnit @ 0x1403D9204 (RtlpHpLfhSubsegmentComputeCommitUnit.c)
 *     RtlpCalculateSubsegmentSizeIndex @ 0x140479B20 (RtlpCalculateSubsegmentSizeIndex.c)
 *     RtlpHpLfhBucketComputeNewSubsegmentBlockCount @ 0x140494388 (RtlpHpLfhBucketComputeNewSubsegmentBlockCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSubsegmentCreate(_QWORD *a1, unsigned __int8 *a2, int a3)
{
  __int64 v3; // rbx
  int v7; // r15d
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // r8d
  unsigned int v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // r9d
  unsigned int v16; // eax
  unsigned __int64 v17; // rbp
  unsigned int v18; // r15d
  signed __int32 v20[8]; // [rsp+0h] [rbp-78h] BYREF

  v3 = 0LL;
  v7 = (unsigned __int16)RtlpBucketBlockSizes[(*a2 >> 1) + 1];
  v8 = RtlpHpLfhBucketComputeNewSubsegmentBlockCount(a2, a3);
  v9 = (8 * (((unsigned __int64)v8 + 63) >> 6) + 79) & 0xFFFFFFF0;
  v10 = RtlpCalculateSubsegmentSizeIndex(v9 + 2 * ((v9 + v7 * v8 + 4095) >> 12) + v7 * v8);
  if ( v10 <= 0xC )
    LOBYTE(v10) = 12;
  v13 = 1 << v10;
  if ( v11 <= v12 >> 6 )
  {
    v14 = RtlpCalculateSubsegmentSizeIndex(v12);
    if ( v14 <= v15 )
      LOBYTE(v14) = v15;
    v16 = 1 << v14;
    if ( v13 > v16 )
      v13 = v16;
  }
  v17 = guard_dispatch_icall_no_overrides(*a1, v13);
  if ( v17 )
  {
    if ( a3 >= 1 )
      v18 = v13;
    else
      v18 = RtlpHpLfhSubsegmentComputeCommitUnit(v13, v7);
    if ( (int)guard_dispatch_icall_no_overrides(*a1, v17) >= 0 )
    {
      RtlpHpLfhSubsegmentInitialize(v17, v13, v18, a3, a2, (__int64)a1, 1);
      _InterlockedOr(v20, 0);
      _InterlockedAdd64((volatile signed __int64 *)a2 + 8, 1uLL);
      _InterlockedAdd64((volatile signed __int64 *)a2 + 7, *(unsigned __int16 *)(v17 + 34));
      return v17;
    }
    else
    {
      guard_dispatch_icall_no_overrides(*a1, v17);
    }
  }
  return v3;
}
