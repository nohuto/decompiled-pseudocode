/*
 * XREFs of MiDuplicateCloneLeaf @ 0x1402D08F8
 * Callers:
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140208510 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MiInitializePfnForOtherProcess @ 0x1402D0D28 (MiInitializePfnForOtherProcess.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1402D1090 (MiIncreaseUsedPtesInPfn.c)
 *     MiUpdateTransitionPteFrame @ 0x1402D110C (MiUpdateTransitionPteFrame.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeTransitionPte @ 0x140339DF0 (MiMakeTransitionPte.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MI_SET_SOFTWARE_PTE_SHADOW_STACK @ 0x1404857E4 (MI_SET_SOFTWARE_PTE_SHADOW_STACK.c)
 */

__int64 __fastcall MiDuplicateCloneLeaf(
        unsigned __int64 *a1,
        __int64 *a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned __int8 a5)
{
  unsigned __int64 v6; // rbx
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
  ULONG_PTR v20; // rsi
  __int64 TransitionPte; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // r11
  __int64 v25; // r11
  unsigned __int64 v26; // rcx
  unsigned int v28; // edi
  unsigned int v29; // ebx
  __int64 v30; // rcx
  int v31; // [rsp+20h] [rbp-58h]
  char PfnPriority; // [rsp+20h] [rbp-58h]
  unsigned int v33; // [rsp+24h] [rbp-54h]
  unsigned int v34; // [rsp+28h] [rbp-50h]
  int v35; // [rsp+2Ch] [rbp-4Ch]
  int v36; // [rsp+30h] [rbp-48h]
  _BYTE *v37; // [rsp+30h] [rbp-48h]
  unsigned int v38; // [rsp+80h] [rbp+8h]
  int v39; // [rsp+80h] [rbp+8h]
  int v40; // [rsp+80h] [rbp+8h]
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
    if ( qword_140E2D940 )
    {
      if ( (v6 & 0x10) != 0 )
        v7 &= ~0x10uLL;
      else
        v7 = v6 & ~qword_140E2D940;
    }
    v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
    v9 = 48 * v8 - 0x220000000000LL;
    if ( (*(_BYTE *)(v9 + 34) & 0x20) != 0 )
    {
      p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockWorkingSetExclusive((__int64)p_Blink, a5);
      v37 = (char *)&KeGetCurrentThread()[1].Queue + 6;
      ++*v37;
      --*v37;
      MiLockWorkingSetExclusive((__int64)p_Blink);
      return 0LL;
    }
    v10 = 0;
    v11 = *a1;
  }
  v31 = v10;
  v12 = (v11 >> 5) & 0x1F;
  v36 = MI_IS_SOFTWARE_PTE_SHADOW_STACK(*(_QWORD *)(v9 + 16));
  v15 = v14 + 48 * v13;
  v16 = 384;
  v17 = (volatile signed __int32 *)(v15 + 24);
  if ( !v18 )
  {
    v38 = 0;
    while ( _interlockedbittestandset64(v17, 0x3FuLL) )
    {
      do
      {
        v30 = v38 + 1;
        v38 = v30;
        if ( ((unsigned int)v30 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v30) )
        {
          HvlNotifyLongSpinWait(v38);
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
  if ( !v31 )
    _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
  PfnPriority = MiGetPfnPriority(v9);
  v35 = (unsigned __int8)BYTE2(*(_DWORD *)(v9 + 32)) >> 6;
  if ( v19 )
  {
    v20 = a3;
    TransitionPte = MiMakeTransitionPte(a3, (unsigned int)v12);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v20 = a3;
    TransitionPte = MiUpdateTransitionPteFrame(v6, a3);
  }
  v23 = TransitionPte;
  v33 = 0;
  v24 = a4;
LABEL_12:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
  {
    while ( 1 )
    {
      v28 = v33 + 1;
      v33 = v28;
      if ( (v28 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v22) )
        {
          HvlNotifyLongSpinWait(v28);
          v24 = a4;
          goto LABEL_22;
        }
        v24 = a4;
      }
      _mm_pause();
LABEL_22:
      if ( *(__int64 *)(v24 + 24) >= 0 )
        goto LABEL_12;
    }
  }
  *a2 = v23;
  *(_QWORD *)(v24 + 24) = (*(_QWORD *)(v24 + 24) + 1LL) ^ (*(_QWORD *)(v24 + 24) ^ (*(_QWORD *)(v24 + 24) + 1LL)) & 0xC000000000000000uLL;
  MiIncreaseUsedPtesInPfn(v24, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiInitializePfnForOtherProcess(v20, a1, 0xAAAAAAAAAAAAAAABuLL * ((v25 + 0x220000000000LL) >> 4), 2064LL);
  v26 = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (unsigned int)v12);
  *(_QWORD *)(v15 + 16) = v26;
  v34 = 0;
  while ( _interlockedbittestandset64(v17, 0x3FuLL) )
  {
    do
    {
      v29 = v34 + 1;
      v34 = v29;
      if ( (v29 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v26) )
      {
        HvlNotifyLongSpinWait(v29);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)v17 < 0 );
  }
  if ( v36 )
    MI_SET_SOFTWARE_PTE_SHADOW_STACK(v15 + 16);
  if ( (unsigned __int8)BYTE2(*(_DWORD *)(v15 + 32)) >> 6 != v35 )
    MiChangePageAttribute(v15, v35);
  v39 = *(_DWORD *)(v15 + 32);
  HIBYTE(v39) ^= (PfnPriority ^ HIBYTE(v39)) & 7;
  *(_DWORD *)(v15 + 32) = v39;
  v40 = *(_DWORD *)(v15 + 32);
  BYTE2(v40) = BYTE2(v40) & 0xF8 | 6;
  *(_DWORD *)(v15 + 32) = v40;
  MiDecrementShareCountEx(v15, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
  return 1LL;
}
