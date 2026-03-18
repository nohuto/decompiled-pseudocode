/*
 * XREFs of KiSchedulerApc @ 0x140295D20
 * Callers:
 *     KiDeliverApc @ 0x14031D9B0 (KiDeliverApc.c)
 * Callees:
 *     KiRemoveQueueApc @ 0x140205750 (KiRemoveQueueApc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x1402067B0 (KiReleaseThreadLockLowerIrql.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiHandleDeferredPreemption @ 0x14029602C (KiHandleDeferredPreemption.c)
 *     KiSignalThreadForApc @ 0x140296870 (KiSignalThreadForApc.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiInsertQueueApc @ 0x1403377A0 (KiInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     DbgkForwardException @ 0x140938C20 (DbgkForwardException.c)
 */

unsigned int __fastcall KiSchedulerApc(__int64 a1)
{
  unsigned int result; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r14d
  KPROCESSOR_MODE v8; // di
  bool v9; // si
  __int64 v10; // rsi
  KPROCESSOR_MODE v11; // si
  bool v12; // zf
  int v13; // eax
  unsigned int v14; // eax
  char CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int v17; // esi
  __int64 v18; // r8
  unsigned __int8 v19; // dl
  __int64 v20; // r8
  unsigned __int8 v21[16]; // [rsp+30h] [rbp-99h] BYREF
  _DWORD v22[44]; // [rsp+40h] [rbp-89h] BYREF

  result = (unsigned int)memset_0(v22, 0, 0x98uLL);
  v7 = *(_DWORD *)(a1 + 120) & 0x8000;
  v21[0] = 0;
  if ( (*(_DWORD *)(a1 + 120) & 0x400) != 0 && !v7 )
    result = KiHandleDeferredPreemption(a1);
  if ( !*(_DWORD *)(a1 + 740) && !v7 )
  {
    v8 = (*(_DWORD *)(a1 + 116) & 0x40000) != 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x40000) == 0 )
    {
      v10 = *(_QWORD *)(a1 + 144);
      if ( v10 )
      {
        --*(_WORD *)(a1 + 486);
        v11 = *(_BYTE *)(v10 + 368) & 1;
        v12 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
        v8 = v11;
        if ( v12 && *(_QWORD *)(a1 + 152) != a1 + 152 )
          KiCheckForKernelApcDelivery(v4, v3, v5, v6);
      }
    }
    v9 = (*(_BYTE *)(a1 + 194) & 2) != 0;
    if ( (*(_BYTE *)(a1 + 194) & 2) != 0 )
    {
      KiAcquireThreadLockRaiseToDpc(a1, v21);
      v19 = v21[0];
      v9 = (*(_BYTE *)(a1 + 194) & 2) != 0;
      *(_BYTE *)(a1 + 194) &= ~2u;
      KiReleaseThreadLockLowerIrql(a1, v19);
    }
    *(_DWORD *)(a1 + 116) |= 0x80000u;
    result = KeWaitForSingleObject((PVOID)(a1 + 736), Suspended, v8, 0, 0LL);
    *(_DWORD *)(a1 + 116) &= ~0x80000u;
    if ( v9 )
    {
      KiAcquireThreadLockRaiseToDpc(a1, v21);
      if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
        *(_BYTE *)(a1 + 194) |= 2u;
      result = KiReleaseThreadLockLowerIrql(a1, v21[0]);
    }
  }
  *(_DWORD *)(a1 + 116) &= ~0x40000u;
  if ( v7 )
  {
    v13 = *(_DWORD *)(a1 + 120);
    v22[40] = -1073741523;
    v22[41] = -1073739996;
    v22[42] = -1073739995;
    v14 = v13 & 0xC0000;
    if ( v14 )
    {
      LOBYTE(v5) = 1;
      v22[1] = 1;
      LOBYTE(v3) = 1;
      v22[0] = v22[((unsigned __int64)v14 >> 18) + 39];
      DbgkForwardException(v22, v3, v5);
      LOBYTE(v20) = 1;
      DbgkForwardException(v22, 0LL, v20);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v3) = 2;
      LOBYTE(v4) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v4, v3);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v17 = 0;
    v21[0] = CurrentIrql;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v17 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v17);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      v12 = *(_BYTE *)(a1 + 730) == 0;
      *(_QWORD *)(a1 + 680) = KiSchedulerApcTerminate;
      *(_BYTE *)(a1 + 729) = 1;
      if ( !v12 )
        KiRemoveQueueApc(a1 + 648);
      *(_BYTE *)(a1 + 730) = 1;
      KiInsertQueueApc(a1 + 648);
      LOBYTE(v18) = CurrentIrql;
      KiSignalThreadForApc(CurrentPrcb, a1 + 648, v18, 0LL);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    return KiExitDispatcher(CurrentPrcb, CurrentIrql);
  }
  return result;
}
