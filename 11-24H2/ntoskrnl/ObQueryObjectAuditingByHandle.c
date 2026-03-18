/*
 * XREFs of ObQueryObjectAuditingByHandle @ 0x140A16A80
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x14084ACF0 (ExMapHandleToPointer.c)
 *     ObReferenceProcessHandleTable @ 0x140940570 (ObReferenceProcessHandleTable.c)
 */

NTSTATUS __stdcall ObQueryObjectAuditingByHandle(HANDLE Handle, PBOOLEAN GenerateOnClose)
{
  char v2; // bp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // rbx
  struct _EX_RUNDOWN_REF *Process; // rsi
  unsigned __int64 Count; // rdi
  signed __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  NTSTATUS v13; // ebx
  signed __int32 v15[14]; // [rsp+0h] [rbp-38h] BYREF

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
    v12 = *v8 >> 17;
    _InterlockedIncrement64(v8);
    _InterlockedOr(v15, 0);
    if ( *(_QWORD *)(Count + 48) )
      ExfUnblockPushLock(Count + 48, 0LL);
    *GenerateOnClose = (v12 & 4) != 0;
    v13 = 0;
  }
  else
  {
    v13 = -1073741816;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v9, v10, v11);
  if ( v2 )
    ExReleaseRundownProtection_0(Process + 61);
  return v13;
}
