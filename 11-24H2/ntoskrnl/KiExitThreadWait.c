/*
 * XREFs of KiExitThreadWait @ 0x14027F5C0
 * Callers:
 *     KiCommitThreadWait @ 0x140320100 (KiCommitThreadWait.c)
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

__int64 __fastcall KiExitThreadWait(struct _KPRCB *a1, ULONG_PTR BugCheckParameter1, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int64 result; // rax
  int v8; // ebx
  unsigned __int64 v9; // rdi
  unsigned int v10; // esi
  ULONG_PTR v11; // r9
  char v12; // al
  char v13; // al
  unsigned int v14; // edx
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = a3;
  v15 = 0LL;
  if ( (a3 & 2) != 0 )
  {
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, BugCheckParameter1, a3, a4) )
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
      if ( v14 < 1 << v11
        && *(char *)(BugCheckParameter1 + 195) <= 31
        && (int)KiComputeThreadPriority(BugCheckParameter1, 0LL, 0LL) < *(char *)(BugCheckParameter1 + 195) )
      {
        KiSetPriorityThread(BugCheckParameter1, &v15);
      }
    }
    *(_BYTE *)(BugCheckParameter1 + 795) = 32;
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  }
  result = *(unsigned __int8 *)(BugCheckParameter1 + 112);
  v8 = v4 & 1;
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
    v9 = *(unsigned __int8 *)(BugCheckParameter1 + 390);
    if ( v8 )
    {
      return KiProcessDeferredReadyList(a1);
    }
    else
    {
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v9);
      __writecr8(v9);
    }
  }
  return result;
}
