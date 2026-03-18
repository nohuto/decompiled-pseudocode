/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x1402B461C
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x1402B445C (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x1402B461C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x140606C4C (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14020D790 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockShared @ 0x140246CF4 (RtlpHpReleaseLockShared.c)
 *     RtlpHpLfhOwnerCompact @ 0x1402B461C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhBucketGetSlotInfo @ 0x1402B482C (RtlpHpLfhBucketGetSlotInfo.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1402B5B00 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402B61E0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpAcquireLockShared @ 0x14045964C (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhSlotActiveSubsegmentReset @ 0x1404597B8 (RtlpHpLfhSlotActiveSubsegmentReset.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14045CC3C (RtlpHpLfhBucketAddSubsegment.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall RtlpHpLfhOwnerCompact(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v6; // r14
  __int64 v7; // rbp
  unsigned int v8; // edi
  __int64 v9; // r9
  KIRQL v10; // bp
  __int64 *i; // rdi
  unsigned int SlotInfo; // eax
  unsigned __int16 *v13; // rdi
  __int64 v14; // r15
  __int64 v15; // [rsp+20h] [rbp-158h] BYREF
  __int64 *v16; // [rsp+28h] [rbp-150h]
  _BYTE v17[256]; // [rsp+30h] [rbp-148h] BYREF

  v3 = a3;
  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v7 = a2;
    SlotInfo = RtlpHpLfhBucketGetSlotInfo(a1, a2, v17);
    v6 = 0LL;
    if ( SlotInfo )
    {
      v13 = (unsigned __int16 *)v17;
      v14 = SlotInfo;
      do
      {
        v6 = a1 + ((unsigned __int64)*v13 << 6);
        RtlpHpLfhOwnerCompact(a1, v6, v3);
        v13 += 2;
        --v14;
      }
      while ( v14 );
    }
  }
  else
  {
    v6 = a2;
    v7 = a1 + ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) << 6);
  }
  if ( *(_QWORD *)(a2 + 24) != a2 + 24 || *(_QWORD *)(a2 + 40) != a2 + 40 )
  {
    v15 = (__int64)&v15;
    v16 = &v15;
    v8 = v3 != 0 ? 3 : 7;
    if ( (*(_BYTE *)a2 & 1) != 0 || !*(_WORD *)(a2 + 4) )
      RtlpHpAcquireLockExclusive((int *)(a2 + 16), *(unsigned __int8 *)(a1 + 65), a3);
    if ( ((unsigned __int8)~*(_BYTE *)a2 & ((v8 & 4) != 0)) != 0 )
      RtlpHpLfhSlotActiveSubsegmentReset(v6);
    ((void (__fastcall *)(__int64, __int64, __int64 *, _QWORD))RtlpHpLfhOwnerRunMaintenance)(a1, a2, &v15, v8);
    if ( (*(_BYTE *)a2 & 1) != 0 || !*(_WORD *)(a2 + 4) )
      RtlpHpReleaseLockExclusive(a2 + 16);
    if ( (*(_BYTE *)a2 & 1) != 0 || (v9 = 2LL, !*(_WORD *)(a2 + 4)) )
      v9 = 0LL;
    ((void (__fastcall *)(__int64, __int64, __int64 *, __int64))RtlpHpLfhBucketAddSubsegment)(a1, v7, &v15, v9);
    if ( (*(_BYTE *)a2 & 1) != 0 || !*(_WORD *)(a2 + 4) )
    {
      v10 = RtlpHpAcquireLockShared(a2 + 16, *(unsigned __int8 *)(a1 + 65));
      for ( i = *(__int64 **)(a2 + 24); i != (__int64 *)(a2 + 24); i = (__int64 *)*i )
      {
        if ( *((_BYTE *)i + 39) != 1 )
          RtlpHpLfhSubsegmentDecommitPages(a1, i, 0xFFFFFFFFLL, 1LL, v15, v16);
      }
      RtlpHpReleaseLockShared((PEX_SPIN_LOCK)(a2 + 16), *(unsigned __int8 *)(a1 + 65), v10);
    }
  }
}
