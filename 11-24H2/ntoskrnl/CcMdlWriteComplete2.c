/*
 * XREFs of CcMdlWriteComplete2 @ 0x1404567A4
 * Callers:
 *     CcMdlWriteComplete @ 0x140A66690 (CcMdlWriteComplete.c)
 *     FsRtlMdlWriteCompleteDev @ 0x140A7B8D0 (FsRtlMdlWriteCompleteDev.c)
 * Callees:
 *     MmFlushSection @ 0x140208E14 (MmFlushSection.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     CcDecrementOpenCount @ 0x140279504 (CcDecrementOpenCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     FsRtlIsNtstatusExpected @ 0x14044B3D0 (FsRtlIsNtstatusExpected.c)
 *     CcSetDirtyInMask @ 0x140456AF0 (CcSetDirtyInMask.c)
 */

void __fastcall CcMdlWriteComplete2(__int64 a1, __int64 *a2, struct _MDL *a3)
{
  __int64 v3; // rbx
  CSHORT MdlFlags; // r15
  __int64 v6; // rax
  struct _MDL *v7; // r14
  NTSTATUS v8; // esi
  struct _MDL *v9; // rdi
  __int16 v10; // r15
  __int64 v11; // rbp
  struct _MDL *Next; // r12
  __int64 ByteCount; // r8
  __int64 v14; // rax
  struct _MDL *v15; // rbx
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v17; // ecx
  __int128 v18; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  __int64 v20; // [rsp+90h] [rbp+8h] BYREF

  v3 = *a2;
  MdlFlags = a3->MdlFlags;
  v20 = *a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = *(_QWORD *)(a1 + 40);
  v7 = a3;
  v18 = 0LL;
  v8 = 0;
  v9 = a3;
  v10 = MdlFlags & 2;
  v11 = *(_QWORD *)(v6 + 8);
  do
  {
    Next = v9->Next;
    if ( v10 )
      MmUnlockPages(v9);
    ByteCount = v9->ByteCount;
    if ( (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
    {
      MmFlushSection(*(_QWORD *)(a1 + 40), &v20, ByteCount, 0LL, &v18, 1);
      if ( (int)v18 < 0 )
        v8 = v18;
    }
    else
    {
      CcSetDirtyInMask(v11, &v20, ByteCount, 0LL);
    }
    v14 = v9->ByteCount;
    v9 = Next;
    v3 += v14;
    v20 = v3;
  }
  while ( Next );
  if ( v10 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v11 + 536) + 768LL), &LockHandle);
    CcDecrementOpenCount(v11);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( v8 < 0 )
  {
    IsNtstatusExpected = FsRtlIsNtstatusExpected(v8);
    v17 = -1073741591;
    if ( IsNtstatusExpected )
      v17 = v8;
    RtlRaiseStatus(v17);
  }
  do
  {
    v15 = v7->Next;
    IoFreeMdl(v7);
    v7 = v15;
  }
  while ( v15 );
}
