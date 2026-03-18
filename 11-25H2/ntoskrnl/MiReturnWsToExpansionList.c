/*
 * XREFs of MiReturnWsToExpansionList @ 0x14027FC50
 * Callers:
 *     MmInSwapProcess @ 0x1402F1540 (MmInSwapProcess.c)
 *     MiProcessWorkingSets @ 0x1403C24F0 (MiProcessWorkingSets.c)
 *     MiAllowWorkingSetExpansion @ 0x14048E998 (MiAllowWorkingSetExpansion.c)
 *     MiEmptyTargetedWorkingSet @ 0x14066CF24 (MiEmptyTargetedWorkingSet.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

_QWORD *__fastcall MiReturnWsToExpansionList(__int64 a1, int a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r9
  _QWORD *result; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v8; // edi
  _QWORD *v9; // rdi
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  char v13; // cl

  v2 = (_QWORD *)(a1 + 24);
  v3 = (_QWORD *)(*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(a1 + 174)) + 17608LL);
  if ( a2 )
  {
    result = (_QWORD *)*v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 )
LABEL_3:
      __fastfail(3u);
    *v2 = result;
    *(_QWORD *)(a1 + 32) = v3;
    result[1] = v2;
    *v3 = v2;
  }
  else
  {
    result = *(_QWORD **)(*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(a1 + 174)) + 17616LL);
    if ( (_QWORD *)*result != v3 )
      goto LABEL_3;
    *v2 = v3;
    *(_QWORD *)(a1 + 32) = result;
    *result = v2;
    v3[1] = v2;
  }
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v5, 7u) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
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
            goto LABEL_3;
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
    return (_QWORD *)KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 1, CurrentIrql);
  }
  return result;
}
