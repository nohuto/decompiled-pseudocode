/*
 * XREFs of ExInitializePoolHeapManagement @ 0x140658520
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     ExCreateHeap @ 0x140658340 (ExCreateHeap.c)
 *     ExpDetermineLargePagePolicy @ 0x140658784 (ExpDetermineLargePagePolicy.c)
 *     RtlHpKInitializeHeapManager @ 0x140658BE8 (RtlHpKInitializeHeapManager.c)
 *     RtlpDynamicLookasideInitialize @ 0x1406A2BC8 (RtlpDynamicLookasideInitialize.c)
 *     ExInitializePoolTracker @ 0x140C445BC (ExInitializePoolTracker.c)
 *     ExpInitializePrivatePools @ 0x140C46158 (ExpInitializePrivatePools.c)
 */

__int64 __fastcall ExInitializePoolHeapManagement(unsigned int a1)
{
  __int64 result; // rax
  __int128 v3; // xmm7
  unsigned int i; // esi
  __int64 v5; // rdx
  __int64 *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // xmm0_8
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int128 v12; // [rsp+28h] [rbp-69h]
  __int128 v13; // [rsp+38h] [rbp-59h]
  __int128 v14; // [rsp+48h] [rbp-49h] BYREF
  __int128 v15; // [rsp+58h] [rbp-39h] BYREF
  __int128 v16; // [rsp+68h] [rbp-29h] BYREF
  __int128 v17; // [rsp+78h] [rbp-19h] BYREF
  __int128 v18; // [rsp+88h] [rbp-9h] BYREF
  __int64 v19; // [rsp+98h] [rbp+7h]
  __int64 v20; // [rsp+100h] [rbp+6Fh] BYREF

  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  result = RtlHpKInitializeHeapManager();
  if ( (int)result >= 0 )
  {
    RtlpHpLfhPerfFlags = 9355;
    ExpDetermineLargePagePolicy(&v18);
    v3 = v18;
    for ( i = 0; ; ++i )
    {
      v5 = 0x400000LL;
      if ( i >= dword_140E6BE10 )
        break;
      v12 = 0LL;
      LOWORD(v12) = 259;
      v6 = (__int64 *)((char *)&unk_140E6BE40 + 8384 * i);
      BYTE2(v12) = i;
      if ( *((_QWORD *)&v18 + 1) )
        v5 = 71303168LL;
      v14 = v12;
      result = ExCreateHeap(&v14, v5, &v20);
      if ( (int)result < 0 )
        return result;
      v7 = v20;
      if ( PoolForceFullDecommit )
      {
        *(_BYTE *)(v20 + 333) |= 8u;
        *(_BYTE *)(v7 + 525) |= 8u;
      }
      v6[1] = v7;
      if ( *((_QWORD *)&v18 + 1) )
      {
        v8 = v19;
        *(_OWORD *)(v7 + 200) = v3;
        *(_QWORD *)(v7 + 216) = v8;
        *(_BYTE *)(v7 + 333) = *(_BYTE *)(v7 + 333) & 0xF8 | 1;
        *(_BYTE *)(v7 + 525) = *(_BYTE *)(v7 + 525) & 0xF8 | 1;
      }
      RtlpDynamicLookasideInitialize(v6 + 528);
      *(_QWORD *)(v7 + 56) = v6 + 528;
      if ( (a1 & 0x400) != 0 )
      {
        v9 = 0LL;
        v20 = 0LL;
      }
      else
      {
        v15 = v12;
        result = ExCreateHeap(&v15, 1077936128LL, &v20);
        if ( (int)result < 0 )
          return result;
        v9 = v20;
        if ( PoolForceFullDecommit )
        {
          *(_BYTE *)(v20 + 333) |= 8u;
          *(_BYTE *)(v9 + 525) |= 8u;
        }
      }
      *v6 = v9;
    }
    v13 = 0LL;
    *(_WORD *)((char *)&v13 + 1) = 1;
    LOBYTE(v13) = 3;
    v16 = v13;
    result = ExCreateHeap(&v16, 0x400000LL, &v20);
    if ( (int)result >= 0 )
    {
      v10 = v20;
      *(_BYTE *)(v20 + 333) |= 8u;
      *(_BYTE *)(v10 + 525) |= 8u;
      qword_140EEEE48 = v10;
      if ( (a1 & 0x400) != 0 )
      {
        v11 = 0LL;
        v20 = 0LL;
      }
      else
      {
        v17 = v13;
        result = ExCreateHeap(&v17, 1077936128LL, &v20);
        if ( (int)result < 0 )
          return result;
        v11 = v20;
        *(_BYTE *)(v20 + 333) |= 8u;
        *(_BYTE *)(v11 + 525) |= 8u;
      }
      ExPoolLimitState = 0LL;
      qword_140EEEE40[0] = v11;
      qword_140E290C8 = 0LL;
      result = ExInitializePoolTracker();
      if ( (int)result >= 0 )
      {
        ExpInitializePrivatePools();
        _InterlockedOr((volatile signed __int32 *)&KeNumberProcessorsGroup0[9], a1);
        return 0LL;
      }
    }
  }
  return result;
}
