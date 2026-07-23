/*
 * XREFs of ExInitializePagedHeaps @ 0x14065838C
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     ExCreateHeap @ 0x140658340 (ExCreateHeap.c)
 *     RtlpDynamicLookasideInitialize @ 0x1406A2BC8 (RtlpDynamicLookasideInitialize.c)
 */

__int64 ExInitializePagedHeaps()
{
  unsigned int i; // edi
  __int64 v1; // r14
  int v2; // ecx
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rax
  __int128 v6; // xmm1
  __int64 v7; // rax
  __int128 v9; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF

  v10 = 0LL;
  for ( i = 0; ; ++i )
  {
    v9 = 0LL;
    LOBYTE(v9) = 2;
    if ( i >= dword_140E6BE10 )
      break;
    BYTE2(v9) = i;
    v1 = 8384LL * i;
    v2 = ExCreateHeap(&v9, 0x400000LL, &v10);
    if ( v2 < 0 )
      return (unsigned int)v2;
    v3 = v10;
    if ( PoolForceFullDecommit )
    {
      *(_BYTE *)(v10 + 333) |= 8u;
      *(_BYTE *)(v3 + 525) |= 8u;
    }
    *(_QWORD *)((char *)&ExPoolState + v1 + 14672) = v3;
    RtlpDynamicLookasideInitialize((char *)&ExPoolState + v1 + 14720);
    *(_QWORD *)(v3 + 56) = (char *)&ExPoolState + v1 + 14720;
    v9 = 0LL;
    BYTE2(v9) = i;
    LOBYTE(v9) = 10;
    v2 = ExCreateHeap(&v9, 0x400000LL, &v10);
    if ( v2 < 0 )
      return (unsigned int)v2;
    v4 = v10;
    *(_QWORD *)((char *)&ExPoolState + v1 + 14680) = v10;
    *(_BYTE *)(v4 + 333) |= 8u;
    *(_BYTE *)(v4 + 525) |= 8u;
  }
  v2 = ExCreateHeap(&v9, 0x400000LL, &v10);
  if ( v2 >= 0 )
  {
    v5 = v10;
    v9 = 0LL;
    LOBYTE(v9) = 10;
    v6 = v9;
    *(_BYTE *)(v10 + 333) |= 8u;
    *(_BYTE *)(v5 + 525) |= 8u;
    qword_140EEEE50 = v5;
    v9 = v6;
    v2 = ExCreateHeap(&v9, 0x400000LL, &v10);
    if ( v2 >= 0 )
    {
      v7 = v10;
      *(_BYTE *)(v10 + 333) |= 8u;
      *(_BYTE *)(v7 + 525) |= 8u;
      qword_140EEEE58 = v7;
    }
  }
  return (unsigned int)v2;
}
