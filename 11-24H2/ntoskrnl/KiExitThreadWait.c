/*
 * XREFs of KiExitThreadWait @ 0x14024EFB0
 * Callers:
 *     KiCommitThreadWait @ 0x140340C20 (KiCommitThreadWait.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x14024FA80 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitThreadWaitReschedule @ 0x140297854 (KiExitThreadWaitReschedule.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x14031D9B0 (KiDeliverApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall KiExitThreadWait(struct _KPRCB *a1, ULONG_PTR BugCheckParameter1, char a3)
{
  __int64 result; // rax
  int v7; // ebx
  unsigned __int64 v8; // rdi
  unsigned int v9; // esi
  ULONG_PTR v10; // r9
  char v11; // al
  char v12; // al
  unsigned int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

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
        v14 = KiComputeThreadPriority(BugCheckParameter1, 0LL, 0LL);
        if ( (int)v14 < *(char *)(BugCheckParameter1 + 195) )
          KiSetPriorityThread(BugCheckParameter1, &v15, v14);
      }
    }
    *(_BYTE *)(BugCheckParameter1 + 795) = 32;
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  }
  result = *(unsigned __int8 *)(BugCheckParameter1 + 112);
  v7 = a3 & 1;
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
    v8 = *(unsigned __int8 *)(BugCheckParameter1 + 390);
    if ( v7 )
    {
      return KiProcessDeferredReadyList(a1);
    }
    else
    {
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v8);
      __writecr8(v8);
    }
  }
  return result;
}
