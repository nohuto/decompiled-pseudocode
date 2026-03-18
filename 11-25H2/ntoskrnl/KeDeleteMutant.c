/*
 * XREFs of KeDeleteMutant @ 0x14041EA58
 * Callers:
 *     ExpDeleteMutant @ 0x14041EA40 (ExpDeleteMutant.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x14041ECE0 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeAbCrossThreadDelete @ 0x1405BFAFC (KeAbCrossThreadDelete.c)
 */

void __fastcall KeDeleteMutant(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v2; // r12d
  volatile signed __int32 *v3; // rdi
  char v4; // r13
  ULONG_PTR v5; // rbx
  unsigned __int8 CurrentIrql; // r15
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // esi
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  _QWORD *v14; // rsi
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  char v18; // cl
  volatile signed __int32 v20; // [rsp+30h] [rbp-58h]
  struct _KPRCB *CurrentPrcb; // [rsp+90h] [rbp+8h]
  __int64 v22; // [rsp+A0h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v22 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = BugCheckParameter2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(BugCheckParameter2) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v5);
  v7 = *(_DWORD *)(v5 + 4);
  *(_BYTE *)(v5 + 48) |= 1u;
  *(_DWORD *)(v5 + 4) = 1;
  if ( v7 > 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
    goto LABEL_5;
  }
  v11 = 0;
  v20 = *(_DWORD *)v5;
  BYTE2(v20) = 0;
  *(_DWORD *)v5 = v20;
  v2 = *(unsigned __int8 *)(v5 + 49);
  v3 = *(volatile signed __int32 **)(v5 + 40);
  while ( _interlockedbittestandset64(v3 + 16, 0LL) )
  {
    do
    {
      if ( (++v11 & HvlLongSpinCountMask) == 0
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
    while ( *((_QWORD *)v3 + 8) );
  }
  v12 = *(_QWORD *)(v5 + 24);
  v13 = *(_QWORD **)(v5 + 32);
  if ( *(_QWORD *)(v12 + 8) != v5 + 24 || *v13 != v5 + 24 )
LABEL_23:
    __fastfail(3u);
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  if ( (*(_BYTE *)(v5 + 48) & 2) != 0 )
  {
    v4 = 1;
    if ( v3 != (volatile signed __int32 *)CurrentThread )
      ObfReferenceObjectWithTag((PVOID)v3, 0x746C6644u);
  }
  *((_QWORD *)v3 + 8) = 0LL;
  *(_QWORD *)(v5 + 40) = 0LL;
  v14 = *(_QWORD **)(v5 + 8);
  while ( v14 != (_QWORD *)(v5 + 8) )
  {
    v15 = (_QWORD *)*v14;
    v16 = (__int64)v14;
    v14 = v15;
    v17 = *(_QWORD **)(v16 + 8);
    if ( v15[1] != v16 || *v17 != v16 )
      goto LABEL_23;
    *v17 = v15;
    v15[1] = v17;
    v18 = *(_BYTE *)(v16 + 16);
    switch ( v18 )
    {
      case 1:
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v16, *(unsigned __int16 *)(v16 + 18), &v22) )
        {
LABEL_26:
          if ( (*(_DWORD *)(v5 + 4))-- == 1 )
            goto LABEL_27;
        }
        break;
      case 2:
        *(_BYTE *)(v16 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v16 + 24), (__int64 *)v16);
        goto LABEL_26;
      case 4:
        *(_BYTE *)(v16 + 17) = 5;
        *(_DWORD *)(v5 + 4) = 0;
        KeInsertQueueDpc(*(PRKDPC *)(v16 + 24), (PVOID)v5, (PVOID)v16);
        break;
      default:
        KiTryUnwaitThread((__int64)CurrentPrcb, v16, 256LL, 0LL);
        break;
    }
  }
LABEL_27:
  _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
  KiAcquireReleaseObjectRundownLockExclusive(v5);
LABEL_5:
  KiExitDispatcher(CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
  if ( v4 )
  {
    if ( v3 != (volatile signed __int32 *)CurrentThread )
    {
      KeAbCrossThreadDelete(v5, v3);
      ObfDereferenceObjectWithTag((PVOID)v3, 0x746C6644u);
      return;
    }
    KeAbPostRelease(v5);
  }
  else if ( v3 != (volatile signed __int32 *)CurrentThread )
  {
    return;
  }
  if ( v2 )
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v8, v9, v10);
}
