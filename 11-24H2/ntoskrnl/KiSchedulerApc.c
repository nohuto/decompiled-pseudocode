/*
 * XREFs of KiSchedulerApc @ 0x1402E00D0
 * Callers:
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiSignalThreadForApc @ 0x1402DD8B0 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1402DF8C0 (KiInsertQueueApc.c)
 *     KiHandleDeferredPreemption @ 0x1402E03DC (KiHandleDeferredPreemption.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KiRemoveQueueApc @ 0x14032CD30 (KiRemoveQueueApc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14032DD90 (KiReleaseThreadLockLowerIrql.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     DbgkForwardException @ 0x1408F32F0 (DbgkForwardException.c)
 */

void __fastcall KiSchedulerApc(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r14d
  KPROCESSOR_MODE v6; // di
  bool v7; // si
  __int64 v8; // rsi
  KPROCESSOR_MODE v9; // si
  bool v10; // zf
  int v11; // eax
  unsigned int v12; // eax
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int v15; // esi
  __int64 v16; // r8
  unsigned __int8 v17[16]; // [rsp+30h] [rbp-99h] BYREF
  _DWORD v18[44]; // [rsp+40h] [rbp-89h] BYREF

  memset_0(v18, 0, 0x98uLL);
  v5 = *(_DWORD *)(a1 + 120) & 0x8000;
  v17[0] = 0;
  if ( (*(_DWORD *)(a1 + 120) & 0x400) != 0 && !v5 )
    KiHandleDeferredPreemption(a1);
  if ( !*(_DWORD *)(a1 + 740) && !v5 )
  {
    v6 = (*(_DWORD *)(a1 + 116) & 0x40000) != 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x40000) == 0 )
    {
      v8 = *(_QWORD *)(a1 + 144);
      if ( v8 )
      {
        --*(_WORD *)(a1 + 486);
        v9 = *(_BYTE *)(v8 + 368) & 1;
        v10 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
        v6 = v9;
        if ( v10 && *(_QWORD *)(a1 + 152) != a1 + 152 )
          KiCheckForKernelApcDelivery();
      }
    }
    v7 = (*(_BYTE *)(a1 + 194) & 2) != 0;
    if ( (*(_BYTE *)(a1 + 194) & 2) != 0 )
    {
      KiAcquireThreadLockRaiseToDpc(a1, v17);
      v7 = (*(_BYTE *)(a1 + 194) & 2) != 0;
      *(_BYTE *)(a1 + 194) &= ~2u;
      KiReleaseThreadLockLowerIrql(a1);
    }
    *(_DWORD *)(a1 + 116) |= 0x80000u;
    KeWaitForSingleObject((PVOID)(a1 + 736), Suspended, v6, 0, 0LL);
    *(_DWORD *)(a1 + 116) &= ~0x80000u;
    if ( v7 )
    {
      KiAcquireThreadLockRaiseToDpc(a1, v17);
      if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
        *(_BYTE *)(a1 + 194) |= 2u;
      KiReleaseThreadLockLowerIrql(a1);
    }
  }
  *(_DWORD *)(a1 + 116) &= ~0x40000u;
  if ( v5 )
  {
    v11 = *(_DWORD *)(a1 + 120);
    v18[40] = -1073741523;
    v18[41] = -1073739996;
    v18[42] = -1073739995;
    v12 = v11 & 0xC0000;
    if ( v12 )
    {
      LOBYTE(v4) = 1;
      v18[1] = 1;
      LOBYTE(v2) = 1;
      v18[0] = v18[((unsigned __int64)v12 >> 18) + 39];
      DbgkForwardException(v18, v2, v4);
      LOBYTE(v16) = 1;
      DbgkForwardException(v18, 0LL, v16);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v2) = 2;
      LOBYTE(v3) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v3, v2);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v15 = 0;
    v17[0] = CurrentIrql;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v15);
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
      v10 = *(_BYTE *)(a1 + 730) == 0;
      *(_QWORD *)(a1 + 680) = KiSchedulerApcTerminate;
      *(_BYTE *)(a1 + 729) = 1;
      if ( !v10 )
        KiRemoveQueueApc(a1 + 648);
      *(_BYTE *)(a1 + 730) = 1;
      KiInsertQueueApc(a1 + 648);
      KiSignalThreadForApc((__int64)CurrentPrcb, a1 + 648, CurrentIrql, 0);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  }
}
