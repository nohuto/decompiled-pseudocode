/*
 * XREFs of KeAdjustWobPriority @ 0x1402D17A4
 * Callers:
 *     IopProcessWorkItem @ 0x1402D1B40 (IopProcessWorkItem.c)
 *     PspUpdateContainerImpersonation @ 0x1403B4C5C (PspUpdateContainerImpersonation.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall KeAdjustWobPriority(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  ULONG_PTR v2; // rbx
  ULONG_PTR v3; // rbp
  unsigned __int8 CurrentIrql; // di
  unsigned int v5; // esi
  ULONG_PTR v6; // rcx
  char v7; // al
  unsigned int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  bool v11; // zf
  char result; // al
  char v13; // al
  char v14; // al
  _QWORD *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  v2 = BugCheckParameter1;
  v3 = (int)a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(BugCheckParameter1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter1, a2);
  }
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 64), 0LL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
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
    v13 = *(_BYTE *)(v6 + v2 + 824);
    if ( !v13 )
      KeBugCheckEx(0x157u, v2, v6, 2uLL, 0LL);
    v14 = v13 - 1;
    *(_BYTE *)(v6 + v2 + 824) = v14;
    if ( !v14 )
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
  v8 = KiComputeThreadPriority(v2, 0, 0);
  KiSetPriorityThread((_KTHREAD *)v2, (__int64)&v15, v8, v9);
  v11 = v15 == 0LL;
  *(_QWORD *)(v2 + 64) = 0LL;
  if ( !v11 )
    return KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v15, CurrentIrql);
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
