/*
 * XREFs of RtlpHpLfhBucketGetSubsegment @ 0x1403D81F0
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14035EA3C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x14035EB70 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhSubsegmentReformatAsSingle @ 0x1403D7F1C (RtlpHpLfhSubsegmentReformatAsSingle.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1403D8700 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x1403D9464 (RtlpHpLfhOwnerMoveSubsegment.c)
 */

volatile __int32 *__fastcall RtlpHpLfhBucketGetSubsegment(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rbp
  char v7; // r15
  volatile __int32 *Subsegment; // rax
  volatile __int32 *v9; // rbx
  int v10; // eax
  _QWORD v12[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-28h] BYREF

  v3 = (_QWORD *)(a2 + 24);
  if ( (_QWORD *)*v3 == v3 && !*(_QWORD *)(a2 + 8) )
    return 0LL;
  v7 = RtlpHpAcquireLockExclusive((int *)(a2 + 16), *(unsigned __int8 *)(a1 + 65));
  while ( 1 )
  {
    Subsegment = RtlpHpLfhOwnerGetSubsegment(a1, a2);
    v9 = Subsegment;
    if ( Subsegment )
      break;
    v12[1] = v12;
    v12[0] = v12;
    RtlpHpLfhOwnerRunMaintenance(a1, a2, v12, 0LL);
    if ( (_QWORD *)*v3 == v3 )
    {
      RtlpHpReleaseLockExclusive(a2 + 16, *(unsigned __int8 *)(a1 + 65), v7);
      return v9;
    }
  }
  RtlpHpLfhOwnerMoveSubsegment(a1, a2, (_DWORD)Subsegment, 3, 0);
  RtlpHpReleaseLockExclusive(a2 + 16, *(unsigned __int8 *)(a1 + 65), v7);
  if ( a3 == 2 || a3 >= 1 && *((_BYTE *)v9 + 39) > 1u )
  {
    v10 = RtlpHpLfhSubsegmentReformatAsSingle((__int64 *)a1, (unsigned __int8 *)v9);
    if ( a3 == 2 )
    {
      if ( v10 < 0 )
      {
        v13[1] = v9;
        *(_QWORD *)v9 = v13;
        v13[0] = v9;
        *((_QWORD *)v9 + 1) = v13;
        RtlpHpLfhBucketAddSubsegment(a1, a2, v13, 0);
        return 0LL;
      }
      *((_BYTE *)v9 + 51) |= 1u;
    }
  }
  return v9;
}
