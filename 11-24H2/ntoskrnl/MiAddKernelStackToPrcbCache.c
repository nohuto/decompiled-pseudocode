/*
 * XREFs of MiAddKernelStackToPrcbCache @ 0x1402211B0
 * Callers:
 *     MmDeleteKernelStack @ 0x14021FA40 (MmDeleteKernelStack.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiValidateKernelShadowStackPage @ 0x140221838 (MiValidateKernelShadowStackPage.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiIsDecayPfn @ 0x1403028E0 (MiIsDecayPfn.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

_BOOL8 __fastcall MiAddKernelStackToPrcbCache(int *a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r15
  __int64 CurrentIrql; // rdx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r12
  unsigned __int8 v12; // r13
  unsigned int v13; // esi
  int *v14; // r9
  char v15; // dl
  unsigned __int64 v16; // r14
  int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // r8
  ULONG *v20; // r14
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v22; // r15
  _QWORD *v24; // rdi
  ULONG_PTR v25; // rsi
  unsigned int v26; // edi
  __int64 i; // [rsp+20h] [rbp-58h]
  int v30; // [rsp+90h] [rbp+18h]
  __int64 v31; // [rsp+98h] [rbp+20h]

  v30 = *a1;
  v2 = -16LL;
  if ( a1[1] == 5 )
    v2 = -8LL;
  v3 = ((*((_QWORD *)a1 + 3) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + v2;
  CurrentIrql = KeGetCurrentIrql();
  for ( i = CurrentIrql; ; CurrentIrql = i )
  {
    v5 = 2LL;
    v6 = 0xFFFFDE0000000000uLL;
    v7 = 0xFFFFFFFFFFLL;
    while ( 1 )
    {
      v8 = *(_QWORD *)v3;
      v9 = (*(_QWORD *)v3 >> 12) & 0xFFFFFFFFFFLL;
      v10 = 48 * v9 - 0x220000000000LL;
      v31 = v10;
      v11 = v10;
      if ( (_BYTE)CurrentIrql == 2 )
        break;
      while ( 1 )
      {
        if ( v9 > qword_140E2DD20 && (v9 < qword_140E35C40 || v9 >= qword_140E35C40 + 2048) )
          goto LABEL_69;
        v12 = KeGetCurrentIrql();
        __writecr8(v5);
        if ( KiIrqlFlags )
        {
          LOBYTE(CurrentIrql) = 2;
          KiRaiseIrqlProcessIrqlFlags(v12, CurrentIrql);
          v10 = v31;
          v5 = 2LL;
          v6 = 0xFFFFDE0000000000uLL;
        }
        if ( (*(_QWORD *)(v10 + 40) & 0x40000000000000LL) != 0 )
          goto LABEL_10;
        if ( (unsigned int)MiIsDecayPfn(v9, CurrentIrql, v5, v6) )
          break;
        if ( KiIrqlFlags )
        {
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
          v5 = 2LL;
          v6 = 0xFFFFDE0000000000uLL;
          v7 = 0xFFFFFFFFFFLL;
        }
        __writecr8(v12);
LABEL_69:
        v8 = *(_QWORD *)v3;
        v9 = v7 & (*(_QWORD *)v3 >> 12);
        v10 = v6 + 48 * v9;
        v31 = v10;
        v11 = v10;
      }
      v10 = v31;
LABEL_10:
      v13 = 0;
LABEL_11:
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        while ( 1 )
        {
          if ( (++v13 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
          {
            if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10, CurrentIrql, v5, v6) )
            {
              HvlNotifyLongSpinWait(v13);
              v10 = v31;
              goto LABEL_44;
            }
            v10 = v31;
          }
          _mm_pause();
LABEL_44:
          if ( *(__int64 *)(v10 + 24) >= 0 )
            goto LABEL_11;
        }
      }
      CurrentIrql = i;
      v5 = 2LL;
      v6 = 0xFFFFDE0000000000uLL;
      v7 = 0xFFFFFFFFFFLL;
      if ( v12 != 17 )
        goto LABEL_13;
    }
    v12 = 17;
    v26 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v26 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10, CurrentIrql, v5, v6) )
        {
          HvlNotifyLongSpinWait(v26);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
LABEL_13:
    if ( v8 == *(_QWORD *)v3 )
      break;
    MiUnlockPage(v11, v12);
  }
  v14 = a1;
  v15 = v30;
  v16 = 0LL;
  v17 = a1[2];
  if ( (v30 & 4) != 0 )
  {
    if ( (*(_QWORD *)v11 & 0xFFFFFFFFFFELL) != 0 )
      v16 = 8 * (*(_QWORD *)v11 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
    else
      v16 = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v12 < 2u )
  {
    if ( KiIrqlFlags )
    {
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
      v14 = a1;
      v15 = v30;
    }
    __writecr8(v12);
  }
  if ( (v15 & 4) == 0 )
    return 0LL;
  if ( v14[1] != 5 )
  {
    v20 = 0LL;
    v17 = -1;
    v24 = (_QWORD *)(v3 - 8 * a2 + 8);
    if ( (unsigned __int64)v24 >= v3 + 8 )
      return 0LL;
    do
    {
      v25 = (*v24 >> 12) & 0xFFFFFFFFFFLL;
      if ( !v20 )
        v20 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(48 * v25 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
      MiValidateKernelShadowStackPage((ULONG_PTR)v24);
      if ( v17 == -1 )
        v17 = MiPageToNode(v25);
      else
        MiPageToNode(v25);
      ++v24;
    }
    while ( (unsigned __int64)v24 < v3 + 8 );
    v19 = 1LL;
    v14 = a1;
LABEL_26:
    if ( v20 != &MiSystemPartition )
      return 0LL;
    goto LABEL_27;
  }
  if ( v16 != -32LL )
    return 0LL;
  v18 = *((_QWORD *)v14 + 2);
  v19 = 0LL;
  if ( v18 )
  {
    v20 = (ULONG *)*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(*(_QWORD *)(v18 + 544) + 1198LL));
    goto LABEL_26;
  }
LABEL_27:
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->CachedStacks[v19] && CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0] == v17 )
  {
    if ( v14[1] != 5 )
      return _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CurrentPrcb->CachedStacks[v19],
               *((_QWORD *)v14 + 5),
               0LL) == 0;
    v22 = v3 << 25 >> 16;
    *(_QWORD *)(v22 + 4064) = qword_140E37640 ^ v22;
    *(_DWORD *)(v22 + 4088) = 1;
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&CurrentPrcb->CachedStacks[v19], v22 + 4080, 0LL) )
      return 1LL;
  }
  return 0LL;
}
