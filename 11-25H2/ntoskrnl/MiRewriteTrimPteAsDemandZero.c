/*
 * XREFs of MiRewriteTrimPteAsDemandZero @ 0x140226334
 * Callers:
 *     MiWsleFree @ 0x14022FD60 (MiWsleFree.c)
 * Callees:
 *     MiTransferSoftwarePte @ 0x1402280C0 (MiTransferSoftwarePte.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 */

__int64 __fastcall MiRewriteTrimPteAsDemandZero(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // r14
  __int64 v5; // r9
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  int v10; // ebp
  __int64 v11; // rcx
  __int64 result; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  _QWORD *MmInternal; // rcx
  unsigned int v18; // ebx
  int v19; // eax
  __int64 v20; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2 + 5;
  if ( (a2[2] & 2) != 0 )
  {
    v13 = a2[2];
    v7 = *(_QWORD *)(*((_QWORD *)qword_140E2FD48 + (((unsigned __int64)*v2 >> 43) & 0x3FF))
                   + 8LL * ((unsigned __int8)HIBYTE(*((_WORD *)a2 + 8)) >> 4)
                   + 18528);
    if ( qword_140E2D940 && (v13 & 0x10) == 0 )
      v13 &= ~qword_140E2D940;
    v6 = HIDWORD(v13);
    v5 = 2LL;
  }
  else
  {
    v5 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
  }
  v8 = MiTransferSoftwarePte(a2[2], v7, v6, v5);
  v9 = a2[1] | 0x8000000000000000uLL;
  if ( *v2 < 0 )
  {
    v14 = *v2 & 0xFFFFFFFFFFLL;
    v15 = 48 * v14 - 0x220000000000LL;
    v16 = MiMapPageInHyperSpaceWorker(v14, 0LL, 0x80000000LL) + 8 * ((v9 >> 3) & 0x1FF);
    *(_QWORD *)v16 = v8;
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    *MmInternal = 0LL;
    v18 = 0;
    *(_QWORD *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v18 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(MmInternal) )
        {
          HvlNotifyLongSpinWait(v18);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v15 + 24) < 0 );
    }
    MiDecrementShareCountEx(v15, 0LL);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v20 = v8;
    v10 = 0;
    if ( (unsigned int)MiPteInShadowRange(v9) )
    {
      v19 = MiSanitizeShadowPxe(v11, &v20);
      v8 = v20;
      v10 = v19;
    }
    *(_QWORD *)v9 = v8;
    if ( v10 )
      MiWritePteShadow(v9, v8);
    result = *(unsigned int *)(a1 + 184);
    if ( (result & 0xF) == 0 )
      _InterlockedDecrement64((volatile signed __int64 *)(a1 - 376));
  }
  return result;
}
