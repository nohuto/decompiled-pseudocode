/*
 * XREFs of ndisDmaAllocationHistogramAddEntry @ 0x140140300
 * Callers:
 *     ??1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x1401402C0 (--1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ.c)
 * Callees:
 *     ?IncrementBucket@KHistogram@@AEAAX_K@Z @ 0x140001A3C (-IncrementBucket@KHistogram@@AEAAX_K@Z.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ndisAllocateHistogramEntry @ 0x1401438A8 (ndisAllocateHistogramEntry.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisDmaAllocationHistogramAddEntry(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbp
  void *v7; // rcx
  __int64 HistogramEntry; // rsi
  __int64 *v9; // rcx
  __int64 v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r9
  signed __int32 v18[8]; // [rsp+0h] [rbp-48h] BYREF
  KLockHolder v19; // [rsp+20h] [rbp-28h] BYREF

  v19.m_Lock = &stru_140126928;
  KeEnterCriticalRegion();
  v19.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(&stru_140126928, 0LL);
  v19.m_State = Exclusive;
  if ( !qword_140126FE8 )
  {
    ExReleasePushLockExclusiveEx(&stru_140126928, 0LL);
    KeLeaveCriticalRegion();
    return;
  }
  v6 = MEMORY[0xFFFFF78000000008];
  v7 = qword_140126FE8;
  if ( *(void **)qword_140126FE8 != qword_140126FE8 )
  {
    HistogramEntry = *(_QWORD *)qword_140126FE8 - 16LL;
    if ( !*((_DWORD *)qword_140126FE8 + 5) )
      goto LABEL_9;
    if ( (unsigned __int64)(*(_QWORD *)HistogramEntry + 600000000LL) >= MEMORY[0xFFFFF78000000008] )
    {
      v4 = (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(HistogramEntry + 8));
      if ( *(_DWORD *)a2 == *(_DWORD *)(HistogramEntry + 8) )
        v4 = *(unsigned __int16 *)(a2 + 4) - (unsigned int)*(unsigned __int16 *)(HistogramEntry + 12);
      if ( !(_DWORD)v4 )
      {
LABEL_9:
        if ( *(_QWORD *)qword_140126FE8 != 16LL )
          goto LABEL_20;
      }
    }
  }
  if ( *((_DWORD *)qword_140126FE8 + 4) > *((_DWORD *)qword_140126FE8 + 6) )
  {
    v10 = *((_QWORD *)qword_140126FE8 + 1);
    if ( *(void **)v10 != qword_140126FE8 )
      goto LABEL_25;
    v11 = *(_QWORD **)(v10 + 8);
    if ( *v11 != v10 )
      goto LABEL_25;
    *((_QWORD *)qword_140126FE8 + 1) = v11;
    HistogramEntry = v10 - 16;
    *v11 = v7;
    memset(
      (void *)(*(_QWORD *)(HistogramEntry + 32) + 20LL),
      0,
      2LL * *(unsigned int *)(*(_QWORD *)(HistogramEntry + 32) + 16LL));
    _InterlockedOr(v18, 0);
    v9 = (__int64 *)qword_140126FE8;
LABEL_18:
    *(_QWORD *)HistogramEntry = v6;
    *(_DWORD *)(HistogramEntry + 8) = *(_DWORD *)a2;
    *(_WORD *)(HistogramEntry + 12) = *(_WORD *)(a2 + 4);
    v12 = (_QWORD *)(HistogramEntry + 16);
    v13 = *v9;
    if ( *(__int64 **)(*v9 + 8) == v9 )
    {
      *v12 = v13;
      *(_QWORD *)(HistogramEntry + 24) = v9;
      *(_QWORD *)(v13 + 8) = v12;
      *v9 = (__int64)v12;
LABEL_20:
      v14 = *(_QWORD *)(HistogramEntry + 32);
      v15 = 0LL;
      if ( a1 >= *(_QWORD *)v14 )
      {
        v16 = a1 - *(_QWORD *)v14;
        v17 = *(_QWORD *)(v14 + 8);
        if ( v16 < v17 * (*(_DWORD *)(v14 + 16) - (unsigned int)(*(_QWORD *)v14 != 0LL) - 1) )
          v15 = (*(_QWORD *)v14 != 0LL) + v16 / v17;
        else
          v15 = (unsigned int)(*(_DWORD *)(v14 + 16) - 1);
      }
      KHistogram::IncrementBucket((KHistogram *)v14, v15);
      goto LABEL_13;
    }
LABEL_25:
    __fastfail(3u);
  }
  HistogramEntry = ndisAllocateHistogramEntry(qword_140126FE8, v4, v5);
  if ( HistogramEntry )
  {
    v9 = (__int64 *)qword_140126FE8;
    ++*((_DWORD *)qword_140126FE8 + 4);
    goto LABEL_18;
  }
  _InterlockedIncrement64(&qword_140127098);
LABEL_13:
  KLockHolder::~KLockHolder(&v19);
}
