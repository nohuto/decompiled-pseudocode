/*
 * XREFs of EtwpGetTraceGroupInfo @ 0x140894910
 * Callers:
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     qsort @ 0x1404FC5A0 (qsort.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpFindGuidEntryByGuid @ 0x14089B9B0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14089E370 (EtwpUnreferenceGuidEntry.c)
 */

__int64 __fastcall EtwpGetTraceGroupInfo(__int64 a1, __int64 a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int v4; // r13d
  unsigned int v7; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v9; // rax
  __int64 *v10; // rbx
  _OWORD *v11; // rax
  unsigned int v12; // esi
  unsigned __int64 *v13; // rdi
  _OWORD *v14; // r14
  unsigned int v15; // eax
  struct _KTHREAD *v16; // rax
  unsigned __int64 *v17; // rbx
  __int64 *v18; // rax
  __int64 *v19; // rbp
  __int64 *v20; // rbx
  signed __int64 v21; // rax
  signed __int64 v22; // rdx
  __int64 v23; // rtt
  unsigned int v24; // ebp
  volatile signed __int64 *v25; // r9
  signed __int64 v26; // rax
  signed __int64 v27; // rdx
  unsigned __int64 v28; // rtt
  _QWORD *v30; // rbx
  _QWORD *v31; // rdx
  int v32; // ebp
  __int64 v33; // r8
  __int64 v34; // rcx
  unsigned __int64 *P; // [rsp+28h] [rbp-40h]

  v4 = *a4;
  v7 = 0;
  P = (unsigned __int64 *)EtwpFindGuidEntryByGuid(a1, a2, 2LL);
  if ( !P )
    return 3221226133LL;
  memset_0(a3, 0, *a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((__int64)(P + 51), 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)P + 102, 0LL) )
    ExfAcquirePushLockExclusiveEx(P + 51, v9, (__int64)(P + 51));
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  P[52] = (unsigned __int64)KeGetCurrentThread();
  if ( v4 >= 4 )
    *a3 = 8;
  v11 = a3 + 1;
  if ( v4 >= 0x24 )
  {
    *v11 = *((_OWORD *)P + 8);
    *(_OWORD *)(a3 + 5) = *((_OWORD *)P + 9);
    v11 = a3 + 9;
  }
  if ( v4 >= 0x44 )
  {
    *v11 = *((_OWORD *)P + 10);
    v11[1] = *((_OWORD *)P + 11);
    v11 += 2;
  }
  if ( v4 >= 0x64 )
  {
    *v11 = *((_OWORD *)P + 12);
    v11[1] = *((_OWORD *)P + 13);
    v11 += 2;
  }
  if ( v4 >= 0x84 )
  {
    *v11 = *((_OWORD *)P + 14);
    v11[1] = *((_OWORD *)P + 15);
    v11 += 2;
  }
  if ( v4 >= 0xA4 )
  {
    *v11 = *((_OWORD *)P + 16);
    v11[1] = *((_OWORD *)P + 17);
    v11 += 2;
  }
  if ( v4 >= 0xC4 )
  {
    *v11 = *((_OWORD *)P + 18);
    v11[1] = *((_OWORD *)P + 19);
    v11 += 2;
  }
  if ( v4 >= 0xE4 )
  {
    *v11 = *((_OWORD *)P + 20);
    v11[1] = *((_OWORD *)P + 21);
    v11 += 2;
  }
  if ( v4 >= 0x104 )
  {
    *v11 = *((_OWORD *)P + 22);
    v11[1] = *((_OWORD *)P + 23);
  }
  v12 = 264;
  v13 = (unsigned __int64 *)P[7];
  v14 = a3 + 66;
  while ( v13 != P + 7 )
  {
    v15 = v12 + 16;
    if ( v12 + 16 < v12 )
    {
      v12 = -1;
      v24 = -2147483643;
      goto LABEL_39;
    }
    ++v7;
    v12 += 16;
    if ( v15 <= v4 )
    {
      v16 = KeGetCurrentThread();
      --v16->KernelApcDisable;
      v17 = (unsigned __int64 *)(v13[2] + 408);
      v18 = KeAbPreAcquire((__int64)v17, 0LL);
      v19 = v18;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
        ExfAcquirePushLockExclusiveEx(v17, v18, (__int64)v17);
      if ( v19 )
        *((_BYTE *)v19 + 10) = 1;
      *(_QWORD *)(v13[2] + 416) = KeGetCurrentThread();
      *v14 = *(_OWORD *)(v13[2] + 40);
      *(_QWORD *)(v13[2] + 416) = 0LL;
      v20 = (__int64 *)(v13[2] + 408);
      _m_prefetchw(v20);
      v21 = *v20;
      v22 = *v20 - 16;
      if ( (*v20 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v22 = 0LL;
      if ( (v21 & 2) != 0 || (v23 = *v20, v23 != _InterlockedCompareExchange64(v20, v22, v21)) )
        ExfReleasePushLock(v20);
      KeAbPostRelease((ULONG_PTR)v20);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ++v14;
    }
    v13 = (unsigned __int64 *)*v13;
  }
  if ( v12 > v4 )
  {
    v24 = -1073741789;
  }
  else if ( v7 > 1 )
  {
    v30 = a3 + 66;
    qsort(a3 + 66, v7, 0x10uLL, EtwpCompareGuid);
    v31 = a3 + 70;
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
    a3[65] = v32;
    v24 = 0;
  }
  else
  {
    a3[65] = v7 == 1;
    v24 = 0;
  }
LABEL_39:
  P[52] = 0LL;
  v25 = (volatile signed __int64 *)(P + 51);
  _m_prefetchw(P + 51);
  v26 = *v25;
  v27 = *v25 - 16;
  if ( (*v25 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v27 = 0LL;
  if ( (v26 & 2) != 0 || (v28 = P[51], v28 != _InterlockedCompareExchange64(v25, v27, v26)) )
  {
    ExfReleasePushLock(P + 51);
    v25 = (volatile signed __int64 *)(P + 51);
  }
  KeAbPostRelease((ULONG_PTR)v25);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  EtwpUnreferenceGuidEntry(P);
  *a4 = v12;
  return v24;
}
