/*
 * XREFs of EtwpGetTraceGroupInfo @ 0x140833E70
 * Callers:
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     qsort @ 0x1404FED20 (qsort.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     EtwpFindGuidEntryByGuid @ 0x14083AEE0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14083D760 (EtwpUnreferenceGuidEntry.c)
 */

__int64 __fastcall EtwpGetTraceGroupInfo(__int64 a1, __int64 a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int v4; // r12d
  unsigned int v7; // r15d
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  _OWORD *v11; // rax
  unsigned int v12; // ebp
  _QWORD *v13; // rdi
  _OWORD *v14; // r14
  unsigned int v15; // eax
  struct _KTHREAD *v16; // rax
  unsigned __int64 *v17; // rbx
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  __int64 *v20; // rbx
  signed __int64 v21; // rax
  signed __int64 v22; // rdx
  __int64 v23; // rtt
  unsigned int v24; // esi
  volatile signed __int64 *v25; // r9
  signed __int64 v26; // rax
  signed __int64 v27; // rdx
  __int64 v28; // rtt
  _QWORD *v30; // rbx
  _QWORD *v31; // rdx
  int v32; // esi
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 BugCheckParameter2; // [rsp+28h] [rbp-40h]

  v4 = *a4;
  v7 = 0;
  BugCheckParameter2 = EtwpFindGuidEntryByGuid(a1, a2, 2LL);
  if ( !BugCheckParameter2 )
    return 3221226133LL;
  memset_0(a3, 0, *a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire(BugCheckParameter2 + 664, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 664), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 + 664), (__int64)v9, BugCheckParameter2 + 664);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  *(_QWORD *)(BugCheckParameter2 + 672) = KeGetCurrentThread();
  if ( v4 >= 4 )
    *a3 = 16;
  v11 = a3 + 1;
  if ( v4 >= 0x24 )
  {
    *v11 = *(_OWORD *)(BugCheckParameter2 + 128);
    *(_OWORD *)(a3 + 5) = *(_OWORD *)(BugCheckParameter2 + 144);
    v11 = a3 + 9;
  }
  if ( v4 >= 0x44 )
  {
    *v11 = *(_OWORD *)(BugCheckParameter2 + 160);
    v11[1] = *(_OWORD *)(BugCheckParameter2 + 176);
    v11 += 2;
  }
  if ( v4 >= 0x64 )
  {
    *v11 = *(_OWORD *)(BugCheckParameter2 + 192);
    v11[1] = *(_OWORD *)(BugCheckParameter2 + 208);
    v11 += 2;
  }
  if ( v4 >= 0x84 )
  {
    *v11 = *(_OWORD *)(BugCheckParameter2 + 224);
    v11[1] = *(_OWORD *)(BugCheckParameter2 + 240);
    v11 += 2;
  }
  if ( v4 >= 0xA4 )
  {
    *v11 = *(_OWORD *)(BugCheckParameter2 + 256);
    v11[1] = *(_OWORD *)(BugCheckParameter2 + 272);
    v11 += 2;
  }
  if ( v4 >= 0xC4 )
  {
    *v11 = *(_OWORD *)(BugCheckParameter2 + 288);
    v11[1] = *(_OWORD *)(BugCheckParameter2 + 304);
    v11 += 2;
  }
  if ( v4 >= 0xE4 )
  {
    *v11 = *(_OWORD *)(BugCheckParameter2 + 320);
    v11[1] = *(_OWORD *)(BugCheckParameter2 + 336);
    v11 += 2;
  }
  if ( v4 >= 0x104 )
  {
    *v11 = *(_OWORD *)(BugCheckParameter2 + 352);
    v11[1] = *(_OWORD *)(BugCheckParameter2 + 368);
    v11 += 2;
  }
  if ( v4 >= 0x124 )
  {
    *v11 = *(_OWORD *)(BugCheckParameter2 + 384);
    v11[1] = *(_OWORD *)(BugCheckParameter2 + 400);
    v11 += 2;
  }
  if ( v4 >= 0x144 )
  {
    *v11 = *(_OWORD *)(BugCheckParameter2 + 416);
    v11[1] = *(_OWORD *)(BugCheckParameter2 + 432);
    v11 += 2;
  }
  if ( v4 >= 0x164 )
  {
    *v11 = *(_OWORD *)(BugCheckParameter2 + 448);
    v11[1] = *(_OWORD *)(BugCheckParameter2 + 464);
    v11 += 2;
  }
  if ( v4 >= 0x184 )
  {
    *v11 = *(_OWORD *)(BugCheckParameter2 + 480);
    v11[1] = *(_OWORD *)(BugCheckParameter2 + 496);
    v11 += 2;
  }
  if ( v4 >= 0x1A4 )
  {
    *v11 = *(_OWORD *)(BugCheckParameter2 + 512);
    v11[1] = *(_OWORD *)(BugCheckParameter2 + 528);
    v11 += 2;
  }
  if ( v4 >= 0x1C4 )
  {
    *v11 = *(_OWORD *)(BugCheckParameter2 + 544);
    v11[1] = *(_OWORD *)(BugCheckParameter2 + 560);
    v11 += 2;
  }
  if ( v4 >= 0x1E4 )
  {
    *v11 = *(_OWORD *)(BugCheckParameter2 + 576);
    v11[1] = *(_OWORD *)(BugCheckParameter2 + 592);
    v11 += 2;
  }
  if ( v4 >= 0x204 )
  {
    *v11 = *(_OWORD *)(BugCheckParameter2 + 608);
    v11[1] = *(_OWORD *)(BugCheckParameter2 + 624);
  }
  v12 = 520;
  v13 = *(_QWORD **)(BugCheckParameter2 + 56);
  v14 = a3 + 130;
  while ( v13 != (_QWORD *)(BugCheckParameter2 + 56) )
  {
    v15 = v12 + 16;
    if ( v12 + 16 < v12 )
    {
      v12 = -1;
      v24 = -2147483643;
      goto LABEL_55;
    }
    ++v7;
    v12 += 16;
    if ( v15 <= v4 )
    {
      v16 = KeGetCurrentThread();
      --v16->KernelApcDisable;
      v17 = (unsigned __int64 *)(v13[2] + 664LL);
      v18 = KeAbPreAcquire((__int64)v17, 0LL);
      v19 = v18;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
        ExfAcquirePushLockExclusiveEx(v17, (__int64)v18, (__int64)v17);
      if ( v19 )
        *((_BYTE *)v19 + 10) = 1;
      *(_QWORD *)(v13[2] + 672LL) = KeGetCurrentThread();
      *v14 = *(_OWORD *)(v13[2] + 40LL);
      *(_QWORD *)(v13[2] + 672LL) = 0LL;
      v20 = (__int64 *)(v13[2] + 664LL);
      _m_prefetchw(v20);
      v21 = *v20;
      v22 = *v20 - 16;
      if ( (*v20 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v22 = 0LL;
      if ( (v21 & 2) != 0 || (v23 = *v20, v23 != _InterlockedCompareExchange64(v20, v22, v21)) )
        ExfReleasePushLock(v20);
      KeAbPostRelease((ULONG_PTR)v20);
      KeLeaveCriticalRegionThread();
      ++v14;
    }
    v13 = (_QWORD *)*v13;
  }
  if ( v12 > v4 )
  {
    v24 = -1073741789;
  }
  else if ( v7 > 1 )
  {
    v30 = a3 + 130;
    qsort(a3 + 130, v7, 0x10uLL, EtwpCompareGuid);
    v31 = a3 + 134;
    v32 = 1;
    v33 = v7 - 1;
    do
    {
      v34 = *v31 - *v30;
      if ( *v31 == *v30 )
        v34 = v31[1] - v30[1];
      if ( v34 )
      {
        v30 += 2;
        if ( v30 != v31 )
          *(_OWORD *)v30 = *(_OWORD *)v31;
        ++v32;
      }
      v31 += 2;
      --v33;
    }
    while ( v33 );
    a3[129] = v32;
    v24 = 0;
  }
  else
  {
    a3[129] = v7 == 1;
    v24 = 0;
  }
LABEL_55:
  *(_QWORD *)(BugCheckParameter2 + 672) = 0LL;
  v25 = (volatile signed __int64 *)(BugCheckParameter2 + 664);
  _m_prefetchw((const void *)(BugCheckParameter2 + 664));
  v26 = *v25;
  v27 = *v25 - 16;
  if ( (*v25 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v27 = 0LL;
  if ( (v26 & 2) != 0
    || (v28 = *(_QWORD *)(BugCheckParameter2 + 664), v28 != _InterlockedCompareExchange64(v25, v27, v26)) )
  {
    ExfReleasePushLock((_QWORD *)(BugCheckParameter2 + 664));
    v25 = (volatile signed __int64 *)(BugCheckParameter2 + 664);
  }
  KeAbPostRelease((ULONG_PTR)v25);
  KeLeaveCriticalRegionThread();
  EtwpUnreferenceGuidEntry(BugCheckParameter2);
  *a4 = v12;
  return v24;
}
