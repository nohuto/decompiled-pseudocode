/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x1403C801C
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x1403C801C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhContextCompact @ 0x1403C8290 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x1405FA90C (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140212CB0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x14031FBD0 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpReleaseLockShared @ 0x14035E3FC (RtlpHpReleaseLockShared.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1403C6CA0 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhOwnerListCompact @ 0x1403C7004 (RtlpHpLfhOwnerListCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x1403C801C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhBucketGetSlotInfo @ 0x1403C8210 (RtlpHpLfhBucketGetSlotInfo.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x1403C8420 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpAcquireLockShared @ 0x1404505D0 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhSlotActiveSubsegmentReset @ 0x14045C5FC (RtlpHpLfhSlotActiveSubsegmentReset.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall RtlpHpLfhOwnerCompact(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  char v8; // r15
  unsigned int v9; // ebx
  __int64 v10; // r9
  KIRQL v11; // bl
  __int64 v12; // rdx
  unsigned int SlotInfo; // eax
  unsigned __int16 *v14; // rbx
  __int64 v15; // r15
  volatile __int32 *v16[2]; // [rsp+20h] [rbp-158h] BYREF
  _BYTE v17[256]; // [rsp+30h] [rbp-148h] BYREF

  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v7 = a2;
    SlotInfo = RtlpHpLfhBucketGetSlotInfo(a1, a2, v17);
    v6 = 0LL;
    if ( SlotInfo )
    {
      v14 = (unsigned __int16 *)v17;
      v15 = SlotInfo;
      do
      {
        v6 = a1 + ((unsigned __int64)*v14 << 6);
        RtlpHpLfhOwnerCompact(a1, v6, a3);
        v14 += 2;
        --v15;
      }
      while ( v15 );
    }
  }
  else
  {
    v6 = a2;
    v7 = a1 + ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) << 6);
  }
  if ( *(_QWORD *)(a2 + 24) != a2 + 24 || *(_QWORD *)(a2 + 40) != a2 + 40 )
  {
    v16[0] = (volatile __int32 *)v16;
    v8 = 0;
    v16[1] = (volatile __int32 *)v16;
    v9 = a3 != 0 ? 3 : 7;
    if ( (*(_BYTE *)a2 & 1) != 0 || !*(_WORD *)(a2 + 4) )
      v8 = RtlpHpAcquireLockExclusive((int *)(a2 + 16), *(unsigned __int8 *)(a1 + 65));
    if ( ((unsigned __int8)~*(_BYTE *)a2 & ((v9 & 4) != 0)) != 0 )
      RtlpHpLfhSlotActiveSubsegmentReset(v6);
    RtlpHpLfhOwnerRunMaintenance(a1, a2, v16, v9);
    if ( (*(_BYTE *)a2 & 1) != 0 || !*(_WORD *)(a2 + 4) )
      RtlpHpReleaseLockExclusive(a2 + 16, *(unsigned __int8 *)(a1 + 65), v8);
    if ( (*(_BYTE *)a2 & 1) != 0 || (v10 = 2LL, !*(_WORD *)(a2 + 4)) )
      v10 = 0LL;
    ((void (__fastcall *)(__int64, __int64, volatile __int32 **, __int64))RtlpHpLfhBucketAddSubsegment)(
      a1,
      v7,
      v16,
      v10);
    if ( (*(_BYTE *)a2 & 1) != 0 || !*(_WORD *)(a2 + 4) )
    {
      v11 = RtlpHpAcquireLockShared(a2 + 16, *(unsigned __int8 *)(a1 + 65));
      RtlpHpLfhOwnerListCompact(a1, v12, (__int64 **)(a2 + 24));
      RtlpHpReleaseLockShared((volatile LONG *)(a2 + 16), *(unsigned __int8 *)(a1 + 65), v11);
    }
  }
}
