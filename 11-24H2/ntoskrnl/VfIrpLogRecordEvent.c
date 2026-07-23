/*
 * XREFs of VfIrpLogRecordEvent @ 0x140B9D684
 * Callers:
 *     IovpCallDriver1 @ 0x140B8ECB4 (IovpCallDriver1.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140B94B44 (IovUtilIsDeviceObjectMarked.c)
 *     VfMajorBuildIrpLogEntry @ 0x140B94E70 (VfMajorBuildIrpLogEntry.c)
 *     ViIrpLogDatabaseFindPointer @ 0x140B9DC1C (ViIrpLogDatabaseFindPointer.c)
 */

void __fastcall VfIrpLogRecordEvent(__int16 a1, _DWORD *a2, __int64 a3)
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  KIRQL v6; // bp
  __int64 Pointer; // rax
  _DWORD *v8; // rsi
  __int64 v9; // rbx
  _QWORD *v10; // rcx
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  _DWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx
  _DWORD *v18; // [rsp+20h] [rbp-68h] BYREF
  __int128 v19; // [rsp+30h] [rbp-58h]
  __int128 v20; // [rsp+40h] [rbp-48h]
  __int64 v21; // [rsp+50h] [rbp-38h]

  v18 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( (a1 & 0x400) != 0 )
  {
    if ( ViIrpLogDdiLock != 2 && !_InterlockedCompareExchange(&ViIrpLogDdiLock, 1, 0) )
    {
      Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x77496656uLL);
      if ( Pool2 )
      {
        Pool2->List.Flink = 0LL;
        Pool2->WorkerRoutine = (void (__fastcall *)(void *))ViIrpLogExposeWmiCallback;
        Pool2->Parameter = Pool2;
        ExQueueWorkItem(Pool2, DelayedWorkQueue);
      }
      else
      {
        ViIrpLogDdiLock = 0;
      }
    }
    v6 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
    if ( (unsigned int)IovUtilIsDeviceObjectMarked((__int64)a2, 0) )
      goto LABEL_21;
    Pointer = ViIrpLogDatabaseFindPointer(a2, &v18);
    v8 = v18;
    v9 = Pointer;
    if ( *v18 )
      goto LABEL_21;
    if ( !Pointer )
    {
      v9 = ExAllocatePool2(0x40uLL, 0x348uLL, 0x65496656uLL);
      if ( !v9 )
      {
LABEL_21:
        KeReleaseSpinLock(&ViIrpLogDatabaseLock, v6);
        return;
      }
      PsReferenceSiloContext(a2);
      *(_DWORD *)(v9 + 24) = 0;
      v10 = v8 + 2;
      *(_QWORD *)v9 = a2;
      v11 = a2[18];
      *(_DWORD *)(v9 + 36) = 0;
      *(_DWORD *)(v9 + 28) = v11;
      v12 = (_QWORD *)(v9 + 8);
      *(_DWORD *)(v9 + 32) = 20;
      v13 = *((_QWORD *)v8 + 1);
      if ( *(_DWORD **)(v13 + 8) != v8 + 2 )
        __fastfail(3u);
      *v12 = v13;
      *(_QWORD *)(v9 + 16) = v10;
      *(_QWORD *)(v13 + 8) = v12;
      *v10 = v12;
    }
    v14 = *(_DWORD *)(v9 + 24);
    if ( (v14 & 6) == 0 )
    {
      v15 = (_DWORD *)(v9 + 36);
      if ( v14 == 1 )
        v16 = *(unsigned int *)(v9 + 32);
      else
        v16 = (unsigned int)*v15;
      if ( (unsigned int)VfMajorBuildIrpLogEntry(a3, v16) )
      {
        v17 = 5 * ((unsigned int)*v15 + 1LL);
        *(_OWORD *)(v9 + 8 * v17) = v19;
        *(_OWORD *)(v9 + 8 * v17 + 16) = v20;
        *(_QWORD *)(v9 + 8 * v17 + 32) = v21;
        if ( ++*v15 == *(_DWORD *)(v9 + 32) )
        {
          *(_DWORD *)(v9 + 24) |= 1u;
          *v15 = 0;
        }
      }
    }
    goto LABEL_21;
  }
}
