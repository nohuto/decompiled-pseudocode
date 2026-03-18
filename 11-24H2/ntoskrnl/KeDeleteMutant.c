/*
 * XREFs of KeDeleteMutant @ 0x14041BA48
 * Callers:
 *     ExpDeleteMutant @ 0x14041BA30 (ExpDeleteMutant.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     KiTryUnwaitThread @ 0x1403D95F0 (KiTryUnwaitThread.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x14041BCD0 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeAbCrossThreadDelete @ 0x1405C3BDC (KeAbCrossThreadDelete.c)
 */

void __fastcall KeDeleteMutant(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v3; // r12d
  volatile signed __int32 *v4; // rdi
  char v5; // r13
  ULONG_PTR v6; // rbx
  unsigned __int8 CurrentIrql; // r15
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // esi
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // rsi
  _QWORD *v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // rcx
  char v19; // cl
  volatile signed __int32 v21; // [rsp+30h] [rbp-58h]
  struct _KPRCB *CurrentPrcb; // [rsp+90h] [rbp+8h]
  __int64 v23; // [rsp+A0h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v23 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = BugCheckParameter2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(BugCheckParameter2) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter2, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v6);
  v8 = *(_DWORD *)(v6 + 4);
  *(_BYTE *)(v6 + 48) |= 1u;
  *(_DWORD *)(v6 + 4) = 1;
  if ( v8 > 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)v6, 0xFFFFFF7F);
    goto LABEL_5;
  }
  v12 = 0;
  v21 = *(_DWORD *)v6;
  BYTE2(v21) = 0;
  *(_DWORD *)v6 = v21;
  v3 = *(unsigned __int8 *)(v6 + 49);
  v4 = *(volatile signed __int32 **)(v6 + 40);
  while ( _interlockedbittestandset64(v4 + 16, 0LL) )
  {
    do
    {
      if ( (++v12 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v12);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *((_QWORD *)v4 + 8) );
  }
  v13 = *(_QWORD *)(v6 + 24);
  v14 = *(_QWORD **)(v6 + 32);
  if ( *(_QWORD *)(v13 + 8) != v6 + 24 || *v14 != v6 + 24 )
LABEL_23:
    __fastfail(3u);
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  if ( (*(_BYTE *)(v6 + 48) & 2) != 0 )
  {
    v5 = 1;
    if ( v4 != (volatile signed __int32 *)CurrentThread )
      ObfReferenceObjectWithTag((PVOID)v4, 0x746C6644u);
  }
  *((_QWORD *)v4 + 8) = 0LL;
  *(_QWORD *)(v6 + 40) = 0LL;
  v15 = *(_QWORD **)(v6 + 8);
  while ( v15 != (_QWORD *)(v6 + 8) )
  {
    v16 = (_QWORD *)*v15;
    v17 = (__int64)v15;
    v15 = v16;
    v18 = *(_QWORD **)(v17 + 8);
    if ( v16[1] != v17 || *v18 != v17 )
      goto LABEL_23;
    *v18 = v16;
    v16[1] = v18;
    v19 = *(_BYTE *)(v17 + 16);
    switch ( v19 )
    {
      case 1:
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v17, *(unsigned __int16 *)(v17 + 18), &v23) )
        {
LABEL_26:
          if ( (*(_DWORD *)(v6 + 4))-- == 1 )
            goto LABEL_27;
        }
        break;
      case 2:
        *(_BYTE *)(v17 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v17 + 24), (__int64 *)v17);
        goto LABEL_26;
      case 4:
        *(_BYTE *)(v17 + 17) = 5;
        *(_DWORD *)(v6 + 4) = 0;
        KeInsertQueueDpc(*(PRKDPC *)(v17 + 24), (PVOID)v6, (PVOID)v17);
        break;
      default:
        KiTryUnwaitThread((__int64)CurrentPrcb, v17, 256LL, 0LL);
        break;
    }
  }
LABEL_27:
  _InterlockedAnd((volatile signed __int32 *)v6, 0xFFFFFF7F);
  KiAcquireReleaseObjectRundownLockExclusive(v6);
LABEL_5:
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
  if ( v5 )
  {
    if ( v4 != (volatile signed __int32 *)CurrentThread )
    {
      KeAbCrossThreadDelete(v6, v4);
      ObfDereferenceObjectWithTag((PVOID)v4, 0x746C6644u);
      return;
    }
    KeAbPostRelease(v6);
  }
  else if ( v4 != (volatile signed __int32 *)CurrentThread )
  {
    return;
  }
  if ( v3 )
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v9, v10, v11);
}
