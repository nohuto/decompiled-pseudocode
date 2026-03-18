/*
 * XREFs of KiFastExitThreadWait @ 0x1402E7020
 * Callers:
 *     KiWaitForAllObjects @ 0x14027DDF0 (KiWaitForAllObjects.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x14029EC50 (KeRemoveQueueEx.c)
 *     KeRemovePriQueue @ 0x140305410 (KeRemovePriQueue.c)
 *     KeWaitForAlertByThreadId @ 0x140305CB0 (KeWaitForAlertByThreadId.c)
 *     KeWaitForGate @ 0x140418844 (KeWaitForGate.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiExitThreadWaitReschedule @ 0x1402F39F4 (KiExitThreadWaitReschedule.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall KiFastExitThreadWait(struct _KPRCB *a1, ULONG_PTR BugCheckParameter1, char a3)
{
  unsigned int v6; // esi
  char v7; // al
  int v8; // ebx
  unsigned __int64 v9; // rdi
  unsigned int v10; // esi
  ULONG_PTR v11; // r9
  char v12; // al
  char v13; // al
  unsigned int v14; // edx
  unsigned int v15; // eax
  signed __int32 v16[8]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v17; // [rsp+68h] [rbp+20h] BYREF

  *(_BYTE *)(BugCheckParameter1 + 388) = 2;
  _InterlockedOr(v16, 0);
  if ( *(_QWORD *)(BugCheckParameter1 + 64) )
  {
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
        {
          HvlNotifyLongSpinWait(v6);
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
  if ( (a3 & 2) != 0 )
  {
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v11 = *(char *)(BugCheckParameter1 + 795);
    v12 = *(_BYTE *)(v11 + BugCheckParameter1 + 824);
    if ( !v12 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v11, 2uLL, 0LL);
    v13 = v12 - 1;
    *(_BYTE *)(v11 + BugCheckParameter1 + 824) = v13;
    if ( !v13 )
    {
      v14 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v11);
      *(_DWORD *)(BugCheckParameter1 + 856) = v14;
      if ( v14 < 1 << v11 && *(char *)(BugCheckParameter1 + 195) <= 31 )
      {
        v15 = KiComputeThreadPriority(BugCheckParameter1, 0LL);
        if ( (int)v15 < *(char *)(BugCheckParameter1 + 195) )
          KiSetPriorityThread(BugCheckParameter1, &v17, v15);
      }
    }
    *(_BYTE *)(BugCheckParameter1 + 795) = 32;
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  }
  v7 = *(_BYTE *)(BugCheckParameter1 + 112);
  v8 = a3 & 1;
  if ( (v7 & 0x38) != 0 )
  {
    if ( (v7 & 0x18) != 0 )
    {
      KiExitThreadWaitReschedule(a1);
    }
    else
    {
      KiProcessDeferredReadyList(a1, &v17, 1u);
      KiDeliverApc(0, 0LL, 0LL);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
      __writecr8(0LL);
    }
  }
  else
  {
    v9 = *(unsigned __int8 *)(BugCheckParameter1 + 390);
    if ( v8 )
    {
      KiProcessDeferredReadyList(a1, &v17, v9);
    }
    else
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v9);
      __writecr8(v9);
    }
  }
}
