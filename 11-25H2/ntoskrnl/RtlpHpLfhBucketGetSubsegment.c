/*
 * XREFs of RtlpHpLfhBucketGetSubsegment @ 0x14044FFDC
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403C89FC (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140212CB0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x14031FBD0 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1403C6CA0 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x1403C7710 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x1403C8420 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x1403C8554 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpLfhSubsegmentReformatAsSingle @ 0x140450138 (RtlpHpLfhSubsegmentReformatAsSingle.c)
 */

__int64 *__fastcall RtlpHpLfhBucketGetSubsegment(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rbp
  char v7; // r15
  __int64 *Subsegment; // rax
  __int64 *v9; // rbx
  int v10; // eax
  volatile __int32 *v12[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v13[2]; // [rsp+40h] [rbp-28h] BYREF

  v3 = (_QWORD *)(a2 + 24);
  if ( (_QWORD *)*v3 == v3 && !*(_QWORD *)(a2 + 8) )
    return 0LL;
  v7 = RtlpHpAcquireLockExclusive((int *)(a2 + 16), *(unsigned __int8 *)(a1 + 65));
  while ( 1 )
  {
    Subsegment = (__int64 *)RtlpHpLfhOwnerGetSubsegment((ULONG_PTR *)a1, a2);
    v9 = Subsegment;
    if ( Subsegment )
      break;
    v12[1] = (volatile __int32 *)v12;
    v12[0] = (volatile __int32 *)v12;
    RtlpHpLfhOwnerRunMaintenance(a1, a2, v12, 0);
    if ( (_QWORD *)*v3 == v3 )
    {
      RtlpHpReleaseLockExclusive(a2 + 16, *(unsigned __int8 *)(a1 + 65), v7);
      return v9;
    }
  }
  RtlpHpLfhOwnerMoveSubsegment(a1, (char *)a2, Subsegment, 3, 0);
  RtlpHpReleaseLockExclusive(a2 + 16, *(unsigned __int8 *)(a1 + 65), v7);
  if ( a3 == 2 || a3 >= 1 && *((_BYTE *)v9 + 39) > 1u )
  {
    v10 = RtlpHpLfhSubsegmentReformatAsSingle(a1, v9);
    if ( a3 == 2 )
    {
      if ( v10 >= 0 )
      {
        *((_BYTE *)v9 + 51) |= 1u;
        return v9;
      }
      v13[1] = v9;
      *v9 = (__int64)v13;
      v13[0] = v9;
      v9[1] = (__int64)v13;
      RtlpHpLfhBucketAddSubsegment(a1, a2, v13, 0);
      return 0LL;
    }
  }
  return v9;
}
