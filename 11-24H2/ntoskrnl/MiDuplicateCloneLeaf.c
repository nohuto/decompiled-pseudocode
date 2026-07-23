/*
 * XREFs of MiDuplicateCloneLeaf @ 0x14038FAFC
 * Callers:
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     MiMakeTransitionPte @ 0x140347DF0 (MiMakeTransitionPte.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x1403517B0 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiUpdateTransitionPteFrame @ 0x14038F5E4 (MiUpdateTransitionPteFrame.c)
 *     MiInitializePfnForOtherProcess @ 0x14038FF2C (MiInitializePfnForOtherProcess.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1403916FC (MiIncreaseUsedPtesInPfn.c)
 *     MI_SET_SOFTWARE_PTE_SHADOW_STACK @ 0x1404818BC (MI_SET_SOFTWARE_PTE_SHADOW_STACK.c)
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
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v28; // edi
  unsigned int v29; // ebx
  int v30; // [rsp+20h] [rbp-58h]
  char PfnPriority; // [rsp+20h] [rbp-58h]
  unsigned int v32; // [rsp+24h] [rbp-54h]
  unsigned int v33; // [rsp+28h] [rbp-50h]
  unsigned int v34; // [rsp+2Ch] [rbp-4Ch]
  int v35; // [rsp+30h] [rbp-48h]
  _BYTE *v36; // [rsp+30h] [rbp-48h]
  unsigned int v37; // [rsp+80h] [rbp+8h]
  int v38; // [rsp+80h] [rbp+8h]
  int v39; // [rsp+80h] [rbp+8h]
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
    if ( qword_140E2DCC0 )
    {
      if ( (v6 & 0x10) != 0 )
        v7 &= ~0x10uLL;
      else
        v7 = v6 & ~qword_140E2DCC0;
    }
    v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
    v9 = 48 * v8 - 0x220000000000LL;
    if ( (*(_BYTE *)(v9 + 34) & 0x20) != 0 )
    {
      p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockWorkingSetExclusive((__int64)p_Blink, a5);
      v36 = (char *)&KeGetCurrentThread()[1].Queue + 6;
      ++*v36;
      --*v36;
      MiLockWorkingSetExclusive((__int64)p_Blink);
      return 0LL;
    }
    v10 = 0;
    v11 = *a1;
  }
  v30 = v10;
  v12 = (v11 >> 5) & 0x1F;
  v35 = MI_IS_SOFTWARE_PTE_SHADOW_STACK(*(_QWORD *)(v9 + 16));
  v15 = v14 + 48 * v13;
  v16 = 384;
  v17 = (volatile signed __int32 *)(v15 + 24);
  if ( !v18 )
  {
    v37 = 0;
    while ( _interlockedbittestandset64(v17, 0x3FuLL) )
    {
      do
      {
        if ( (++v37 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v37);
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
  if ( !v30 )
    _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
  PfnPriority = MiGetPfnPriority(v9);
  v34 = (unsigned __int8)BYTE2(*(_DWORD *)(v9 + 32)) >> 6;
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
  v32 = 0;
  v23 = a4;
LABEL_12:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
  {
    while ( 1 )
    {
      v28 = v32 + 1;
      v32 = v28;
      if ( (v28 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v28);
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
  v33 = 0;
  while ( _interlockedbittestandset64(v17, 0x3FuLL) )
  {
    do
    {
      v29 = v33 + 1;
      v33 = v29;
      if ( (v29 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
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
  if ( v35 )
    MI_SET_SOFTWARE_PTE_SHADOW_STACK(v15 + 16);
  if ( (unsigned __int8)BYTE2(*(_DWORD *)(v15 + 32)) >> 6 != v34 )
    MiChangePageAttribute(v15, v34);
  v38 = *(_DWORD *)(v15 + 32);
  HIBYTE(v38) ^= (PfnPriority ^ HIBYTE(v38)) & 7;
  *(_DWORD *)(v15 + 32) = v38;
  v39 = *(_DWORD *)(v15 + 32);
  BYTE2(v39) = BYTE2(v39) & 0xF8 | 6;
  *(_DWORD *)(v15 + 32) = v39;
  MiDecrementShareCountEx(v15, 0LL, v25, v26);
  _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
  return 1LL;
}
