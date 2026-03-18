/*
 * XREFs of KiExitThreadWait @ 0x1402E5EA0
 * Callers:
 *     KiCommitThreadWait @ 0x14029DDA0 (KiCommitThreadWait.c)
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

void __fastcall KiExitThreadWait(struct _KPRCB *a1, ULONG_PTR BugCheckParameter1, char a3)
{
  char v6; // al
  int v7; // ebx
  unsigned __int64 v8; // rdi
  unsigned int v9; // esi
  ULONG_PTR v10; // r8
  char v11; // al
  char v12; // al
  unsigned int v13; // edx
  unsigned int v14; // eax
  _QWORD *v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  if ( (a3 & 2) != 0 )
  {
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v10 = *(char *)(BugCheckParameter1 + 795);
    v11 = *(_BYTE *)(v10 + BugCheckParameter1 + 824);
    if ( !v11 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v10, 2uLL, 0LL);
    v12 = v11 - 1;
    *(_BYTE *)(v10 + BugCheckParameter1 + 824) = v12;
    if ( !v12 )
    {
      v13 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v10);
      *(_DWORD *)(BugCheckParameter1 + 856) = v13;
      if ( v13 < 1 << v10 && *(char *)(BugCheckParameter1 + 195) <= 31 )
      {
        v14 = KiComputeThreadPriority(BugCheckParameter1, 0LL);
        if ( (int)v14 < *(char *)(BugCheckParameter1 + 195) )
          KiSetPriorityThread(BugCheckParameter1, &v15, v14);
      }
    }
    *(_BYTE *)(BugCheckParameter1 + 795) = 32;
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  }
  v6 = *(_BYTE *)(BugCheckParameter1 + 112);
  v7 = a3 & 1;
  if ( (v6 & 0x38) != 0 )
  {
    if ( (v6 & 0x18) != 0 )
    {
      KiExitThreadWaitReschedule(a1);
    }
    else
    {
      KiProcessDeferredReadyList(a1, &v15, 1u);
      KiDeliverApc(0, 0LL, 0LL);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
      __writecr8(0LL);
    }
  }
  else
  {
    v8 = *(unsigned __int8 *)(BugCheckParameter1 + 390);
    if ( v7 )
    {
      KiProcessDeferredReadyList(a1, &v15, v8);
    }
    else
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v8);
      __writecr8(v8);
    }
  }
}
