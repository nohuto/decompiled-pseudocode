/*
 * XREFs of RtlpHpLfhBucketGetSubsegment @ 0x180061120
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpLfhOwnerGetSubsegment @ 0x180062820 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180063450 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180064030 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x1800642C0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentReformatAsSingle @ 0x1800DB0C4 (RtlpHpLfhSubsegmentReformatAsSingle.c)
 */

__int64 __fastcall RtlpHpLfhBucketGetSubsegment(__int64 a1, _RTL_SRWLOCK *a2, int a3)
{
  unsigned __int64 *v3; // rdi
  __int64 Subsegment; // rax
  __int64 v9; // r15
  int v10; // eax
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v12[5]; // [rsp+40h] [rbp-28h] BYREF

  v3 = (unsigned __int64 *)&a2[3];
  if ( (unsigned __int64 *)*v3 == v3 && !a2[1].Value )
    return 0LL;
  RtlAcquireSRWLockExclusive(a2 + 2);
  while ( 1 )
  {
    Subsegment = RtlpHpLfhOwnerGetSubsegment(a1, a2);
    v9 = Subsegment;
    if ( Subsegment )
      break;
    v11[1] = v11;
    v11[0] = v11;
    RtlpHpLfhOwnerRunMaintenance(a1, a2, v11, 0LL);
    if ( (unsigned __int64 *)*v3 == v3 )
    {
      RtlReleaseSRWLockExclusive(a2 + 2);
      return 0LL;
    }
  }
  RtlpHpLfhOwnerMoveSubsegment(a1, (_DWORD)a2, Subsegment, 3, 0);
  RtlReleaseSRWLockExclusive(a2 + 2);
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
