/*
 * XREFs of KeAdjustWobPriority @ 0x140306698
 * Callers:
 *     PspUpdateContainerImpersonation @ 0x1403061BC (PspUpdateContainerImpersonation.c)
 *     IopProcessWorkItem @ 0x140306B80 (IopProcessWorkItem.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall KeAdjustWobPriority(ULONG_PTR BugCheckParameter1, int a2)
{
  ULONG_PTR v2; // rbx
  ULONG_PTR v3; // rbp
  unsigned __int8 CurrentIrql; // di
  unsigned int v5; // esi
  ULONG_PTR v6; // rcx
  char v7; // al
  int v8; // eax
  __int64 v9; // rdx
  bool v10; // zf
  char result; // al
  char v12; // al
  char v13; // al
  _QWORD *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  v2 = BugCheckParameter1;
  v3 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(BugCheckParameter1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter1);
  }
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 64), 0LL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(BugCheckParameter1) )
      {
        HvlNotifyLongSpinWait(v5);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v2 + 64) );
  }
  v6 = *(char *)(v2 + 795);
  if ( (_DWORD)v6 != 32 )
  {
    v12 = *(_BYTE *)(v6 + v2 + 824);
    if ( !v12 )
      KeBugCheckEx(0x157u, v2, v6, 2uLL, 0LL);
    v13 = v12 - 1;
    *(_BYTE *)(v6 + v2 + 824) = v13;
    if ( !v13 )
      *(_DWORD *)(v2 + 856) ^= 1 << v6;
    *(_BYTE *)(v2 + 795) = 32;
  }
  if ( (_DWORD)v3 != 32 )
  {
    *(_BYTE *)(v2 + 795) = v3;
    v7 = *(_BYTE *)(v3 + v2 + 824);
    if ( v7 == -1 )
      KeBugCheckEx(0x157u, v2, v3, 1uLL, 0LL);
    *(_BYTE *)(v3 + v2 + 824) = v7 + 1;
    *(_DWORD *)(v2 + 856) |= 1 << v3;
  }
  v8 = KiComputeThreadPriority(v2, 0);
  KiSetPriorityThread((_BYTE *)v2, (__int64)&v14, v8);
  v10 = v14 == 0LL;
  *(_QWORD *)(v2 + 64) = 0LL;
  if ( !v10 )
    return KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v14, CurrentIrql);
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
