/*
 * XREFs of ObQueryObjectAuditingByHandle @ 0x140A0FC60
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x140846FB0 (ExMapHandleToPointer.c)
 *     ObReferenceProcessHandleTable @ 0x140894BB0 (ObReferenceProcessHandleTable.c)
 */

NTSTATUS __stdcall ObQueryObjectAuditingByHandle(HANDLE Handle, PBOOLEAN GenerateOnClose)
{
  char v2; // bp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // rbx
  struct _EX_RUNDOWN_REF *Process; // rsi
  unsigned __int64 Count; // rdi
  signed __int64 *v8; // rax
  __int64 v9; // rbx
  NTSTATUS v10; // ebx
  signed __int32 v12[14]; // [rsp+0h] [rbp-38h] BYREF

  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = (__int64)Handle;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  if ( CurrentThread->PreviousMode
    || ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL
    || (unsigned __int64)Handle > 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    {
      Count = ObReferenceProcessHandleTable(Process);
      if ( !Count )
        return -1073741816;
      v2 = 1;
    }
    else
    {
      Count = Process[96].Count;
    }
  }
  else
  {
    Count = ObpKernelHandleTable;
    v5 = (unsigned __int64)Handle ^ 0xFFFFFFFF80000000uLL;
  }
  --CurrentThread->KernelApcDisable;
  v8 = ExMapHandleToPointer(Count, v5);
  if ( v8 )
  {
    v9 = *v8 >> 17;
    _InterlockedIncrement64(v8);
    _InterlockedOr(v12, 0);
    if ( *(_QWORD *)(Count + 48) )
      ExfUnblockPushLock(Count + 48, 0LL);
    *GenerateOnClose = (v9 & 4) != 0;
    v10 = 0;
  }
  else
  {
    v10 = -1073741816;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  if ( v2 )
    ExReleaseRundownProtection_0(Process + 61);
  return v10;
}
