/*
 * XREFs of PopIrpWatchdogBugcheck @ 0x1405CA848
 * Callers:
 *     PopCompleteIrpWatchdog @ 0x1402BC618 (PopCompleteIrpWatchdog.c)
 *     PopDisableIrpWatchdog @ 0x14049A414 (PopDisableIrpWatchdog.c)
 *     PopIrpWatchdog @ 0x1405CA830 (PopIrpWatchdog.c)
 *     PopBroadcastBlameBugcheckCallback @ 0x140B616C0 (PopBroadcastBlameBugcheckCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1405CA610 (PopInternalAddToDumpFile.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopIrpWatchdogBugcheck(__int64 MaxDataSize)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned int v3; // ecx
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  ULONG_PTR BugCheckParameter4; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v11; // [rsp+48h] [rbp-31h] BYREF
  ULONG_PTR BugCheckParameter3[5]; // [rsp+50h] [rbp-29h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp+17h] BYREF
  unsigned int *v15; // [rsp+A0h] [rbp+27h]
  int v16; // [rsp+A8h] [rbp+2Fh]
  int v17; // [rsp+ACh] [rbp+33h]
  __int64 v18; // [rsp+B0h] [rbp+37h]
  int v19; // [rsp+B8h] [rbp+3Fh]
  int v20; // [rsp+BCh] [rbp+43h]

  BugCheckParameter4 = 0LL;
  HIDWORD(BugCheckParameter3[0]) = 0;
  v1 = MaxDataSize;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (PopSimulate & 4) == 0 )
  {
    if ( (struct _KTHREAD *)PopIrpLockThread != KeGetCurrentThread() )
    {
      KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
      PopIrpLockThread = (__int64)KeGetCurrentThread();
    }
    if ( !*(_DWORD *)(v1 + 188) )
    {
      v6 = *(_QWORD *)(v1 + 24);
      v7 = v6 ? *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL) : 0LL;
      v8 = *(_QWORD *)(v7 + 264);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 72LL * *(char *)(v8 + 66) + 200);
        if ( *(_BYTE *)(v9 + 184) == *(_BYTE *)(v1 + 184) )
          v1 = v9;
      }
    }
    BugCheckParameter4 = *(_QWORD *)(v1 + 16);
    PopInternalAddToDumpFile(0LL, 0, *(_QWORD *)(v1 + 24));
    IoAddTriageDumpDataBlock(BugCheckParameter4, (PVOID)*(unsigned __int16 *)(BugCheckParameter4 + 2));
    IoAddTriageDumpDataBlock(v1, (PVOID)0x138);
    BugCheckParameter3[1] = (ULONG_PTR)&PopIrpList;
    BugCheckParameter3[0] = 163840LL;
    BugCheckParameter3[2] = (ULONG_PTR)&PopIrpThreadList;
    BugCheckParameter3[3] = ExWorkerQueue;
    BugCheckParameter3[4] = IoWorkerQueue;
    KeBugCheckEx(0x9Fu, 3uLL, *(_QWORD *)(v1 + 24), (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
  }
  v2 = *(_QWORD *)(MaxDataSize + 24);
  if ( v2 )
    v2 = *(_QWORD *)(*(_QWORD *)(v2 + 312) + 40LL);
  v3 = *(unsigned __int16 *)(v2 + 40);
  UserData.Reserved = 0;
  v17 = 0;
  UserData.Ptr = (ULONGLONG)&BugCheckParameter4;
  v15 = &v11;
  v11 = v3 >> 1;
  UserData.Size = 8;
  v16 = 4;
  v4 = *(_QWORD *)(v2 + 48);
  v20 = 0;
  v18 = v4;
  v19 = 2 * (v3 >> 1);
  return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_IRP_WATCHDOG_TRIGGERED, 0LL, 0, 0LL, 0LL, 3u, &UserData);
}
