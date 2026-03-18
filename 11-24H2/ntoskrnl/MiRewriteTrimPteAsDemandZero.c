/*
 * XREFs of MiRewriteTrimPteAsDemandZero @ 0x14046511C
 * Callers:
 *     MiWsleFree @ 0x14021BFD0 (MiWsleFree.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiTransferSoftwarePte @ 0x14039F300 (MiTransferSoftwarePte.c)
 */

__int64 __fastcall MiRewriteTrimPteAsDemandZero(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // r14
  char v5; // r9
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  int v10; // ebp
  __int64 result; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned int v16; // ebx

  v2 = a2 + 5;
  if ( (a2[2] & 2) != 0 )
  {
    v12 = a2[2];
    v7 = *(_QWORD *)(*((_QWORD *)qword_140E2FF88 + (((unsigned __int64)*v2 >> 43) & 0x3FF))
                   + 8LL * ((unsigned __int8)HIBYTE(*((_WORD *)a2 + 8)) >> 4)
                   + 18528);
    if ( qword_140E2DB80 && (v12 & 0x10) == 0 )
      v12 &= ~qword_140E2DB80;
    v6 = HIDWORD(v12);
    v5 = 2;
  }
  else
  {
    v5 = 0;
    LODWORD(v6) = 0;
    v7 = 0LL;
  }
  v8 = MiTransferSoftwarePte(a2[2], v7, v6, v5);
  v9 = a2[1] | 0x8000000000000000uLL;
  if ( *v2 < 0 )
  {
    v13 = *v2 & 0xFFFFFFFFFFLL;
    v14 = 48 * v13 - 0x220000000000LL;
    v15 = MiMapPageInHyperSpaceWorker(v13, 0LL, 0x80000000LL) + 8 * ((v9 >> 3) & 0x1FF);
    *(_QWORD *)v15 = v8;
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    v16 = 0;
    *(_QWORD *)(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v16 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v16);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    MiDecrementShareCountEx(v14, 0LL);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v10 = 0;
    if ( MiPteInShadowRange(v9) )
      v10 = MiSanitizeShadowPxe();
    *(_QWORD *)v9 = v8;
    if ( v10 )
      MiWritePteShadow();
    result = *(unsigned int *)(a1 + 184);
    if ( (result & 0xF) == 0 )
      _InterlockedDecrement64((volatile signed __int64 *)(a1 - 376));
  }
  return result;
}
