/*
 * XREFs of EtwpGetTraceGroupInfo @ 0x1409948E0
 * Callers:
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpFindGuidEntryByGuid @ 0x140838880 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x140839DC0 (EtwpUnreferenceGuidEntry.c)
 */

__int64 __fastcall EtwpGetTraceGroupInfo(__int64 a1, _DWORD *a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int v4; // r12d
  unsigned int v7; // r15d
  struct _KTHREAD *CurrentThread; // rax
  char *v9; // rax
  char *v10; // rbx
  _OWORD *v11; // rax
  unsigned int v12; // ebp
  _QWORD *v13; // rdi
  _OWORD *v14; // r14
  unsigned int v15; // eax
  struct _KTHREAD *v16; // rax
  unsigned __int64 *v17; // rbx
  char *v18; // rax
  char *v19; // rsi
  signed __int64 *v20; // rbx
  signed __int64 v21; // rax
  signed __int64 v22; // rdx
  signed __int64 v23; // rtt
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
  _QWORD *BugCheckParameter2; // [rsp+28h] [rbp-40h]

  v4 = *a4;
  v7 = 0;
  BugCheckParameter2 = EtwpFindGuidEntryByGuid(a1, a2, 2u);
  if ( !BugCheckParameter2 )
    return 3221226133LL;
  memset_0(a3, 0, *a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (char *)KeAbPreAcquire((__int64)(BugCheckParameter2 + 83), 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2 + 166, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2 + 83, v9, (__int64)(BugCheckParameter2 + 83));
  if ( v10 )
    v10[10] = 1;
  BugCheckParameter2[84] = KeGetCurrentThread();
  if ( v4 >= 4 )
    *a3 = 16;
  v11 = a3 + 1;
  if ( v4 >= 0x24 )
  {
    *v11 = *((_OWORD *)BugCheckParameter2 + 8);
    *(_OWORD *)(a3 + 5) = *((_OWORD *)BugCheckParameter2 + 9);
    v11 = a3 + 9;
  }
  if ( v4 >= 0x44 )
  {
    *v11 = *((_OWORD *)BugCheckParameter2 + 10);
    v11[1] = *((_OWORD *)BugCheckParameter2 + 11);
    v11 += 2;
  }
  if ( v4 >= 0x64 )
  {
    *v11 = *((_OWORD *)BugCheckParameter2 + 12);
    v11[1] = *((_OWORD *)BugCheckParameter2 + 13);
    v11 += 2;
  }
  if ( v4 >= 0x84 )
  {
    *v11 = *((_OWORD *)BugCheckParameter2 + 14);
    v11[1] = *((_OWORD *)BugCheckParameter2 + 15);
    v11 += 2;
  }
  if ( v4 >= 0xA4 )
  {
    *v11 = *((_OWORD *)BugCheckParameter2 + 16);
    v11[1] = *((_OWORD *)BugCheckParameter2 + 17);
    v11 += 2;
  }
  if ( v4 >= 0xC4 )
  {
    *v11 = *((_OWORD *)BugCheckParameter2 + 18);
    v11[1] = *((_OWORD *)BugCheckParameter2 + 19);
    v11 += 2;
  }
  if ( v4 >= 0xE4 )
  {
    *v11 = *((_OWORD *)BugCheckParameter2 + 20);
    v11[1] = *((_OWORD *)BugCheckParameter2 + 21);
    v11 += 2;
  }
  if ( v4 >= 0x104 )
  {
    *v11 = *((_OWORD *)BugCheckParameter2 + 22);
    v11[1] = *((_OWORD *)BugCheckParameter2 + 23);
    v11 += 2;
  }
  if ( v4 >= 0x124 )
  {
    *v11 = *((_OWORD *)BugCheckParameter2 + 24);
    v11[1] = *((_OWORD *)BugCheckParameter2 + 25);
    v11 += 2;
  }
  if ( v4 >= 0x144 )
  {
    *v11 = *((_OWORD *)BugCheckParameter2 + 26);
    v11[1] = *((_OWORD *)BugCheckParameter2 + 27);
    v11 += 2;
  }
  if ( v4 >= 0x164 )
  {
    *v11 = *((_OWORD *)BugCheckParameter2 + 28);
    v11[1] = *((_OWORD *)BugCheckParameter2 + 29);
    v11 += 2;
  }
  if ( v4 >= 0x184 )
  {
    *v11 = *((_OWORD *)BugCheckParameter2 + 30);
    v11[1] = *((_OWORD *)BugCheckParameter2 + 31);
    v11 += 2;
  }
  if ( v4 >= 0x1A4 )
  {
    *v11 = *((_OWORD *)BugCheckParameter2 + 32);
    v11[1] = *((_OWORD *)BugCheckParameter2 + 33);
    v11 += 2;
  }
  if ( v4 >= 0x1C4 )
  {
    *v11 = *((_OWORD *)BugCheckParameter2 + 34);
    v11[1] = *((_OWORD *)BugCheckParameter2 + 35);
    v11 += 2;
  }
  if ( v4 >= 0x1E4 )
  {
    *v11 = *((_OWORD *)BugCheckParameter2 + 36);
    v11[1] = *((_OWORD *)BugCheckParameter2 + 37);
    v11 += 2;
  }
  if ( v4 >= 0x204 )
  {
    *v11 = *((_OWORD *)BugCheckParameter2 + 38);
    v11[1] = *((_OWORD *)BugCheckParameter2 + 39);
  }
  v12 = 520;
  v13 = (_QWORD *)BugCheckParameter2[7];
  v14 = a3 + 130;
  while ( v13 != BugCheckParameter2 + 7 )
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
      v18 = (char *)KeAbPreAcquire((__int64)v17, 0LL);
      v19 = v18;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
        ExfAcquirePushLockExclusiveEx(v17, v18, (__int64)v17);
      if ( v19 )
        v19[10] = 1;
      *(_QWORD *)(v13[2] + 672LL) = KeGetCurrentThread();
      *v14 = *(_OWORD *)(v13[2] + 40LL);
      *(_QWORD *)(v13[2] + 672LL) = 0LL;
      v20 = (signed __int64 *)(v13[2] + 664LL);
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
  BugCheckParameter2[84] = 0LL;
  v25 = BugCheckParameter2 + 83;
  _m_prefetchw(BugCheckParameter2 + 83);
  v26 = *v25;
  v27 = *v25 - 16;
  if ( (*v25 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v27 = 0LL;
  if ( (v26 & 2) != 0 || (v28 = BugCheckParameter2[83], v28 != _InterlockedCompareExchange64(v25, v27, v26)) )
  {
    ExfReleasePushLock(BugCheckParameter2 + 83);
    v25 = BugCheckParameter2 + 83;
  }
  KeAbPostRelease((ULONG_PTR)v25);
  KeLeaveCriticalRegionThread();
  EtwpUnreferenceGuidEntry(BugCheckParameter2);
  *a4 = v12;
  return v24;
}
