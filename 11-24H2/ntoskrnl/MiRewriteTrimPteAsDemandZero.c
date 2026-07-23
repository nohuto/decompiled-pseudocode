/*
 * XREFs of MiRewriteTrimPteAsDemandZero @ 0x140200A7C
 * Callers:
 *     MiWsleFree @ 0x140248D20 (MiWsleFree.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiTransferSoftwarePte @ 0x140215AA0 (MiTransferSoftwarePte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
  unsigned int v17; // ebx
  int v18; // eax
  __int64 v19; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2 + 5;
  if ( (a2[2] & 2) != 0 )
  {
    v13 = a2[2];
    v7 = *(_QWORD *)(*((_QWORD *)qword_140E300C8 + (((unsigned __int64)*v2 >> 43) & 0x3FF))
                   + 8LL * ((unsigned __int8)HIBYTE(*((_WORD *)a2 + 8)) >> 4)
                   + 18528);
    if ( qword_140E2DCC0 && (v13 & 0x10) == 0 )
      v13 &= ~qword_140E2DCC0;
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
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    v17 = 0;
    *(_QWORD *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v17 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v17);
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
    v19 = v8;
    v10 = 0;
    if ( (unsigned int)MiPteInShadowRange(v9) )
    {
      v18 = MiSanitizeShadowPxe(v11, &v19);
      v8 = v19;
      v10 = v18;
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
