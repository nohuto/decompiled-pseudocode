/*
 * XREFs of MiInitializePfn @ 0x14024CD40
 * Callers:
 *     MiMakePageAvoidRead @ 0x140222A90 (MiMakePageAvoidRead.c)
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiCreateSharedZeroPages @ 0x14023B000 (MiCreateSharedZeroPages.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8508C (MmAllocateIndependentPagesEx.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C43014 (MmInitializeImageViewExtensionCfg.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14021A0C0 (MiSwizzleInvalidPte.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1402D1090 (MiIncreaseUsedPtesInPfn.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140388D44 (MiCanPfnOriginalPteBeLost.c)
 */

__int64 __fastcall MiInitializePfn(__int64 a1, __int64 *a2, unsigned int a3, __int16 a4)
{
  __int64 v4; // rbx
  __int64 v6; // r10
  __int64 *v7; // r11
  unsigned __int64 DemandZeroPte; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // r12d
  unsigned int v14; // r15d
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r8
  signed __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  signed __int64 v20; // rax
  signed __int64 v21; // rdx
  __int64 v22; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // esi
  unsigned int v25; // esi
  __int64 v26; // rcx
  __int64 *v27; // r11
  __int64 result; // rax
  unsigned int v29; // r11d
  __int64 v30; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v33; // rcx
  __int64 v34; // rax
  _KPROCESS *v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  _KPROCESS *v38; // r8
  unsigned __int64 v39; // r9
  __int64 v40; // rdx
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
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v30 = *a2;
    if ( (v4 & 1) != 0 && ((v4 & 0x42) == 0 || (v4 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v33 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)v7 >> 3) & 0x1FF));
          if ( (v33 & 0x20) != 0 )
            v30 = v4 | 0x20;
          v4 = v30 | 0x42;
          if ( (v33 & 0x42) == 0 )
            v4 = v30;
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
  v10 = DemandZeroPte;
  if ( (unsigned __int64)v43 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v43 <= 0xFFFFF6FB7DBED7F8uLL
    && (DemandZeroPte & 1) != 0
    && ((DemandZeroPte & 0x42) == 0 || (DemandZeroPte & 0x20) == 0)
    && (MiFlags & 0x600000) != 0 )
  {
    v38 = KeGetCurrentThread()->ApcState.Process;
    if ( v38->AddressPolicy != 1 )
    {
      v39 = v38[2].KernelWaitTime;
      if ( v39 )
      {
        v40 = *(_QWORD *)(v39 + 8 * (((unsigned __int64)v43 >> 3) & 0x1FF));
        if ( (v40 & 0x20) != 0 )
          DemandZeroPte |= 0x20uLL;
        v10 = DemandZeroPte | 0x42;
        if ( (v40 & 0x42) == 0 )
          v10 = DemandZeroPte;
      }
    }
  }
  v11 = -9LL;
  if ( (v10 & 0x400) != 0 )
    v11 = -2049LL;
  v12 = v10 & v11;
  v43[0] = v12;
  if ( (a4 & 8) != 0 )
    v12 = MiSwizzleInvalidPte(128LL);
  v13 = 0;
  *(_QWORD *)(a1 + 16) = v12;
  *(_QWORD *)a1 = 0LL;
  if ( (a4 & 2) != 0 )
    *(_QWORD *)(a1 + 40) |= 0x8000000000000000uLL;
  v14 = 1;
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 != 31 )
    {
      if ( (unsigned int)v6 >> 3 == 3 )
      {
        if ( (v6 & 7) != 0 )
          v14 = 2;
      }
      else
      {
        v14 = (unsigned int)v6 >> 3 != 1;
      }
    }
  }
  else
  {
    v14 = 3;
  }
  v15 = (((unsigned __int64)v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = *(_QWORD *)v15;
  if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v34 = *(_QWORD *)v15;
    if ( (v16 & 1) != 0 && ((v16 & 0x42) == 0 || (v16 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      v35 = KeGetCurrentThread()->ApcState.Process;
      if ( v35->AddressPolicy != 1 )
      {
        v36 = v35[2].KernelWaitTime;
        if ( v36 )
        {
          v37 = *(_QWORD *)(v36 + 8 * ((v15 >> 3) & 0x1FF));
          if ( (v37 & 0x20) != 0 )
            v34 = v16 | 0x20;
          v16 = v34 | 0x42;
          if ( (v37 & 0x42) == 0 )
            v16 = v34;
        }
      }
    }
  }
  v17 = *(_QWORD *)(a1 + 40);
  v18 = v16 >> 12;
  v19 = v18 ^ (v17 ^ v18) & 0xFFFFFF0000000000uLL;
  v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v19, v17);
  if ( v17 != v20 )
  {
    do
    {
      v21 = v20;
      v19 = v18 ^ (v20 ^ v18) & 0xFFFFFF0000000000uLL;
      v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v19, v20);
    }
    while ( v21 != v20 );
  }
  v22 = 48 * (v18 & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  CurrentThread = KeGetCurrentThread();
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v25 = Queue >> 9;
  }
  else
  {
    v25 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    v41 = CurrentThread->Process[1].Padding[3];
    if ( v41 )
    {
      v42 = *(_DWORD *)(v41 + 1092);
      if ( v25 >= v42 )
        LOBYTE(v25) = v42;
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
          if ( (++v13 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v19) )
          {
            HvlNotifyLongSpinWait(v13);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(a1 + 24) < 0 );
      }
      v13 = 0;
    }
    else
    {
      v45 = MiLockPageInline(a1);
    }
  }
  HIWORD(v46) = HIWORD(*(_DWORD *)(a1 + 32));
  LOWORD(v46) = 1;
  v26 = v46;
  *(_DWORD *)(a1 + 32) = v46;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v13 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v26) )
      {
        HvlNotifyLongSpinWait(v13);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v22 + 24) < 0 );
  }
  if ( v4 )
  {
    v27 = a2;
  }
  else
  {
    v27 = a2;
    if ( (unsigned __int64)a2 >= 0xFFFFF68000000000uLL && (unsigned __int64)a2 <= 0xFFFFF6FFFFFFFFFFuLL )
      MiIncreaseUsedPtesInPfn(v22, 1LL);
  }
  *(_QWORD *)(v22 + 24) = (*(_QWORD *)(v22 + 24) + 1LL) ^ (*(_QWORD *)(v22 + 24) ^ (*(_QWORD *)(v22 + 24) + 1LL)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6 != v14 )
  {
    MiChangePageAttribute(a1, v14, 1LL);
    v27 = a2;
  }
  *(_QWORD *)(a1 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  v47 = *(_DWORD *)(a1 + 32);
  HIBYTE(v47) ^= (HIBYTE(v47) ^ v25) & 7;
  *(_DWORD *)(a1 + 32) = v47;
  *(_QWORD *)(a1 + 8) = v27;
  v48 = *(_DWORD *)(a1 + 32);
  BYTE2(v48) = BYTE2(v48) & 0xF8 | 6;
  result = v48;
  *(_DWORD *)(a1 + 32) = v48;
  if ( (a4 & 0x20) == 0 )
  {
    v49 = *(_DWORD *)(a1 + 32);
    v29 = HIWORD(v49);
    if ( (v49 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(a1)
      && (((*(_QWORD *)(a1 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(a1 + 34) >> 4)) != 0 )
    {
      *(_QWORD *)(a1 + 16) &= ~4uLL;
    }
    BYTE2(v49) = v29 | 0x10;
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
