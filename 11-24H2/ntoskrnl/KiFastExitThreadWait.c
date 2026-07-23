/*
 * XREFs of KiFastExitThreadWait @ 0x14027FE50
 * Callers:
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     KeRemoveQueueEx @ 0x1402D4100 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KiWaitForAllObjects @ 0x14032D1E0 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x14032EC3C (KeWaitForAlertByThreadId.c)
 *     KeRemovePriQueue @ 0x14032F920 (KeRemovePriQueue.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 *     KiExitThreadWaitReschedule @ 0x1402E1088 (KiExitThreadWaitReschedule.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall KiFastExitThreadWait(struct _KPRCB *a1, ULONG_PTR BugCheckParameter1, __int64 a3, __int64 a4)
{
  char v4; // bl
  unsigned int v7; // esi
  __int64 result; // rax
  int v9; // ebx
  unsigned __int64 v10; // rdi
  unsigned int v11; // esi
  ULONG_PTR v12; // r9
  char v13; // al
  char v14; // al
  unsigned int v15; // edx
  signed __int32 v16[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v4 = a3;
  *(_BYTE *)(BugCheckParameter1 + 388) = 2;
  _InterlockedOr(v16, 0);
  if ( *(_QWORD *)(BugCheckParameter1 + 64) )
  {
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, BugCheckParameter1, a3, a4) )
        {
          HvlNotifyLongSpinWait(v7);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  }
  v17 = 0LL;
  if ( (v4 & 2) != 0 )
  {
    v11 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v11 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, BugCheckParameter1, a3, a4) )
        {
          HvlNotifyLongSpinWait(v11);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v12 = *(char *)(BugCheckParameter1 + 795);
    v13 = *(_BYTE *)(v12 + BugCheckParameter1 + 824);
    if ( !v13 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v12, 2uLL, 0LL);
    v14 = v13 - 1;
    *(_BYTE *)(v12 + BugCheckParameter1 + 824) = v14;
    if ( !v14 )
    {
      v15 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v12);
      *(_DWORD *)(BugCheckParameter1 + 856) = v15;
      if ( v15 < 1 << v12
        && *(char *)(BugCheckParameter1 + 195) <= 31
        && (int)KiComputeThreadPriority(BugCheckParameter1, 0LL, 0LL) < *(char *)(BugCheckParameter1 + 195) )
      {
        KiSetPriorityThread(BugCheckParameter1, &v17);
      }
    }
    *(_BYTE *)(BugCheckParameter1 + 795) = 32;
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  }
  result = *(unsigned __int8 *)(BugCheckParameter1 + 112);
  v9 = v4 & 1;
  if ( (result & 0x38) != 0 )
  {
    if ( (result & 0x18) != 0 )
    {
      return KiExitThreadWaitReschedule(a1);
    }
    else
    {
      KiProcessDeferredReadyList(a1);
      result = KiDeliverApc(0LL, 0LL, 0LL);
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
      __writecr8(0LL);
    }
  }
  else
  {
    v10 = *(unsigned __int8 *)(BugCheckParameter1 + 390);
    if ( v9 )
    {
      return KiProcessDeferredReadyList(a1);
    }
    else
    {
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v10);
      __writecr8(v10);
    }
  }
  return result;
}
