/*
 * XREFs of MiDuplicateCloneLeaf @ 0x140396854
 * Callers:
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeTransitionPte @ 0x1402E67B0 (MiMakeTransitionPte.c)
 *     MiUpdateTransitionPteFrame @ 0x140395BFC (MiUpdateTransitionPteFrame.c)
 *     MiInitializePfnForOtherProcess @ 0x140396C84 (MiInitializePfnForOtherProcess.c)
 *     MiIncreaseUsedPtesInPfn @ 0x140396FF4 (MiIncreaseUsedPtesInPfn.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140397A50 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MI_SET_SOFTWARE_PTE_SHADOW_STACK @ 0x1404862CC (MI_SET_SOFTWARE_PTE_SHADOW_STACK.c)
 */

__int64 __fastcall MiDuplicateCloneLeaf(__int64 *a1, unsigned __int64 *a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rsi
  int v10; // edx
  unsigned __int64 v11; // r13
  __int64 v12; // r13
  ULONG_PTR v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // r15
  __int16 v16; // cx
  volatile signed __int32 *v17; // r14
  int v18; // edx
  int v19; // r10d
  __int64 v20; // rsi
  unsigned __int64 TransitionPte; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // r11
  __int64 v24; // r11
  unsigned int v26; // edi
  unsigned int v27; // ebx
  int v28; // [rsp+20h] [rbp-58h]
  char PfnPriority; // [rsp+20h] [rbp-58h]
  unsigned int v30; // [rsp+24h] [rbp-54h]
  unsigned int v31; // [rsp+28h] [rbp-50h]
  unsigned int v32; // [rsp+2Ch] [rbp-4Ch]
  int v33; // [rsp+30h] [rbp-48h]
  _BYTE *v34; // [rsp+30h] [rbp-48h]
  unsigned int v35; // [rsp+80h] [rbp+8h]
  int v36; // [rsp+80h] [rbp+8h]
  int v37; // [rsp+80h] [rbp+8h]
  struct _LIST_ENTRY **p_Blink; // [rsp+80h] [rbp+8h]

  v6 = *a1;
  v7 = *a1;
  if ( (*a1 & 1) != 0 )
  {
    v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
    v9 = 48 * v8 - 0x220000000000LL;
    v10 = 1;
    v11 = *(_QWORD *)(v9 + 16);
  }
  else
  {
    if ( qword_140E2DB80 )
    {
      if ( (v6 & 0x10) != 0 )
        v7 &= ~0x10uLL;
      else
        v7 = v6 & ~qword_140E2DB80;
    }
    v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
    v9 = 48 * v8 - 0x220000000000LL;
    if ( (*(_BYTE *)(v9 + 34) & 0x20) != 0 )
    {
      p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockWorkingSetExclusive((__int64)p_Blink, a5);
      v34 = (char *)&KeGetCurrentThread()[1].Queue + 6;
      ++*v34;
      --*v34;
      MiLockWorkingSetExclusive((__int64)p_Blink);
      return 0LL;
    }
    v10 = 0;
    v11 = *a1;
  }
  v28 = v10;
  v12 = (v11 >> 5) & 0x1F;
  v33 = MI_IS_SOFTWARE_PTE_SHADOW_STACK(*(_QWORD *)(v9 + 16));
  v15 = v14 + 48 * v13;
  v16 = 384;
  v17 = (volatile signed __int32 *)(v15 + 24);
  if ( !v18 )
  {
    v35 = 0;
    while ( _interlockedbittestandset64(v17, 0x3FuLL) )
    {
      do
      {
        if ( (++v35 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v35);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v17 < 0 );
    }
    v13 = a3;
    v16 = 388;
  }
  MiCopyPage(v13, v8, v16);
  if ( !v28 )
    _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
  PfnPriority = MiGetPfnPriority(v9);
  v32 = (unsigned __int8)BYTE2(*(_DWORD *)(v9 + 32)) >> 6;
  if ( v19 )
  {
    v20 = a3;
    TransitionPte = MiMakeTransitionPte(a3, v12);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v20 = a3;
    TransitionPte = MiUpdateTransitionPteFrame(v6, a3);
  }
  v22 = TransitionPte;
  v30 = 0;
  v23 = a4;
LABEL_12:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
  {
    while ( 1 )
    {
      v26 = v30 + 1;
      v30 = v26;
      if ( (v26 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v26);
          v23 = a4;
          goto LABEL_22;
        }
        v23 = a4;
      }
      _mm_pause();
LABEL_22:
      if ( *(__int64 *)(v23 + 24) >= 0 )
        goto LABEL_12;
    }
  }
  *a2 = v22;
  *(_QWORD *)(v23 + 24) = (*(_QWORD *)(v23 + 24) + 1LL) ^ (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) + 1LL)) & 0xC000000000000000uLL;
  MiIncreaseUsedPtesInPfn(v23, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiInitializePfnForOtherProcess(v20, a1, 0xAAAAAAAAAAAAAAABuLL * ((v24 + 0x220000000000LL) >> 4), 2064LL);
  *(_QWORD *)(v15 + 16) = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (unsigned int)v12);
  v31 = 0;
  while ( _interlockedbittestandset64(v17, 0x3FuLL) )
  {
    do
    {
      v27 = v31 + 1;
      v31 = v27;
      if ( (v27 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v27);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)v17 < 0 );
  }
  if ( v33 )
    MI_SET_SOFTWARE_PTE_SHADOW_STACK(v15 + 16);
  if ( (unsigned __int8)BYTE2(*(_DWORD *)(v15 + 32)) >> 6 != v32 )
    MiChangePageAttribute(v15, v32);
  v36 = *(_DWORD *)(v15 + 32);
  HIBYTE(v36) ^= (PfnPriority ^ HIBYTE(v36)) & 7;
  *(_DWORD *)(v15 + 32) = v36;
  v37 = *(_DWORD *)(v15 + 32);
  BYTE2(v37) = BYTE2(v37) & 0xF8 | 6;
  *(_DWORD *)(v15 + 32) = v37;
  MiDecrementShareCountEx(v15, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
  return 1LL;
}
