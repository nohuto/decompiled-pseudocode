/*
 * XREFs of SmHwAcceleratorMgrHotRemoveAccelerator @ 0x14060DBAC
 * Callers:
 *     SmHwAcceleratorMgrAccelCallback @ 0x14079BF40 (SmHwAcceleratorMgrAccelCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SmHwAcceleratorPartitionMgrWakeDescriptorWaiters @ 0x14060DFF8 (SmHwAcceleratorPartitionMgrWakeDescriptorWaiters.c)
 *     SmHwAcceleratorCleanup @ 0x14079BCFC (SmHwAcceleratorCleanup.c)
 *     SmHwAcceleratorPartitionCtxCleanup @ 0x14079CC18 (SmHwAcceleratorPartitionCtxCleanup.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SmHwAcceleratorMgrHotRemoveAccelerator(ULONG_PTR BugCheckParameter2, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v6; // rax
  char *v7; // rsi
  unsigned int i; // ecx
  void **v9; // r8
  void **v10; // rsi
  unsigned int v11; // eax
  _QWORD *j; // rdx
  __int64 *v13; // r15
  __int64 *v14; // r12
  struct _KTHREAD *v15; // rax
  char *v16; // rax
  char *v17; // r14
  int v18; // edx
  _DWORD *v19; // r8
  __int64 *v20; // r13
  __int64 *v21; // rax
  __int64 *k; // r14
  __int64 *v23; // rcx
  __int64 **v24; // rax
  __int64 v25; // rax
  PVOID *v26; // rax
  void **v27; // rcx
  void **v28; // rax
  __int64 *v29; // r14
  __int64 *v30; // r12
  __int64 *v32; // r14
  PVOID v33; // rbx
  __int64 v34; // rax
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]
  __int64 v37; // [rsp+70h] [rbp+40h] BYREF
  int v38; // [rsp+80h] [rbp+50h]
  _DWORD *v39; // [rsp+88h] [rbp+58h]

  v38 = a3;
  v37 = 0LL;
  p_P = &P;
  P = &P;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (char *)KeAbPreAcquire(BugCheckParameter2, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v6, BugCheckParameter2);
  if ( v7 )
    v7[10] = 1;
  for ( i = 0; ; ++i )
  {
    if ( i >= (unsigned __int16)KeNumberNodes )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      KeLeaveCriticalRegion();
      return;
    }
    v9 = (void **)(BugCheckParameter2 + 16LL * i + 24);
    v10 = (void **)*v9;
LABEL_8:
    if ( v10 != v9 )
      break;
  }
  v11 = 0;
  for ( j = v10 + 2; ; ++j )
  {
    if ( v11 >= 2 )
    {
      v10 = (void **)*v10;
      goto LABEL_8;
    }
    if ( *j == a2 )
      break;
    ++v11;
  }
  v13 = (__int64 *)(BugCheckParameter2 + 8);
  v14 = *(__int64 **)(BugCheckParameter2 + 8);
  if ( v14 != (__int64 *)(BugCheckParameter2 + 8) )
  {
    do
    {
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      v16 = (char *)KeAbPreAcquire((__int64)(v14 + 3), 0LL);
      v17 = v16;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v14 + 6, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v14 + 3, v16, (__int64)(v14 + 3));
      if ( v17 )
        v17[10] = 1;
      v18 = 0;
      v19 = v14 + 6;
      v38 = 0;
      v20 = v14 + 7;
      v39 = v14 + 6;
      do
      {
        v21 = (__int64 *)(*(v20 - 3) + 16LL * *((unsigned int *)v10 + 11));
        for ( k = (__int64 *)*v21; ; k = (__int64 *)*k )
        {
          if ( k == v21 )
            goto LABEL_31;
          if ( (void **)k[4] == v10 )
            break;
        }
        *((_DWORD *)k + 16) |= 1u;
        v23 = (__int64 *)*k;
        if ( *(__int64 **)(*k + 8) != k )
          goto LABEL_52;
        v24 = (__int64 **)k[1];
        if ( *v24 != k )
          goto LABEL_52;
        *v24 = v23;
        v23[1] = (__int64)v24;
        *((_DWORD *)v14 + v18 + 12) = *v19 - 1;
        v25 = *v20;
        if ( *v20 )
        {
          *v20 = 0LL;
          v37 = v25;
          SmHwAcceleratorPartitionMgrWakeDescriptorWaiters(&v37);
          v18 = v38;
          v19 = v39;
        }
        v26 = p_P;
        if ( *p_P != &P )
          goto LABEL_52;
        k[1] = (__int64)p_P;
        *k = (__int64)&P;
        *v26 = k;
        p_P = (PVOID *)k;
LABEL_31:
        ++v18;
        ++v19;
        ++v20;
        v38 = v18;
        v39 = v19;
      }
      while ( v18 < 2 );
      v14 = (__int64 *)*v14;
    }
    while ( v14 != v13 );
    v13 = (__int64 *)(BugCheckParameter2 + 8);
  }
  v27 = (void **)*v10;
  if ( *((void ***)*v10 + 1) != v10 || (v28 = (void **)v10[1], *v28 != v10) )
LABEL_52:
    __fastfail(3u);
  *v28 = v27;
  v29 = v13;
  v27[1] = v28;
  if ( v28 != v27 )
    v29 = (__int64 *)(BugCheckParameter2 + 8);
  v30 = v13;
  --*(_DWORD *)(BugCheckParameter2 + 4LL * *((unsigned int *)v10 + 11) + 1048);
  if ( (*(_DWORD *)(BugCheckParameter2 + 1304))-- == 1 )
  {
    AccelDestroyOffloadWorkspace(*(_QWORD *)(BugCheckParameter2 + 1320));
    *(_QWORD *)(BugCheckParameter2 + 1320) = 0LL;
    v30 = v29;
  }
  v32 = *(__int64 **)(BugCheckParameter2 + 8);
  if ( v32 != v13 )
  {
    do
    {
      if ( (_InterlockedExchangeAdd64(v32 + 3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v32 + 3);
      KeAbPostRelease((ULONG_PTR)(v32 + 3));
      KeLeaveCriticalRegion();
      v32 = (__int64 *)*v32;
    }
    while ( v32 != v30 );
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
  while ( 1 )
  {
    v33 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_52;
    v34 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_52;
    P = *(PVOID *)P;
    *(_QWORD *)(v34 + 8) = &P;
    SmHwAcceleratorPartitionCtxCleanup(v33);
    ExFreePoolWithTag(v33, 0);
  }
  SmHwAcceleratorCleanup(v10);
  ExFreePoolWithTag(v10, 0);
}
