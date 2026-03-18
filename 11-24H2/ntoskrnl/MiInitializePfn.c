/*
 * XREFs of MiInitializePfn @ 0x14021E510
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MmCheckCachedPageStates @ 0x140280E90 (MmCheckCachedPageStates.c)
 *     MiCreateSharedZeroPages @ 0x1402EED80 (MiCreateSharedZeroPages.c)
 *     MiMakePageAvoidRead @ 0x1402EF168 (MiMakePageAvoidRead.c)
 *     MiAllocateKernelStackPages @ 0x14039F96C (MiAllocateKernelStackPages.c)
 *     MmAllocateIndependentPagesEx @ 0x140A88F6C (MmAllocateIndependentPagesEx.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5428C (MmInitializeImageViewExtensionCfg.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiIncreaseUsedPtesInPfn @ 0x140396FF4 (MiIncreaseUsedPtesInPfn.c)
 *     MiCanPfnOriginalPteBeLost @ 0x14039E1D0 (MiCanPfnOriginalPteBeLost.c)
 */

__int64 __fastcall MiInitializePfn(__int64 a1, __int64 *a2, unsigned int a3, __int16 a4)
{
  __int64 v4; // rbx
  __int64 v6; // r9
  __int64 *v7; // r10
  unsigned __int64 v9; // r11
  __int64 v10; // rax
  unsigned __int64 DemandZeroPte; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r12d
  unsigned int v16; // r15d
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  signed __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  signed __int64 v23; // rax
  signed __int64 v24; // rdx
  __int64 v25; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // esi
  unsigned int v28; // esi
  __int64 v29; // rcx
  __int64 result; // rax
  unsigned int v31; // r11d
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v34; // rcx
  _KPROCESS *v35; // r8
  unsigned __int64 v36; // r10
  __int64 v37; // rdx
  _KPROCESS *v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned int v42; // eax
  _QWORD v43[11]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int8 v45; // [rsp+90h] [rbp+18h]
  unsigned int v46; // [rsp+98h] [rbp+20h]
  int v47; // [rsp+98h] [rbp+20h]
  unsigned int v48; // [rsp+98h] [rbp+20h]
  unsigned int v49; // [rsp+98h] [rbp+20h]

  v4 = *a2;
  v6 = a3;
  v7 = a2;
  v9 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v10 = *a2;
    if ( (v4 & 1) != 0 && ((v4 & 0x42) == 0 || (v4 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v34 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)v7 >> 3) & 0x1FF));
          if ( (v34 & 0x20) != 0 )
            v10 = v4 | 0x20;
          v4 = v10 | 0x42;
          if ( (v34 & 0x42) == 0 )
            v4 = v10;
        }
      }
    }
  }
  DemandZeroPte = v4;
  if ( (a4 & 4) != 0 )
  {
    if ( v4 )
      DemandZeroPte = (32 * v6) ^ (v4 ^ (32 * v6)) & 0xFFFFFFFFFFFFFC1FuLL;
    else
      DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v6);
  }
  v43[0] = DemandZeroPte;
  v12 = DemandZeroPte;
  if ( (unsigned __int64)v43 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v43 <= v9
    && (DemandZeroPte & 1) != 0
    && ((DemandZeroPte & 0x42) == 0 || (DemandZeroPte & 0x20) == 0)
    && (MiFlags & 0x600000) != 0 )
  {
    v35 = KeGetCurrentThread()->ApcState.Process;
    if ( v35->AddressPolicy != 1 )
    {
      v36 = v35[2].KernelWaitTime;
      if ( v36 )
      {
        v37 = *(_QWORD *)(v36 + 8 * (((unsigned __int64)v43 >> 3) & 0x1FF));
        if ( (v37 & 0x20) != 0 )
          DemandZeroPte |= 0x20uLL;
        v12 = DemandZeroPte | 0x42;
        if ( (v37 & 0x42) == 0 )
          v12 = DemandZeroPte;
      }
      v7 = a2;
    }
  }
  v13 = -9LL;
  if ( (v12 & 0x400) != 0 )
    v13 = -2049LL;
  v14 = v12 & v13;
  v43[0] = v14;
  if ( (a4 & 8) != 0 )
  {
    v14 = 128LL;
    if ( qword_140E2DB80 )
    {
      v14 = 144LL;
      if ( (qword_140E2DB80 & 0x80u) == 0LL )
        v14 = qword_140E2DB80 | 0x80;
    }
  }
  v15 = 0;
  *(_QWORD *)(a1 + 16) = v14;
  *(_QWORD *)a1 = 0LL;
  if ( (a4 & 2) != 0 )
    *(_QWORD *)(a1 + 40) |= 0x8000000000000000uLL;
  v16 = 1;
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 != 31 )
    {
      if ( (unsigned int)v6 >> 3 == 3 )
      {
        if ( (v6 & 7) != 0 )
          v16 = 2;
      }
      else
      {
        v16 = (unsigned int)v6 >> 3 != 1;
      }
    }
  }
  else
  {
    v16 = 3;
  }
  v17 = (((unsigned __int64)v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = *(_QWORD *)v17;
  if ( v17 >= 0xFFFFF6FB7DBED000uLL && v17 <= v9 )
  {
    v19 = *(_QWORD *)v17;
    if ( (v18 & 1) != 0 && ((v18 & 0x42) == 0 || (v18 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      v38 = KeGetCurrentThread()->ApcState.Process;
      if ( v38->AddressPolicy != 1 )
      {
        v39 = v38[2].KernelWaitTime;
        if ( v39 )
        {
          v40 = *(_QWORD *)(v39 + 8 * ((v17 >> 3) & 0x1FF));
          if ( (v40 & 0x20) != 0 )
            v19 = v18 | 0x20;
          v18 = v19 | 0x42;
          if ( (v40 & 0x42) == 0 )
            v18 = v19;
        }
      }
    }
  }
  v20 = *(_QWORD *)(a1 + 40);
  v21 = v18 >> 12;
  v22 = v21 ^ (v20 ^ v21) & 0xFFFFFF0000000000uLL;
  v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v22, v20);
  if ( v20 != v23 )
  {
    do
    {
      v24 = v23;
      v22 = v21 ^ (v23 ^ v21) & 0xFFFFFF0000000000uLL;
      v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v22, v23);
    }
    while ( v24 != v23 );
  }
  v25 = 48 * (v21 & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  CurrentThread = KeGetCurrentThread();
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v28 = Queue >> 9;
  }
  else
  {
    v28 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    v41 = CurrentThread->Process[1].Padding[3];
    if ( v41 )
    {
      v42 = *(_DWORD *)(v41 + 1092);
      if ( v28 >= v42 )
        LOBYTE(v28) = v42;
    }
  }
  v45 = 17;
  if ( (a4 & 1) == 0 )
  {
    if ( (a4 & 0x10) != 0 )
    {
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v15 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v22) )
          {
            HvlNotifyLongSpinWait(v15);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(a1 + 24) < 0 );
      }
      v15 = 0;
    }
    else
    {
      v45 = MiLockPageInline(a1);
    }
  }
  HIWORD(v46) = HIWORD(*(_DWORD *)(a1 + 32));
  LOWORD(v46) = 1;
  v29 = v46;
  *(_DWORD *)(a1 + 32) = v46;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v15 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v29) )
      {
        HvlNotifyLongSpinWait(v15);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v25 + 24) < 0 );
  }
  if ( !v4 && (unsigned __int64)a2 >= 0xFFFFF68000000000uLL && (unsigned __int64)a2 <= 0xFFFFF6FFFFFFFFFFuLL )
    MiIncreaseUsedPtesInPfn(v25, 1LL);
  *(_QWORD *)(v25 + 24) = (*(_QWORD *)(v25 + 24) + 1LL) ^ (*(_QWORD *)(v25 + 24) ^ (*(_QWORD *)(v25 + 24) + 1LL)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6 != v16 )
    MiChangePageAttribute(a1, v16, 1LL);
  *(_QWORD *)(a1 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  v47 = *(_DWORD *)(a1 + 32);
  HIBYTE(v47) ^= (HIBYTE(v47) ^ v28) & 7;
  *(_DWORD *)(a1 + 32) = v47;
  *(_QWORD *)(a1 + 8) = a2;
  v48 = *(_DWORD *)(a1 + 32);
  BYTE2(v48) = BYTE2(v48) & 0xF8 | 6;
  result = v48;
  *(_DWORD *)(a1 + 32) = v48;
  if ( (a4 & 0x20) == 0 )
  {
    v49 = *(_DWORD *)(a1 + 32);
    v31 = HIWORD(v49);
    if ( (v49 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(a1)
      && (((*(_QWORD *)(a1 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(a1 + 34) >> 4)) != 0 )
    {
      *(_QWORD *)(a1 + 16) &= ~4uLL;
    }
    BYTE2(v49) = v31 | 0x10;
    result = v49;
    *(_DWORD *)(a1 + 32) = v49;
  }
  if ( (a4 & 0x2000) != 0 )
  {
    result = *(_QWORD *)a1 | 1LL;
    *(_QWORD *)a1 = result;
  }
  *(_DWORD *)(a1 + 36) = 0;
  if ( (a4 & 0x40) != 0 )
    *(_BYTE *)(a1 + 35) |= 0x20u;
  if ( (a4 & 1) == 0 )
  {
    if ( (a4 & 0x10) != 0 )
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    else
      return MiUnlockPage(a1, v45);
  }
  return result;
}
