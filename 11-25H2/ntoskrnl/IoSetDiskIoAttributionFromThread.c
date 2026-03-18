/*
 * XREFs of IoSetDiskIoAttributionFromThread @ 0x14035D5D0
 * Callers:
 *     MiIssueAsynchronousFlush @ 0x14035B6FC (MiIssueAsynchronousFlush.c)
 *     IoAsynchronousPageWrite @ 0x14035BA6C (IoAsynchronousPageWrite.c)
 *     MiSynchronousPageWrite @ 0x14035C250 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14035C508 (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14035C7E0 (IoSynchronousPageWriteEx.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14035EFF0 (IopBuildAsynchronousFsdRequest.c)
 *     IoSetIoAttributionIrp @ 0x1404A7F60 (IoSetIoAttributionIrp.c)
 *     IopSynchronousServiceTail @ 0x1408C5420 (IopSynchronousServiceTail.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     IopSetDiskIoAttributionExtension @ 0x14035D794 (IopSetDiskIoAttributionExtension.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x14035DE60 (IopSetDiskIoAttributionFromProcess.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IoSetDiskIoAttributionFromThread(__int64 a1, struct _KTHREAD *a2)
{
  _QWORD *Object; // rdi
  unsigned int v3; // ebx
  int v4; // ebp
  _KPROCESS *Process; // rsi
  __int64 v8; // r14
  KIRQL v10; // al
  KIRQL v11; // r14
  unsigned __int64 UserWaitTime; // rax
  int v13; // eax
  KIRQL v14; // [rsp+68h] [rbp+10h]
  unsigned __int64 v15; // [rsp+70h] [rbp+18h]

  Object = a2[1].WaitBlock[1].Object;
  v3 = 0;
  v4 = 0;
  if ( !Object )
    goto LABEL_21;
  if ( a2 == KeGetCurrentThread() )
    goto LABEL_14;
  v10 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
  Object = a2[1].WaitBlock[1].Object;
  v11 = v10;
  if ( Object )
  {
    ObfReferenceObjectWithTag(a2[1].WaitBlock[1].Object, 0x746C6644u);
    v4 = 1;
  }
  ExReleaseSpinLockShared(&PspThreadWorkOnBehalfLock, v11);
  if ( Object )
  {
LABEL_14:
    Process = (_KPROCESS *)Object[68];
  }
  else
  {
LABEL_21:
    if ( a2 == KeGetCurrentThread()
      && a2->ApcState.Process != a2->Process
      && (int)IopSetDiskIoAttributionFromProcess(a1) >= 0 )
    {
      goto LABEL_7;
    }
    Process = a2->Process;
  }
  v8 = 0LL;
  if ( Process[3].UserWaitTime )
  {
    v14 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
    UserWaitTime = Process[3].UserWaitTime;
    v15 = UserWaitTime;
    if ( UserWaitTime )
      v8 = *(_QWORD *)(UserWaitTime + 24);
    ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
    __writecr8(v14);
    if ( v15 )
    {
      v13 = IopSetDiskIoAttributionExtension(a1, v8, KeGetCurrentThread(), 0LL);
      if ( v13 < 0 )
        v3 = v13;
    }
    else
    {
      v3 = -1073741275;
    }
  }
  else
  {
    v3 = -1073741275;
  }
LABEL_7:
  if ( v4 )
    ObDereferenceObjectDeferDeleteWithTag(Object, 0x746C6644u);
  return v3;
}
