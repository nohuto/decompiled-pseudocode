/*
 * XREFs of EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140ADBF60
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x140923570 (EtwpCovSampContextAddSamples.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwpCovSampHashLookupInTable @ 0x1409C3200 (EtwpCovSampHashLookupInTable.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x140A546D4 (EtwpCoverageSamplerAllocateTable.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampHashMakeRoomAndAcquireLock(ULONG_PTR BugCheckParameter2, int a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *Table; // r15
  char *v8; // rax
  char *v9; // rdi
  unsigned int v10; // ebp
  __int64 v11; // rcx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // esi
  unsigned int v15; // ecx
  void *v16; // rcx
  struct _KTHREAD *v17; // rax
  char *v18; // rax
  char *v19; // rdi
  __int64 *v20; // rdi
  unsigned int v21; // r8d
  __int64 *v22; // rcx
  __int64 **v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  unsigned int v26; // esi
  __int64 v27; // rax
  _QWORD *v28; // r14
  struct _KTHREAD *v30; // rax
  char *v31; // rax
  char *v32; // rdi
  __int64 v33; // rax
  unsigned int v34; // ecx
  unsigned int v35; // edx
  __int64 result; // rax
  unsigned int v37; // eax
  _QWORD *v38; // rcx
  _QWORD *v39; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v39 = 0LL;
  --CurrentThread->KernelApcDisable;
  Table = 0LL;
  v8 = (char *)KeAbPreAcquire(BugCheckParameter2, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v8, BugCheckParameter2);
  if ( v9 )
    v9[10] = 1;
  v10 = 0;
  *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  v11 = *(_QWORD *)(BugCheckParameter2 + 1664);
  v12 = a2 + *(_DWORD *)(v11 + 16);
  if ( v12 >= (unsigned int)(7 * *(_DWORD *)(v11 + 20)) >> 3 )
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(v11 + 20);
      v14 = *(_DWORD *)(BugCheckParameter2 + 40);
      if ( v13 < v14 )
      {
        if ( v13 )
          v15 = 2 * v13;
        else
          v15 = *(_DWORD *)(BugCheckParameter2 + 36);
        for ( ; (7 * v15) >> 3 < v12; v15 *= 2 )
          ;
        if ( v15 >= v14 )
          v15 = *(_DWORD *)(BugCheckParameter2 + 40);
        v14 = v15;
      }
      else if ( *(_DWORD *)(BugCheckParameter2 + 1696) >= *(_DWORD *)(BugCheckParameter2 + 44) )
      {
        goto LABEL_39;
      }
      *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( Table )
      {
        v16 = (void *)Table[3];
        if ( v16 )
        {
          ExFreePoolWithTag(v16, 0x56777445u);
          Table[3] = 0LL;
        }
        ExFreePoolWithTag(Table, 0x56777445u);
      }
      Table = EtwpCoverageSamplerAllocateTable(v14);
      if ( !Table )
        goto LABEL_41;
      v17 = KeGetCurrentThread();
      --v17->KernelApcDisable;
      v18 = (char *)KeAbPreAcquire(BugCheckParameter2, 0LL);
      v19 = v18;
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v18, BugCheckParameter2);
      if ( v19 )
        v19[10] = 1;
      *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
      v20 = *(__int64 **)(BugCheckParameter2 + 1664);
      v21 = *((_DWORD *)v20 + 5);
      if ( a2 + *((_DWORD *)v20 + 4) < (7 * v21) >> 3 )
        goto LABEL_40;
      if ( v21 >= v14 )
        break;
      *(_QWORD *)(BugCheckParameter2 + 1664) = Table;
      Table = v20;
      v22 = (__int64 *)*v20;
      if ( *(__int64 **)(*v20 + 8) != v20 )
        goto LABEL_52;
      v23 = (__int64 **)v20[1];
      if ( *v23 != v20 )
        goto LABEL_52;
      *v23 = v22;
      v22[1] = (__int64)v23;
      v24 = *(_QWORD **)(BugCheckParameter2 + 1688);
      v25 = *(_QWORD **)(BugCheckParameter2 + 1664);
      if ( *v24 != BugCheckParameter2 + 1680 )
        goto LABEL_52;
      *v25 = BugCheckParameter2 + 1680;
      v26 = 0;
      v25[1] = v24;
      *v24 = v25;
      *(_QWORD *)(BugCheckParameter2 + 1688) = v25;
      for ( *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1664) + 16LL) = *((_DWORD *)v20 + 4);
            v26 < *((_DWORD *)v20 + 5);
            ++v26 )
      {
        v27 = v20[3];
        v28 = (_QWORD *)(v27 + 8LL * v26);
        if ( *v28 )
        {
          EtwpCovSampHashLookupInTable(
            *(_QWORD *)(BugCheckParameter2 + 1664),
            (unsigned __int8 *)(v27 + 8LL * v26),
            &v39);
          *v39 = *v28;
          if ( (*((_DWORD *)v20 + 4))-- == 1 )
            break;
        }
      }
      if ( v10 < 0x14 )
      {
        v11 = *(_QWORD *)(BugCheckParameter2 + 1664);
        ++v10;
        v12 = a2 + *(_DWORD *)(v11 + 16);
        if ( v12 >= (unsigned int)(7 * *(_DWORD *)(v11 + 20)) >> 3 )
          continue;
      }
LABEL_39:
      if ( !Table )
        goto LABEL_41;
      goto LABEL_40;
    }
    v37 = *(_DWORD *)(BugCheckParameter2 + 1696);
    if ( v37 >= *(_DWORD *)(BugCheckParameter2 + 44) )
    {
LABEL_40:
      *a3 = Table;
      goto LABEL_41;
    }
    *(_QWORD *)(BugCheckParameter2 + 1664) = Table;
    *(_DWORD *)(BugCheckParameter2 + 1696) = v37 + 1;
    v38 = *(_QWORD **)(BugCheckParameter2 + 1688);
    if ( *v38 != BugCheckParameter2 + 1680 )
LABEL_52:
      __fastfail(3u);
    *Table = BugCheckParameter2 + 1680;
    Table[1] = v38;
    *v38 = Table;
    *(_QWORD *)(BugCheckParameter2 + 1688) = Table;
    if ( *(_DWORD *)(BugCheckParameter2 + 1696) == 2 )
      KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 1672), 0, 0);
  }
LABEL_41:
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) != KeGetCurrentThread() )
  {
    v30 = KeGetCurrentThread();
    --v30->KernelApcDisable;
    v31 = (char *)KeAbPreAcquire(BugCheckParameter2, 0LL);
    v32 = v31;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v31, BugCheckParameter2);
    if ( v32 )
      v32[10] = 1;
    *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  }
  v33 = *(_QWORD *)(BugCheckParameter2 + 1664);
  v34 = *(_DWORD *)(v33 + 16);
  v35 = (unsigned int)(7 * *(_DWORD *)(v33 + 20)) >> 3;
  result = v35 - v34;
  if ( v35 <= v34 )
    return 0LL;
  return result;
}
