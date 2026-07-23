/*
 * XREFs of MiInitializePfn @ 0x14024B260
 * Callers:
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MiCreateSharedZeroPages @ 0x140342A48 (MiCreateSharedZeroPages.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8536C (MmAllocateIndependentPagesEx.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5641C (MmInitializeImageViewExtensionCfg.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCanPfnOriginalPteBeLost @ 0x1402EE318 (MiCanPfnOriginalPteBeLost.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1403916FC (MiIncreaseUsedPtesInPfn.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiInitializePfn(__int64 a1, _KPROCESS *Process, unsigned __int64 KernelWaitTime, __int16 a4)
{
  __int64 v4; // rbx
  __int64 v6; // r9
  unsigned __int64 v7; // r10
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
  __int64 v22; // r9
  unsigned __int64 v23; // rcx
  signed __int64 i; // rax
  __int64 v25; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // esi
  unsigned int v28; // esi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 result; // rax
  unsigned int v32; // r11d
  __int64 v33; // rcx
  _KPROCESS *v34; // r8
  unsigned __int64 v35; // r10
  __int64 v36; // rdx
  _KPROCESS *v37; // rdx
  unsigned __int64 v38; // rcx
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned int v41; // eax
  _QWORD v42[11]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v43; // [rsp+88h] [rbp+10h]
  unsigned __int8 v44; // [rsp+90h] [rbp+18h]
  unsigned int v45; // [rsp+98h] [rbp+20h]
  int v46; // [rsp+98h] [rbp+20h]
  unsigned int v47; // [rsp+98h] [rbp+20h]
  unsigned int v48; // [rsp+98h] [rbp+20h]

  v43 = (unsigned __int64)Process;
  v4 = *(_QWORD *)&Process->Header.Lock;
  v6 = (unsigned int)KernelWaitTime;
  v7 = (unsigned __int64)Process;
  v9 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)Process >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)Process <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v10 = *(_QWORD *)&Process->Header.Lock;
    if ( (v4 & 1) != 0 )
    {
      LOBYTE(Process) = (v4 & 0x42) != 0;
      if ( ((unsigned __int8)Process & ((v4 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v33 = *(_QWORD *)(KernelWaitTime + 8 * ((v7 >> 3) & 0x1FF));
            if ( (v33 & 0x20) != 0 )
              v10 = v4 | 0x20;
            v4 = v10 | 0x42;
            if ( (v33 & 0x42) == 0 )
              v4 = v10;
          }
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
      DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v6, Process, KernelWaitTime, v6);
  }
  v42[0] = DemandZeroPte;
  v12 = DemandZeroPte;
  if ( (unsigned __int64)v42 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v42 <= v9
    && (DemandZeroPte & 1) != 0
    && ((DemandZeroPte & 0x42) == 0 || (DemandZeroPte & 0x20) == 0)
    && (MiFlags & 0x600000) != 0 )
  {
    v34 = KeGetCurrentThread()->ApcState.Process;
    if ( v34->AddressPolicy != 1 )
    {
      v35 = v34[2].KernelWaitTime;
      if ( v35 )
      {
        v36 = *(_QWORD *)(v35 + 8 * (((unsigned __int64)v42 >> 3) & 0x1FF));
        if ( (v36 & 0x20) != 0 )
          DemandZeroPte |= 0x20uLL;
        v12 = DemandZeroPte | 0x42;
        if ( (v36 & 0x42) == 0 )
          v12 = DemandZeroPte;
      }
      v7 = v43;
    }
  }
  v13 = -9LL;
  if ( (v12 & 0x400) != 0 )
    v13 = -2049LL;
  v14 = v12 & v13;
  v42[0] = v14;
  if ( (a4 & 8) != 0 )
  {
    v14 = 128LL;
    if ( qword_140E2DCC0 )
    {
      v14 = 144LL;
      if ( (qword_140E2DCC0 & 0x80u) == 0LL )
        v14 = qword_140E2DCC0 | 0x80;
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
  v17 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = *(_QWORD *)v17;
  if ( v17 >= 0xFFFFF6FB7DBED000uLL && v17 <= v9 )
  {
    v19 = *(_QWORD *)v17;
    if ( (v18 & 1) != 0 && ((v18 & 0x42) == 0 || (v18 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      v37 = KeGetCurrentThread()->ApcState.Process;
      if ( v37->AddressPolicy != 1 )
      {
        v38 = v37[2].KernelWaitTime;
        if ( v38 )
        {
          v39 = *(_QWORD *)(v38 + 8 * ((v17 >> 3) & 0x1FF));
          if ( (v39 & 0x20) != 0 )
            v19 = v18 | 0x20;
          v18 = v19 | 0x42;
          if ( (v39 & 0x42) == 0 )
            v18 = v19;
        }
      }
    }
  }
  v20 = *(_QWORD *)(a1 + 40);
  v21 = v18 >> 12;
  v22 = v21 & 0xFFFFFFFFFFLL;
  v23 = v21 ^ (v20 ^ v21) & 0xFFFFFF0000000000uLL;
  for ( i = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v23, v20);
        v20 != i;
        i = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v23, i) )
  {
    v20 = i;
    v23 = v21 ^ (i ^ v21) & 0xFFFFFF0000000000uLL;
  }
  v25 = 48 * v22 - 0x220000000000LL;
  CurrentThread = KeGetCurrentThread();
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v28 = Queue >> 9;
  }
  else
  {
    v28 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    v40 = CurrentThread->Process[1].Padding[3];
    if ( v40 )
    {
      v41 = *(_DWORD *)(v40 + 1092);
      if ( v28 >= v41 )
        LOBYTE(v28) = v41;
    }
  }
  v44 = 17;
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
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v23, v20, v21, v22) )
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
      v44 = MiLockPageInline(a1);
    }
  }
  v29 = 1LL;
  HIWORD(v45) = HIWORD(*(_DWORD *)(a1 + 32));
  LOWORD(v45) = 1;
  v30 = v45;
  *(_DWORD *)(a1 + 32) = v45;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v15 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v30, v29, v21, v22) )
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
  if ( !v4 && v43 >= 0xFFFFF68000000000uLL && v43 <= 0xFFFFF6FFFFFFFFFFuLL )
    MiIncreaseUsedPtesInPfn(v25, 1LL);
  *(_QWORD *)(v25 + 24) = (*(_QWORD *)(v25 + 24) + 1LL) ^ (*(_QWORD *)(v25 + 24) ^ (*(_QWORD *)(v25 + 24) + 1LL)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6 != v16 )
    MiChangePageAttribute(a1, v16, 1LL);
  *(_QWORD *)(a1 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  v46 = *(_DWORD *)(a1 + 32);
  HIBYTE(v46) ^= (HIBYTE(v46) ^ v28) & 7;
  *(_DWORD *)(a1 + 32) = v46;
  *(_QWORD *)(a1 + 8) = v43;
  v47 = *(_DWORD *)(a1 + 32);
  BYTE2(v47) = BYTE2(v47) & 0xF8 | 6;
  result = v47;
  *(_DWORD *)(a1 + 32) = v47;
  if ( (a4 & 0x20) == 0 )
  {
    v48 = *(_DWORD *)(a1 + 32);
    v32 = HIWORD(v48);
    if ( (v48 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(a1)
      && (((*(_QWORD *)(a1 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(a1 + 34) >> 4)) != 0 )
    {
      *(_QWORD *)(a1 + 16) &= ~4uLL;
    }
    BYTE2(v48) = v32 | 0x10;
    result = v48;
    *(_DWORD *)(a1 + 32) = v48;
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
      return MiUnlockPage(a1, v44);
  }
  return result;
}
