/*
 * XREFs of KiSchedulerApc @ 0x1402F2C80
 * Callers:
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 * Callees:
 *     KiRemoveQueueApc @ 0x140203500 (KiRemoveQueueApc.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x140204DB0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x140204FF0 (KiReleaseThreadLockLowerIrql.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KiInsertQueueApc @ 0x1402F0510 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x1402F1D40 (KiSignalThreadForApc.c)
 *     KiHandleDeferredPreemption @ 0x1402F2F88 (KiHandleDeferredPreemption.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     DbgkForwardException @ 0x14091F420 (DbgkForwardException.c)
 */

void __fastcall KiSchedulerApc(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r14d
  KPROCESSOR_MODE v7; // di
  bool v8; // si
  __int64 v9; // rsi
  KPROCESSOR_MODE v10; // si
  bool v11; // zf
  int v12; // eax
  unsigned int v13; // eax
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int v16; // esi
  unsigned __int8 v17; // dl
  unsigned __int8 v18[16]; // [rsp+30h] [rbp-99h] BYREF
  _DWORD v19[44]; // [rsp+40h] [rbp-89h] BYREF

  memset_0(v19, 0, 0x98uLL);
  v6 = *(_DWORD *)(a1 + 120) & 0x8000;
  v18[0] = 0;
  if ( (*(_DWORD *)(a1 + 120) & 0x400) != 0 && !v6 )
    KiHandleDeferredPreemption(a1);
  if ( !*(_DWORD *)(a1 + 740) && !v6 )
  {
    v7 = (*(_DWORD *)(a1 + 116) & 0x40000) != 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x40000) == 0 )
    {
      v9 = *(_QWORD *)(a1 + 144);
      if ( v9 )
      {
        --*(_WORD *)(a1 + 486);
        v10 = *(_BYTE *)(v9 + 368) & 1;
        v11 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
        v7 = v10;
        if ( v11 && *(_QWORD *)(a1 + 152) != a1 + 152 )
          KiCheckForKernelApcDelivery(v3, v2, v4, v5);
      }
    }
    v8 = (*(_BYTE *)(a1 + 194) & 2) != 0;
    if ( (*(_BYTE *)(a1 + 194) & 2) != 0 )
    {
      KiAcquireThreadLockRaiseToDpc(a1, v18);
      v17 = v18[0];
      v8 = (*(_BYTE *)(a1 + 194) & 2) != 0;
      *(_BYTE *)(a1 + 194) &= ~2u;
      KiReleaseThreadLockLowerIrql(a1, v17);
    }
    *(_DWORD *)(a1 + 116) |= 0x80000u;
    KeWaitForSingleObject((PVOID)(a1 + 736), Suspended, v7, 0, 0LL);
    *(_DWORD *)(a1 + 116) &= ~0x80000u;
    if ( v8 )
    {
      KiAcquireThreadLockRaiseToDpc(a1, v18);
      if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
        *(_BYTE *)(a1 + 194) |= 2u;
      KiReleaseThreadLockLowerIrql(a1, v18[0]);
    }
  }
  *(_DWORD *)(a1 + 116) &= ~0x40000u;
  if ( v6 )
  {
    v12 = *(_DWORD *)(a1 + 120);
    v19[40] = -1073741523;
    v19[41] = -1073739996;
    v19[42] = -1073739995;
    v13 = v12 & 0xC0000;
    if ( v13 )
    {
      v19[1] = 1;
      LOBYTE(v2) = 1;
      v19[0] = v19[((unsigned __int64)v13 >> 18) + 39];
      DbgkForwardException(v19, v2);
      DbgkForwardException(v19, 0LL);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v3) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v3);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v16 = 0;
    v18[0] = CurrentIrql;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v16 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v3) )
        {
          HvlNotifyLongSpinWait(v16);
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
      v11 = *(_BYTE *)(a1 + 730) == 0;
      *(_QWORD *)(a1 + 680) = KiSchedulerApcTerminate;
      *(_BYTE *)(a1 + 729) = 1;
      if ( !v11 )
        KiRemoveQueueApc(a1 + 648);
      *(_BYTE *)(a1 + 730) = 1;
      KiInsertQueueApc(a1 + 648);
      KiSignalThreadForApc((__int64)CurrentPrcb, a1 + 648, CurrentIrql, 0);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    KiExitDispatcher(CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  }
}
