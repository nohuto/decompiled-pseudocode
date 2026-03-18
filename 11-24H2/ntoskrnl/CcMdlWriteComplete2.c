/*
 * XREFs of CcMdlWriteComplete2 @ 0x140461194
 * Callers:
 *     CcMdlWriteComplete @ 0x140A6CFD0 (CcMdlWriteComplete.c)
 *     FsRtlMdlWriteCompleteDev @ 0x140A80E70 (FsRtlMdlWriteCompleteDev.c)
 * Callees:
 *     MmFlushSection @ 0x140240CC4 (MmFlushSection.c)
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     CcDecrementOpenCount @ 0x1402ABDBC (CcDecrementOpenCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     FsRtlIsNtstatusExpected @ 0x140456400 (FsRtlIsNtstatusExpected.c)
 *     CcSetDirtyInMask @ 0x1404614E0 (CcSetDirtyInMask.c)
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
  int v17; // ecx
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
      MmFlushSection(*(__int64 **)(a1 + 40), &v20, ByteCount, 0LL, &v18, 1);
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
