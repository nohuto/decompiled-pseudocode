/*
 * XREFs of IoReferenceIoAttributionFromThread @ 0x140273BD0
 * Callers:
 *     MiCheckAndUpdateIoAttribution @ 0x140273B00 (MiCheckAndUpdateIoAttribution.c)
 *     CcAsyncCopyRead @ 0x140273E20 (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadNuma @ 0x140493C50 (CcScheduleReadAheadNuma.c)
 *     CcCopyReadEx @ 0x1404D5990 (CcCopyReadEx.c)
 *     CcMapAndCopyInToCache @ 0x1404D6C60 (CcMapAndCopyInToCache.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
      ObpPushStackInfo(Object - 48);
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
