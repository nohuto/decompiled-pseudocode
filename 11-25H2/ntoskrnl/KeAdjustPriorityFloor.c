/*
 * XREFs of KeAdjustPriorityFloor @ 0x140475A2C
 * Callers:
 *     PsAdjustWin32kPriorityFloor @ 0x1404759A0 (PsAdjustWin32kPriorityFloor.c)
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

char __fastcall KeAdjustPriorityFloor(ULONG_PTR BugCheckParameter1, int a2, int a3)
{
  ULONG_PTR v3; // rbx
  ULONG_PTR v4; // r14
  ULONG_PTR v5; // rbp
  unsigned __int8 CurrentIrql; // di
  int v7; // esi
  char v8; // cl
  char v9; // al
  char v10; // al
  int v11; // eax
  __int64 v12; // rdx
  bool v13; // zf
  char result; // al
  _QWORD *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  v3 = BugCheckParameter1;
  v4 = a3;
  v5 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(BugCheckParameter1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter1);
  }
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 64), 0LL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v3 + 64) );
  }
  if ( (_DWORD)v4 )
  {
    v8 = *(_BYTE *)(v4 + v3 + 824);
    if ( v8 == -1 )
      KeBugCheckEx(0x157u, v3, v4, 1uLL, 0LL);
    *(_BYTE *)(v4 + v3 + 824) = v8 + 1;
    *(_DWORD *)(v3 + 856) |= 1 << v4;
  }
  if ( (_DWORD)v5 )
  {
    v9 = *(_BYTE *)(v5 + v3 + 824);
    if ( !v9 )
      KeBugCheckEx(0x157u, v3, v5, 2uLL, 0LL);
    v10 = v9 - 1;
    *(_BYTE *)(v5 + v3 + 824) = v10;
    if ( !v10 )
      *(_DWORD *)(v3 + 856) ^= 1 << v5;
  }
  v11 = KiComputeThreadPriority(v3, 0);
  KiSetPriorityThread((_BYTE *)v3, (__int64)&v15, v11);
  v13 = v15 == 0LL;
  *(_QWORD *)(v3 + 64) = 0LL;
  if ( !v13 )
    return KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v15, CurrentIrql);
  if ( KiIrqlFlags )
  {
    LOBYTE(v12) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
