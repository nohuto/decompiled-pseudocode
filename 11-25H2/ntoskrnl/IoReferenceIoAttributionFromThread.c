/*
 * XREFs of IoReferenceIoAttributionFromThread @ 0x1403AAA00
 * Callers:
 *     MiCheckAndUpdateIoAttribution @ 0x1403AA938 (MiCheckAndUpdateIoAttribution.c)
 *     CcAsyncCopyRead @ 0x1403AAC00 (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadNuma @ 0x140499150 (CcScheduleReadAheadNuma.c)
 *     CcCopyReadEx @ 0x1404DC880 (CcCopyReadEx.c)
 *     CcMapAndCopyInToCache @ 0x1404DDB50 (CcMapAndCopyInToCache.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall IoReferenceIoAttributionFromThread(struct _KTHREAD *a1, unsigned __int64 *a2)
{
  ULONG_PTR Object; // rbx
  int v5; // ebp
  _KPROCESS *Process; // rdi
  unsigned int v7; // esi
  signed __int64 v8; // rax
  bool v9; // cc
  signed __int64 BugCheckParameter4; // rax
  KIRQL v12; // al
  unsigned __int64 UserWaitTime; // rdi
  unsigned __int64 v14; // r14
  KIRQL v15; // al
  KIRQL v16; // r14

  Object = (ULONG_PTR)a1[1].WaitBlock[1].Object;
  v5 = 0;
  if ( !Object )
    goto LABEL_2;
  if ( a1 == KeGetCurrentThread() )
    goto LABEL_11;
  v15 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
  Object = (ULONG_PTR)a1[1].WaitBlock[1].Object;
  v16 = v15;
  if ( Object )
  {
    ObfReferenceObjectWithTag(a1[1].WaitBlock[1].Object, 0x746C6644u);
    v5 = 1;
  }
  ExReleaseSpinLockShared(&PspThreadWorkOnBehalfLock, v16);
  if ( Object )
LABEL_11:
    Process = *(_KPROCESS **)(Object + 544);
  else
LABEL_2:
    Process = a1->Process;
  if ( Process[3].UserWaitTime )
  {
    v12 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
    UserWaitTime = Process[3].UserWaitTime;
    v14 = v12;
    if ( UserWaitTime )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(UserWaitTime + 32)) <= 1 )
        __fastfail(0xEu);
      *a2 = UserWaitTime;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v14);
    __writecr8(v14);
    v7 = 0;
    if ( !UserWaitTime )
      v7 = -1073741275;
  }
  else
  {
    v7 = -1073741275;
  }
  if ( v5 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(Object - 48, 0, 1u, 0x746C6644u);
    v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(Object - 48), 0xFFFFFFFFFFFFFFFFuLL);
    v9 = v8 <= 1;
    BugCheckParameter4 = v8 - 1;
    if ( v9 )
    {
      if ( *(_QWORD *)(Object - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(Object - 48) >> 8)],
          Object,
          3uLL,
          *(_QWORD *)(Object - 40));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, Object, 4uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(Object - 48);
    }
  }
  return v7;
}
