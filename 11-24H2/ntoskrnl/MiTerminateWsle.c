/*
 * XREFs of MiTerminateWsle @ 0x1402856F0
 * Callers:
 *     MiDecommitAddToList @ 0x1402889A0 (MiDecommitAddToList.c)
 *     MiRemoveSystemImagePage @ 0x1404803C4 (MiRemoveSystemImagePage.c)
 * Callees:
 *     MiCleanupLazyStampedPageTable @ 0x140212BFC (MiCleanupLazyStampedPageTable.c)
 *     MiPteHasShadow @ 0x1402141A0 (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140285DE4 (MiUnlockNestedPageTableWritePte.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockWsle @ 0x1402C7B94 (MiUnlockWsle.c)
 *     MiRemoveWsle @ 0x1402C8340 (MiRemoveWsle.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 */

__int64 __fastcall MiTerminateWsle(__int64 a1, unsigned __int64 a2, int a3, char a4, int *a5)
{
  int v5; // ebp
  unsigned __int64 v7; // r9
  BOOL v9; // r13d
  int v10; // edi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r15
  int v16; // edx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // ebx
  unsigned __int8 v20; // si
  int v21; // eax
  unsigned int v22; // ebx
  ULONG_PTR v23; // rbx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  int v26; // r15d
  __int64 result; // rax
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r9
  __int64 v30; // rcx
  _KPROCESS *v31; // r8
  unsigned __int64 v32; // r9
  __int64 v33; // rdx
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  ULONG_PTR v37; // rdi
  int v38; // eax
  int v39; // [rsp+30h] [rbp-58h]
  int v40; // [rsp+34h] [rbp-54h]
  int v42; // [rsp+98h] [rbp+10h]
  int v44; // [rsp+A8h] [rbp+20h]

  v42 = a2;
  v5 = 0;
  v39 = 10;
  v40 = 0;
  v7 = 0xFFFFF68000000000uLL;
  v9 = 1;
  v10 = 0;
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = 0xFFFFF6FB7DBED000uLL;
  v13 = *(_QWORD *)v11;
  if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v14 = *(_QWORD *)v11;
    if ( (v13 & 1) != 0 )
    {
      if ( ((v13 & 0x42) == 0 || (v13 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v30 = *(_QWORD *)(KernelWaitTime + 8 * ((v11 >> 3) & 0x1FF));
            if ( (v30 & 0x20) != 0 )
              v14 = v13 | 0x20;
            v13 = v14 | 0x42;
            if ( (v30 & 0x42) == 0 )
              v13 = v14;
          }
          v7 = 0xFFFFF68000000000uLL;
        }
      }
      v12 = 0xFFFFF6FB7DBED000uLL;
    }
  }
  v15 = 48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v16 = 1;
    v17 = *(_QWORD *)v11;
    v9 = *(_QWORD *)(v15 + 40) >= 0LL;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v18 = *(_QWORD *)v11;
      if ( (v17 & 1) != 0 )
      {
        if ( ((v17 & 0x42) == 0 || (v17 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
        {
          v31 = KeGetCurrentThread()->ApcState.Process;
          if ( v31->AddressPolicy != 1 )
          {
            v32 = v31[2].KernelWaitTime;
            if ( v32 )
            {
              v33 = *(_QWORD *)(v32 + 8 * ((v11 >> 3) & 0x1FF));
              if ( (v33 & 0x20) != 0 )
                v18 = v17 | 0x20;
              v17 = v18 | 0x42;
              if ( (v33 & 0x42) == 0 )
                v17 = v18;
            }
          }
        }
        v16 = 1;
      }
    }
    v19 = a4 & 1;
    v12 = HIBYTE(v17);
    LOBYTE(v12) = HIBYTE(v17) & 0xF;
    v20 = HIBYTE(v17) & 0xF | (16 * ((v17 >> 60) & 7));
    v39 = !(a4 & 1) + 9;
    if ( (HIBYTE(v17) & 0xF) == 8 )
    {
      v40 = 1;
      v38 = MiUnlockWsle(a1, a2, v15);
      v16 = 1;
      v10 = v38;
    }
    v7 = 0xFFFFF68000000000uLL;
  }
  else
  {
    v16 = 0;
    v20 = (*(_QWORD *)v15 >> 42) & 7;
    v19 = a4 & 1;
  }
  if ( v19 )
    goto LABEL_37;
  if ( v16 )
  {
    v21 = 0;
    v44 = 0;
    if ( (a4 & 4) != 0 && v9 )
    {
      v22 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v22 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12) )
          {
            HvlNotifyLongSpinWait(v22);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v15 + 24) < 0 );
      }
      *(_QWORD *)(v15 + 24) |= 0x4000000000000000uLL;
      v21 = 64;
      v44 = 64;
      v7 = 0xFFFFF68000000000uLL;
    }
    if ( v40 )
      goto LABEL_35;
    v23 = CLFS_LSN_NULL_EXT;
    v24 = *(_QWORD *)v11;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL && MiPteHasShadow() )
    {
      LOBYTE(v24) = v24 | 0x20;
    }
    else
    {
      v25 = ((unsigned __int64)MiFlags >> 26) & 3;
      if ( v25 <= 1 )
      {
        if ( v25 )
        {
          if ( v11 >= 0xFFFFF6FB40000000uLL && v11 <= 0xFFFFF6FB7FFFFFFFuLL && (v24 & 0x80u) == 0LL )
            LOBYTE(v24) = v24 | 0x20;
        }
        else
        {
          LOBYTE(v24) = v24 | 0x20;
        }
      }
      else if ( (MiFlags & 0x2000000) != 0 )
      {
        _mm_lfence();
      }
    }
    if ( (v24 & 0x20) != 0 )
    {
      if ( (unsigned int)MiPteInShadowRange(v11) )
      {
        v23 = CLFS_LSN_NULL_EXT;
        v5 = MiSanitizeShadowPxe();
      }
      *(_QWORD *)v11 = v23;
      if ( v5 )
        MiWritePteShadow();
    }
    else
    {
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      if ( _bittest64(&MiFlags, 0x24u) && (CLFS_LSN_NULL_EXT & 0x21) == 1 && v11 >= v7 + 0x4000000000LL )
        MiCheckLinearProtectedPteAccessedBit(v11, CLFS_LSN_NULL_EXT, 128);
      v37 = _InterlockedExchange64((volatile __int64 *)v11, CLFS_LSN_NULL_EXT);
      if ( (unsigned int)MiPteInShadowRange(v11) )
        MiWritePteShadow();
      if ( (v37 & 0x20) == 0 )
      {
        if ( _bittest64(&MiFlags, 0x24u) && v11 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(v11, v37, v44);
        v10 = 0;
        goto LABEL_34;
      }
    }
    v10 = 1;
LABEL_34:
    v21 = v44;
LABEL_35:
    if ( v21 )
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_37:
    v26 = a1;
    goto LABEL_38;
  }
  v26 = a1;
  v34 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v11) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  MiLockNestedPageTable(a1, v11);
  v35 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v11) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( (*(_DWORD *)(v35 + 36) & 0x4000000) != 0 )
    v36 = HIDWORD(*(_QWORD *)v35);
  else
    v36 = *(_QWORD *)(v35 + 16) >> 16;
  if ( (v36 & 0x3FF) != 0 )
    goto LABEL_74;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
  {
    if ( a3 == 1 || a1 == MiGetAnyMultiplexedVm(4LL) )
      MiCleanupLazyStampedPageTable(a1, v11);
    if ( (unsigned __int16)*(_QWORD *)(v34 + 24) != 1 )
    {
LABEL_74:
      MiUnlockPageTableInternal(a1, v11);
      *a5 = 0;
      return 0LL;
    }
  }
  MiUnlockNestedPageTableWritePte(a1, v11, CLFS_LSN_NULL_EXT, 0LL);
  v10 = 1;
LABEL_38:
  if ( (a4 & 2) == 0 )
    MiRemoveWsle(v26, v42, v20, v39, v9);
  result = 1LL;
  *a5 = v10;
  return result;
}
