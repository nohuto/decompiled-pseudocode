/*
 * XREFs of CmpInitializeDelayedCloseTable @ 0x1407DE094
 * Callers:
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     KeInitializeGuardedMutex @ 0x140452720 (KeInitializeGuardedMutex.c)
 */

__int64 *CmpInitializeDelayedCloseTable()
{
  __int64 *result; // rax
  unsigned __int64 v1; // rax
  __int64 v2; // r8
  __int128 *v3; // r10
  __int64 v4; // r11
  int v5; // r9d
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // r10
  const char *v10; // rcx
  unsigned int v11; // r9d
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int128 *v16; // rdx
  __int64 v17; // rax
  int v18; // r9d
  __int64 v19; // rax

  CmpDelayCloseWorkItem.Parameter = 0LL;
  CmpDelayCloseWorkItem.List.Flink = 0LL;
  CmpDelayCloseWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpDelayCloseWorker;
  KeInitializeGuardedMutex(&CmpDelayedCloseTableLock);
  result = &CmpDelayedLRUListHead;
  qword_140EF5708 = (__int64)&CmpDelayedLRUListHead;
  CmpDelayedLRUListHead = (__int64)&CmpDelayedLRUListHead;
  _mm_lfence();
  if ( !qword_140E62680 )
  {
    v1 = __rdtsc();
    v2 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v1) << 32) | (unsigned int)v1) >> 4)) ^ 0x584LL;
    qword_140E62680 = v2;
    if ( !v2 )
    {
      v2 = 1LL;
      qword_140E62680 = 1LL;
    }
    v3 = &KeServiceDescriptorTable;
    v4 = (41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x584LL;
    qword_140E62688 = v4;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v5 = 64;
    v6 = v2;
    v7 = 8LL;
    do
    {
      v6 = __ROR8__(v6 - *(_QWORD *)v3, v4);
      v3 = (__int128 *)((char *)v3 + 8);
      v5 -= 8;
      --v7;
    }
    while ( v7 );
    for ( ; v5; --v5 )
    {
      v8 = *(unsigned __int8 *)v3;
      v3 = (__int128 *)((char *)v3 + 1);
      v6 = __ROR8__(v6 - v8, v4);
    }
    v9 = (_QWORD *)KeServiceDescriptorTable;
    v10 = (const char *)KeServiceDescriptorTable;
    qword_140E62698 = v6;
    v11 = 4 * xmmword_1412018D0;
    v12 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_1412018D0);
    if ( (unsigned __int64)KeServiceDescriptorTable < v12 )
    {
      do
      {
        _mm_prefetch(v10, 0);
        v10 += 64;
      }
      while ( (unsigned __int64)v10 < v12 );
    }
    v13 = v2;
    if ( v11 >= 8 )
    {
      v14 = (unsigned __int64)v11 >> 3;
      do
      {
        v13 = __ROR8__(v13 - *v9++, v4);
        v11 -= 8;
        --v14;
      }
      while ( v14 );
    }
    for ( ; v11; --v11 )
    {
      v15 = *(unsigned __int8 *)v9;
      v9 = (_QWORD *)((char *)v9 + 1);
      v13 = __ROR8__(v13 - v15, v4);
    }
    qword_140E626A0 = v13;
    v16 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v17 = 4LL;
    v18 = 32;
    do
    {
      v2 = __ROR8__(v2 - *(_QWORD *)v16, v4);
      v16 = (__int128 *)((char *)v16 + 8);
      v18 -= 8;
      --v17;
    }
    while ( v17 );
    for ( ; v18; --v18 )
    {
      v19 = *(unsigned __int8 *)v16;
      v16 = (__int128 *)((char *)v16 + 1);
      v2 = __ROR8__(v2 - v19, v4);
    }
    qword_140E626A8 = v2;
    result = (__int64 *)(KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL);
    qword_140E62690 = (__int64)result;
  }
  return result;
}
