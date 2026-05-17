/*
 * XREFs of RtlpHpLfhBucketGetSubsegment @ 0x18004B540
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpLfhOwnerGetSubsegment @ 0x18004CC40 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x18004D870 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18004E450 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18004E6E0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentReformatAsSingle @ 0x1800DFFC4 (RtlpHpLfhSubsegmentReformatAsSingle.c)
 */

__int64 __fastcall RtlpHpLfhBucketGetSubsegment(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rdi
  __int64 Subsegment; // rax
  __int64 v9; // r15
  int v10; // eax
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v12[5]; // [rsp+40h] [rbp-28h] BYREF

  v3 = (_QWORD *)(a2 + 24);
  if ( (_QWORD *)*v3 == v3 && !*(_QWORD *)(a2 + 8) )
    return 0LL;
  RtlAcquireSRWLockExclusive(a2 + 16);
  while ( 1 )
  {
    Subsegment = RtlpHpLfhOwnerGetSubsegment(a1, a2);
    v9 = Subsegment;
    if ( Subsegment )
      break;
    v11[1] = v11;
    v11[0] = v11;
    RtlpHpLfhOwnerRunMaintenance(a1, a2, v11, 0LL);
    if ( (_QWORD *)*v3 == v3 )
    {
      RtlReleaseSRWLockExclusive(a2 + 16);
      return 0LL;
    }
  }
  RtlpHpLfhOwnerMoveSubsegment(a1, a2, Subsegment, 3, 0);
  RtlReleaseSRWLockExclusive(a2 + 16);
  if ( a3 != 2 && (a3 < 1 || *(_BYTE *)(v9 + 39) <= 1u) )
    return v9;
  v10 = RtlpHpLfhSubsegmentReformatAsSingle(a1, v9);
  if ( a3 != 2 )
    return v9;
  if ( v10 >= 0 )
  {
    *(_BYTE *)(v9 + 51) |= 1u;
    return v9;
  }
  v12[1] = v9;
  *(_QWORD *)v9 = v12;
  v12[0] = v9;
  *(_QWORD *)(v9 + 8) = v12;
  RtlpHpLfhBucketAddSubsegment(a1, a2, v12, 0LL);
  return 0LL;
}
