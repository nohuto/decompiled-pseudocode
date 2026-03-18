/*
 * XREFs of KeSetSystemMultipleGroupAffinityThread @ 0x1404C6BDC
 * Callers:
 *     PsSetSystemMultipleGroupAffinityThread @ 0x1405E5760 (PsSetSystemMultipleGroupAffinityThread.c)
 *     MiCombineAllPhysicalMemory @ 0x1409F24E8 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140257100 (KeAddGroupAffinityEx.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiSetSystemAffinityThread @ 0x1403398F4 (KiSetSystemAffinityThread.c)
 *     KeFirstGroupAffinityEx @ 0x14045A8C0 (KeFirstGroupAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405C0050 (KiCpuPartitionCheckAffinitization.c)
 */

__int64 __fastcall KeSetSystemMultipleGroupAffinityThread(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned __int16 *v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned int i; // r8d
  __int64 *v10; // rdx
  __int64 v11; // rax
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r13
  unsigned int v14; // esi
  _KTHREAD *CurrentThread; // rdi
  int MiscFlags; // eax
  char v17; // r14
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rsi
  __int64 v22; // r8
  unsigned int v23; // ebx
  __int64 v25; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  v25 = 0LL;
  KeGetCurrentIrql();
  if ( KeGetCurrentIrql() > 2u )
    return (unsigned int)-1073741811;
  if ( a2 > KeActiveProcessors.Count )
    return (unsigned int)-1073741811;
  if ( *(_BYTE *)(a3 + 18) >= 3u )
    return (unsigned int)-1073741811;
  v6 = *(unsigned __int16 **)(a3 + 24);
  v7 = *v6;
  if ( !(_WORD)v7 )
    return (unsigned int)-1073741811;
  v8 = v6[1];
  if ( (unsigned __int16)v7 > (unsigned __int16)v8
    || *((_DWORD *)v6 + 1)
    || (unsigned __int16)v8 < KeActiveProcessors.Count )
  {
    return (unsigned int)-1073741811;
  }
  for ( i = 0; i < (unsigned int)v3; ++i )
  {
    v10 = (__int64 *)(a1 + 16LL * i);
    if ( *((_WORD *)v10 + 5) | (unsigned __int16)(*((_WORD *)v10 + 6) | *((_WORD *)v10 + 7)) )
      return (unsigned int)-1073741811;
    v11 = *((unsigned __int16 *)v10 + 4);
    if ( (unsigned __int16)v11 >= KeActiveProcessors.Count )
      return (unsigned int)-1073741811;
    v8 = KeActiveProcessors.Bitmap[v11];
    v7 = *v10;
    if ( (v8 & v7) != v7 )
      return (unsigned int)-1073741811;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = 2;
    LOBYTE(v8) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v8, v7);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
    {
      if ( (++v14 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v14);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( CurrentThread->ThreadLock );
  }
  MiscFlags = CurrentThread->MiscFlags;
  v17 = 1;
  if ( (MiscFlags & 8) == 0 )
  {
    CurrentThread->MiscFlags = MiscFlags | 8;
    if ( (*(_BYTE *)(a3 + 19) & 1) != 0 )
      goto LABEL_45;
    goto LABEL_34;
  }
  Next = CurrentThread->SystemAffinityTokenListHead.Next;
  if ( !Next )
    goto LABEL_43;
  if ( Next != (struct _SINGLE_LIST_ENTRY *)a3 )
  {
    if ( (*(_BYTE *)(a3 + 19) & 1) != 0 )
      goto LABEL_45;
    v19 = BYTE2(Next[2].Next);
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 != 1 )
          goto LABEL_35;
        goto LABEL_34;
      }
LABEL_43:
      KeFirstGroupAffinityEx(a3 + 8, &CurrentThread->Affinity->Count);
      *(_BYTE *)(a3 + 19) |= 2u;
      *(_BYTE *)(a3 + 18) = 2;
      goto LABEL_35;
    }
LABEL_34:
    *(_BYTE *)(a3 + 18) = 0;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(a3 + 18) != 1 )
  {
    v17 = 0;
LABEL_35:
    if ( (_WORD)v3 )
    {
      v21 = v3;
      do
      {
        KeAddGroupAffinityEx(*(unsigned __int16 **)(a3 + 24), *(_WORD *)(a1 + 8), *(_QWORD *)a1);
        a1 += 16LL;
        --v21;
      }
      while ( v21 );
    }
    if ( v17 )
    {
      *(_BYTE *)(a3 + 19) |= 1u;
      *(_QWORD *)a3 = CurrentThread->SystemAffinityTokenListHead.Next;
      CurrentThread->SystemAffinityTokenListHead.Next = (struct _SINGLE_LIST_ENTRY *)a3;
    }
    KiSetSystemAffinityThread(CurrentPrcb, *(char **)(a3 + 24), 0LL, 0x800u, (struct _SINGLE_LIST_ENTRY *)&v25);
    if ( (WORD2(xmmword_140FC5B10) & 0x200) != 0 )
    {
      LOBYTE(v22) = 1;
      KiCpuPartitionCheckAffinitization(CurrentThread, CurrentThread->Affinity, v22, 0LL);
    }
    KiProcessDeferredReadyList(CurrentPrcb, (_QWORD **)&v25, CurrentIrql);
    return 0;
  }
LABEL_45:
  CurrentThread->ThreadLock = 0LL;
  v23 = -1073741811;
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  __writecr8(CurrentIrql);
  return v23;
}
