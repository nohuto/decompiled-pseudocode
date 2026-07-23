/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x1404322C0
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x140432100 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x1404322C0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x14060428C (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     RtlpHpReleaseLockShared @ 0x140219598 (RtlpHpReleaseLockShared.c)
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14035EA3C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1403D8700 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1403D8DE0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpAcquireLockShared @ 0x1403D9B14 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhOwnerCompact @ 0x1404322C0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhBucketGetSlotInfo @ 0x1404324D0 (RtlpHpLfhBucketGetSlotInfo.c)
 *     RtlpHpLfhSlotActiveSubsegmentReset @ 0x14044E4E8 (RtlpHpLfhSlotActiveSubsegmentReset.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall RtlpHpLfhOwnerCompact(unsigned __int8 *a1, __int64 a2, unsigned int a3)
{
  unsigned __int8 *v6; // r14
  __int64 v7; // rbp
  char v8; // r15
  unsigned int v9; // edi
  char v10; // r9
  KIRQL v11; // bp
  __int64 i; // rdi
  unsigned int SlotInfo; // eax
  unsigned __int16 *v14; // rdi
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
        v6 = &a1[64 * (unsigned __int64)*v14];
        RtlpHpLfhOwnerCompact(a1, v6, a3);
        v14 += 2;
        --v15;
      }
      while ( v15 );
    }
  }
  else
  {
    v6 = (unsigned __int8 *)a2;
    v7 = (__int64)&a1[64 * (unsigned __int64)*(unsigned __int16 *)(a2 + 2)];
  }
  if ( *(_QWORD *)(a2 + 24) != a2 + 24 || *(_QWORD *)(a2 + 40) != a2 + 40 )
  {
    v16[0] = (volatile __int32 *)v16;
    v8 = 0;
    v16[1] = (volatile __int32 *)v16;
    v9 = a3 != 0 ? 3 : 7;
    if ( (*(_BYTE *)a2 & 1) != 0 || !*(_WORD *)(a2 + 4) )
      v8 = RtlpHpAcquireLockExclusive((int *)(a2 + 16), a1[65]);
    if ( ((unsigned __int8)~*(_BYTE *)a2 & ((v9 & 4) != 0)) != 0 )
      RtlpHpLfhSlotActiveSubsegmentReset(v6);
    RtlpHpLfhOwnerRunMaintenance((__int64)a1, a2, v16, v9);
    if ( (*(_BYTE *)a2 & 1) != 0 || !*(_WORD *)(a2 + 4) )
      RtlpHpReleaseLockExclusive(a2 + 16, a1[65], v8);
    if ( (*(_BYTE *)a2 & 1) != 0 || (v10 = 2, !*(_WORD *)(a2 + 4)) )
      v10 = 0;
    RtlpHpLfhBucketAddSubsegment((__int64)a1, v7, v16, v10);
    if ( (*(_BYTE *)a2 & 1) != 0 || !*(_WORD *)(a2 + 4) )
    {
      v11 = RtlpHpAcquireLockShared((volatile LONG *)(a2 + 16), a1[65]);
      for ( i = *(_QWORD *)(a2 + 24); i != a2 + 24; i = *(_QWORD *)i )
      {
        if ( *(_BYTE *)(i + 39) != 1 )
          RtlpHpLfhSubsegmentDecommitPages(a1, i, -1, 1u);
      }
      RtlpHpReleaseLockShared((PEX_SPIN_LOCK)(a2 + 16), a1[65], v11);
    }
  }
}
