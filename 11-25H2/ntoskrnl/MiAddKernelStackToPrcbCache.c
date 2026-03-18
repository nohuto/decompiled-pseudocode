/*
 * XREFs of MiAddKernelStackToPrcbCache @ 0x140346930
 * Callers:
 *     MmDeleteKernelStack @ 0x140346FC0 (MmDeleteKernelStack.c)
 * Callees:
 *     MiIsDecayPfn @ 0x140241130 (MiIsDecayPfn.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiValidateKernelShadowStackPage @ 0x140346F68 (MiValidateKernelShadowStackPage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

_BOOL8 __fastcall MiAddKernelStackToPrcbCache(int *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r14
  unsigned __int8 CurrentIrql; // dl
  unsigned __int64 v5; // r8
  __int64 v6; // rbx
  ULONG_PTR v7; // r12
  __int64 v8; // r13
  __int64 v9; // r15
  unsigned __int8 v10; // bp
  int v11; // r12d
  int *v12; // r9
  char v13; // dl
  unsigned __int64 v14; // rdi
  int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // r8
  ULONG *v18; // rbp
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v20; // r14
  _QWORD *v22; // rdi
  ULONG_PTR v23; // rsi
  int v24; // esi
  unsigned __int64 v25; // r9
  __int64 v26; // r10
  int v29; // [rsp+90h] [rbp+18h]
  unsigned __int8 v30; // [rsp+98h] [rbp+20h]

  v29 = *a1;
  v2 = -16LL;
  if ( a1[1] == 5 )
    v2 = -8LL;
  v3 = ((*((_QWORD *)a1 + 3) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + v2;
  CurrentIrql = KeGetCurrentIrql();
  v30 = CurrentIrql;
  while ( 2 )
  {
    v5 = 2LL;
LABEL_5:
    v6 = *(_QWORD *)v3;
    v7 = (*(_QWORD *)v3 >> 12) & 0xFFFFFFFFFFLL;
    v8 = 48 * v7 - 0x220000000000LL;
    v9 = v8;
    if ( CurrentIrql != 2 )
    {
      while ( 1 )
      {
        if ( v7 <= qword_140E2D9A0 || MiIsDecayPfn(v7) )
        {
          v10 = KeGetCurrentIrql();
          __writecr8(v5);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(v10);
          if ( (*(_QWORD *)(v8 + 40) & 0x40000000000000LL) != 0 || MiIsDecayPfn(v7) )
          {
            v11 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
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
              while ( *(__int64 *)(v8 + 24) < 0 );
            }
            CurrentIrql = v30;
            v5 = 2LL;
            if ( v10 != 17 )
              goto LABEL_13;
            goto LABEL_5;
          }
          if ( KiIrqlFlags )
          {
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
            v5 = 2LL;
            v25 = 0xFFFFDE0000000000uLL;
            v26 = 0xFFFFFFFFFFLL;
          }
          __writecr8(v10);
        }
        v6 = *(_QWORD *)v3;
        v7 = v26 & (*(_QWORD *)v3 >> 12);
        v8 = v25 + 48 * v7;
        v9 = v8;
      }
    }
    v10 = 17;
    v24 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v24 & HvlLongSpinCountMask) == 0
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
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
LABEL_13:
    if ( v6 != *(_QWORD *)v3 )
    {
      MiUnlockPage(v9, v10);
      CurrentIrql = v30;
      continue;
    }
    break;
  }
  v12 = a1;
  v13 = v29;
  v14 = 0LL;
  v15 = a1[2];
  if ( (v29 & 4) != 0 )
  {
    if ( (*(_QWORD *)v9 & 0xFFFFFFFFFFELL) != 0 )
      v14 = 8 * (*(_QWORD *)v9 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
    else
      v14 = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v10 < 2u )
  {
    if ( KiIrqlFlags )
    {
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
      v12 = a1;
      v13 = v29;
    }
    __writecr8(v10);
  }
  if ( (v13 & 4) == 0 )
    return 0LL;
  if ( v12[1] != 5 )
  {
    v18 = 0LL;
    v15 = -1;
    v22 = (_QWORD *)(v3 - 8 * a2 + 8);
    if ( (unsigned __int64)v22 >= v3 + 8 )
      return 0LL;
    do
    {
      v23 = (*v22 >> 12) & 0xFFFFFFFFFFLL;
      if ( !v18 )
        v18 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(48 * v23 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
      MiValidateKernelShadowStackPage((ULONG_PTR)v22);
      if ( v15 == -1 )
        v15 = MiPageToNode(v23);
      else
        MiPageToNode(v23);
      ++v22;
    }
    while ( (unsigned __int64)v22 < v3 + 8 );
    v12 = a1;
    v17 = 1LL;
LABEL_26:
    if ( v18 != &MiSystemPartition )
      return 0LL;
    goto LABEL_27;
  }
  if ( v14 != -32LL )
    return 0LL;
  v16 = *((_QWORD *)v12 + 2);
  v17 = 0LL;
  if ( v16 )
  {
    v18 = (ULONG *)*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(*(_QWORD *)(v16 + 544) + 1198LL));
    goto LABEL_26;
  }
LABEL_27:
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->CachedStacks[v17] && CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0] == v15 )
  {
    if ( v12[1] != 5 )
      return _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CurrentPrcb->CachedStacks[v17],
               *((_QWORD *)v12 + 5),
               0LL) == 0;
    v20 = v3 << 25 >> 16;
    *(_QWORD *)(v20 + 4064) = qword_140E372C0 ^ v20;
    *(_DWORD *)(v20 + 4088) = 1;
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&CurrentPrcb->CachedStacks[v17], v20 + 4080, 0LL) )
      return 1LL;
  }
  return 0LL;
}
