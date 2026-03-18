/*
 * XREFs of RtlpHpLfhBucketGetSubsegment @ 0x1402B55B8
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14020D790 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1402B5B00 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x1402B6864 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x1402B6AE8 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhSubsegmentReformatAsSingle @ 0x140459378 (RtlpHpLfhSubsegmentReformatAsSingle.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14045CC3C (RtlpHpLfhBucketAddSubsegment.c)
 */

__int64 __fastcall RtlpHpLfhBucketGetSubsegment(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  int v4; // r14d
  __int64 Subsegment; // rax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  _QWORD v14[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-28h] BYREF

  v3 = (_QWORD *)(a2 + 24);
  v4 = a3;
  if ( (_QWORD *)*v3 == v3 && !*(_QWORD *)(a2 + 8) )
    return 0LL;
  RtlpHpAcquireLockExclusive((int *)(a2 + 16), *(unsigned __int8 *)(a1 + 65), a3);
  while ( 1 )
  {
    Subsegment = RtlpHpLfhOwnerGetSubsegment(a1, a2);
    v8 = Subsegment;
    if ( Subsegment )
      break;
    v14[1] = v14;
    v14[0] = v14;
    RtlpHpLfhOwnerRunMaintenance(a1, a2, v14, 0LL, v11, v13);
    if ( (_QWORD *)*v3 == v3 )
    {
      RtlpHpReleaseLockExclusive(a2 + 16);
      return v8;
    }
  }
  RtlpHpLfhOwnerMoveSubsegment(a1, a2, Subsegment, 3, 0);
  RtlpHpReleaseLockExclusive(a2 + 16);
  if ( v4 == 2 || v4 >= 1 && *(_BYTE *)(v8 + 39) > 1u )
  {
    v9 = RtlpHpLfhSubsegmentReformatAsSingle(a1, v8);
    if ( v4 == 2 )
    {
      if ( v9 < 0 )
      {
        v15[1] = v8;
        *(_QWORD *)v8 = v15;
        v15[0] = v8;
        *(_QWORD *)(v8 + 8) = v15;
        RtlpHpLfhBucketAddSubsegment(a1, a2, v15, 0LL, v12, v13);
        return 0LL;
      }
      *(_BYTE *)(v8 + 51) |= 1u;
    }
  }
  return v8;
}
