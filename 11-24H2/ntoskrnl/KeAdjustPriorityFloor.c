/*
 * XREFs of KeAdjustPriorityFloor @ 0x140470A3C
 * Callers:
 *     PsAdjustWin32kPriorityFloor @ 0x1404709B0 (PsAdjustWin32kPriorityFloor.c)
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

char __fastcall KeAdjustPriorityFloor(ULONG_PTR BugCheckParameter1, __int64 a2, int a3)
{
  ULONG_PTR v3; // rbx
  ULONG_PTR v4; // r14
  ULONG_PTR v5; // rbp
  unsigned __int8 CurrentIrql; // di
  unsigned int v7; // esi
  char v8; // cl
  char v9; // al
  char v10; // al
  unsigned int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  bool v14; // zf
  char result; // al
  _QWORD *v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = 0LL;
  v3 = BugCheckParameter1;
  v4 = a3;
  v5 = (int)a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(BugCheckParameter1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter1, a2);
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
        HvlNotifyLongSpinWait(v7);
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
  v11 = KiComputeThreadPriority(v3, 0, 0);
  KiSetPriorityThread((_KTHREAD *)v3, (__int64)&v16, v11, v12);
  v14 = v16 == 0LL;
  *(_QWORD *)(v3 + 64) = 0LL;
  if ( !v14 )
    return KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v16, CurrentIrql);
  if ( KiIrqlFlags )
  {
    LOBYTE(v13) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
