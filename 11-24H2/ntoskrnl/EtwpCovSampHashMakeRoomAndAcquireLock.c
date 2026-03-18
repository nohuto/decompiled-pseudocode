/*
 * XREFs of EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140ADA720
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x140900C90 (EtwpCovSampContextAddSamples.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EtwpCovSampHashLookupInTable @ 0x1409D33D0 (EtwpCovSampHashLookupInTable.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x140A5CEB4 (EtwpCoverageSamplerAllocateTable.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampHashMakeRoomAndAcquireLock(ULONG_PTR BugCheckParameter2, int a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *Table; // r15
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  unsigned int v10; // ebp
  __int64 v11; // rcx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // esi
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // rcx
  struct _KTHREAD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rdi
  __int64 *v23; // rdi
  unsigned int v24; // r8d
  __int64 *v25; // rcx
  __int64 **v26; // rax
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  unsigned int v29; // esi
  __int64 v30; // rax
  _QWORD *v31; // r14
  struct _KTHREAD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rdi
  __int64 v36; // rax
  unsigned int v37; // ecx
  unsigned int v38; // edx
  __int64 result; // rax
  unsigned int v40; // eax
  _QWORD *v41; // rcx
  _QWORD *v42; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v42 = 0LL;
  --CurrentThread->KernelApcDisable;
  Table = 0LL;
  v8 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, (__int64)v8, BugCheckParameter2);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
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
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
      if ( Table )
      {
        v19 = (void *)Table[3];
        if ( v19 )
        {
          ExFreePoolWithTag(v19, 0x56777445u);
          Table[3] = 0LL;
        }
        ExFreePoolWithTag(Table, 0x56777445u);
      }
      Table = EtwpCoverageSamplerAllocateTable(v14);
      if ( !Table )
        goto LABEL_41;
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      v21 = KeAbPreAcquire(BugCheckParameter2, 0LL);
      v22 = v21;
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, (__int64)v21, BugCheckParameter2);
      if ( v22 )
        *((_BYTE *)v22 + 10) = 1;
      *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
      v23 = *(__int64 **)(BugCheckParameter2 + 1664);
      v24 = *((_DWORD *)v23 + 5);
      if ( a2 + *((_DWORD *)v23 + 4) < (7 * v24) >> 3 )
        goto LABEL_40;
      if ( v24 >= v14 )
        break;
      *(_QWORD *)(BugCheckParameter2 + 1664) = Table;
      Table = v23;
      v25 = (__int64 *)*v23;
      if ( *(__int64 **)(*v23 + 8) != v23 )
        goto LABEL_52;
      v26 = (__int64 **)v23[1];
      if ( *v26 != v23 )
        goto LABEL_52;
      *v26 = v25;
      v25[1] = (__int64)v26;
      v27 = *(_QWORD **)(BugCheckParameter2 + 1688);
      v28 = *(_QWORD **)(BugCheckParameter2 + 1664);
      if ( *v27 != BugCheckParameter2 + 1680 )
        goto LABEL_52;
      *v28 = BugCheckParameter2 + 1680;
      v29 = 0;
      v28[1] = v27;
      *v27 = v28;
      *(_QWORD *)(BugCheckParameter2 + 1688) = v28;
      for ( *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1664) + 16LL) = *((_DWORD *)v23 + 4);
            v29 < *((_DWORD *)v23 + 5);
            ++v29 )
      {
        v30 = v23[3];
        v31 = (_QWORD *)(v30 + 8LL * v29);
        if ( *v31 )
        {
          EtwpCovSampHashLookupInTable(
            *(_QWORD *)(BugCheckParameter2 + 1664),
            (unsigned __int8 *)(v30 + 8LL * v29),
            &v42);
          *v42 = *v31;
          if ( (*((_DWORD *)v23 + 4))-- == 1 )
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
    v40 = *(_DWORD *)(BugCheckParameter2 + 1696);
    if ( v40 >= *(_DWORD *)(BugCheckParameter2 + 44) )
    {
LABEL_40:
      *a3 = Table;
      goto LABEL_41;
    }
    *(_QWORD *)(BugCheckParameter2 + 1664) = Table;
    *(_DWORD *)(BugCheckParameter2 + 1696) = v40 + 1;
    v41 = *(_QWORD **)(BugCheckParameter2 + 1688);
    if ( *v41 != BugCheckParameter2 + 1680 )
LABEL_52:
      __fastfail(3u);
    *Table = BugCheckParameter2 + 1680;
    Table[1] = v41;
    *v41 = Table;
    *(_QWORD *)(BugCheckParameter2 + 1688) = Table;
    if ( *(_DWORD *)(BugCheckParameter2 + 1696) == 2 )
      KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 1672), 0, 0);
  }
LABEL_41:
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) != KeGetCurrentThread() )
  {
    v33 = KeGetCurrentThread();
    --v33->KernelApcDisable;
    v34 = KeAbPreAcquire(BugCheckParameter2, 0LL);
    v35 = v34;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, (__int64)v34, BugCheckParameter2);
    if ( v35 )
      *((_BYTE *)v35 + 10) = 1;
    *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  }
  v36 = *(_QWORD *)(BugCheckParameter2 + 1664);
  v37 = *(_DWORD *)(v36 + 16);
  v38 = (unsigned int)(7 * *(_DWORD *)(v36 + 20)) >> 3;
  result = v38 - v37;
  if ( v38 <= v37 )
    return 0LL;
  return result;
}
