/*
 * XREFs of KeDeleteMutant @ 0x14040F588
 * Callers:
 *     ExpDeleteMutant @ 0x14040F570 (ExpDeleteMutant.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x14040F810 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeAbCrossThreadDelete @ 0x1405C11AC (KeAbCrossThreadDelete.c)
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
  unsigned int v9; // esi
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // rsi
  _QWORD *v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  char v16; // cl
  volatile signed __int32 v18; // [rsp+30h] [rbp-58h]
  struct _KPRCB *CurrentPrcb; // [rsp+90h] [rbp+8h]
  __int64 v20; // [rsp+A0h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v20 = 0LL;
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
  v9 = 0;
  v18 = *(_DWORD *)v6;
  BYTE2(v18) = 0;
  *(_DWORD *)v6 = v18;
  v3 = *(unsigned __int8 *)(v6 + 49);
  v4 = *(volatile signed __int32 **)(v6 + 40);
  while ( _interlockedbittestandset64(v4 + 16, 0LL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *((_QWORD *)v4 + 8) );
  }
  v10 = *(_QWORD *)(v6 + 24);
  v11 = *(_QWORD **)(v6 + 32);
  if ( *(_QWORD *)(v10 + 8) != v6 + 24 || *v11 != v6 + 24 )
LABEL_23:
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  if ( (*(_BYTE *)(v6 + 48) & 2) != 0 )
  {
    v5 = 1;
    if ( v4 != (volatile signed __int32 *)CurrentThread )
      ObfReferenceObjectWithTag((PVOID)v4, 0x746C6644u);
  }
  *((_QWORD *)v4 + 8) = 0LL;
  *(_QWORD *)(v6 + 40) = 0LL;
  v12 = *(_QWORD **)(v6 + 8);
  while ( v12 != (_QWORD *)(v6 + 8) )
  {
    v13 = (_QWORD *)*v12;
    v14 = (__int64)v12;
    v12 = v13;
    v15 = *(_QWORD **)(v14 + 8);
    if ( v13[1] != v14 || *v15 != v14 )
      goto LABEL_23;
    *v15 = v13;
    v13[1] = v15;
    v16 = *(_BYTE *)(v14 + 16);
    switch ( v16 )
    {
      case 1:
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v14, *(unsigned __int16 *)(v14 + 18), &v20) )
        {
LABEL_26:
          if ( (*(_DWORD *)(v6 + 4))-- == 1 )
            goto LABEL_27;
        }
        break;
      case 2:
        *(_BYTE *)(v14 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v14 + 24), (__int64 *)v14);
        goto LABEL_26;
      case 4:
        *(_BYTE *)(v14 + 17) = 5;
        *(_DWORD *)(v6 + 4) = 0;
        KeInsertQueueDpc(*(PRKDPC *)(v14 + 24), (PVOID)v6, (PVOID)v14);
        break;
      default:
        KiTryUnwaitThread((__int64)CurrentPrcb, v14, 256LL, 0LL);
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
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
}
