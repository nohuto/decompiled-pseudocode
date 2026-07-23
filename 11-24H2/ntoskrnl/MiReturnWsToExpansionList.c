/*
 * XREFs of MiReturnWsToExpansionList @ 0x1402F26D0
 * Callers:
 *     MmInSwapProcess @ 0x1402DFEE4 (MmInSwapProcess.c)
 *     MiAllowWorkingSetExpansion @ 0x1402F2680 (MiAllowWorkingSetExpansion.c)
 *     MiProcessWorkingSets @ 0x1402F2D10 (MiProcessWorkingSets.c)
 *     MiEmptyTargetedWorkingSet @ 0x140679A10 (MiEmptyTargetedWorkingSet.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MiReturnWsToExpansionList(__int64 a1, int a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r9
  _QWORD *v4; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v8; // edi
  _QWORD *v9; // rdi
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  char v13; // cl
  __int64 v15; // rax

  v2 = (_QWORD *)(a1 + 24);
  v3 = (_QWORD *)(*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 174)) + 17608LL);
  if ( !a2 )
  {
    v4 = *(_QWORD **)(*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 174)) + 17616LL);
    if ( (_QWORD *)*v4 == v3 )
    {
      *v2 = v3;
      *(_QWORD *)(a1 + 32) = v4;
      *v4 = v2;
      v3[1] = v2;
      goto LABEL_4;
    }
LABEL_13:
    __fastfail(3u);
  }
  v15 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 )
    goto LABEL_13;
  *v2 = v15;
  *(_QWORD *)(a1 + 32) = v3;
  *(_QWORD *)(v15 + 8) = v2;
  *v3 = v2;
LABEL_4:
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v5, 7u) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v8);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)v5 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v5, 7u) );
    }
    if ( !*(_DWORD *)(v5 + 4) )
    {
      v9 = *(_QWORD **)(v5 + 8);
      *(_DWORD *)(v5 + 4) = 1;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v9 == (_QWORD *)(v5 + 8) )
            goto LABEL_17;
          v10 = (_QWORD *)*v9;
          v11 = v9;
          v9 = v10;
          v12 = (_QWORD *)v11[1];
          if ( (_QWORD *)v10[1] != v11 || (_QWORD *)*v12 != v11 )
            goto LABEL_13;
          *v12 = v10;
          v10[1] = v12;
          v13 = *((_BYTE *)v11 + 16);
          if ( v13 != 1 )
            break;
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v11, *((unsigned __int16 *)v11 + 9), 0LL) )
          {
LABEL_16:
            if ( (*(_DWORD *)(v5 + 4))-- == 1 )
              goto LABEL_17;
          }
        }
        if ( v13 == 2 )
        {
          *((_BYTE *)v11 + 17) = 5;
          KiInsertQueueInternal(v11[3], v11);
          goto LABEL_16;
        }
        if ( v13 == 4 )
        {
          *((_BYTE *)v11 + 17) = 5;
          *(_DWORD *)(v5 + 4) = 0;
          KeInsertQueueDpc((PRKDPC)v11[3], (PVOID)v5, v11);
        }
        else
        {
          KiTryUnwaitThread(CurrentPrcb, v11, 256LL, 0LL);
        }
      }
    }
LABEL_17:
    _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
    KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
  }
}
