/*
 * XREFs of MiTerminateWsle @ 0x140201850
 * Callers:
 *     MiRemoveSystemImagePage @ 0x14020070C (MiRemoveSystemImagePage.c)
 *     MiDecommitAddToList @ 0x1402985A0 (MiDecommitAddToList.c)
 * Callees:
 *     MiRemoveWsle @ 0x1402007F4 (MiRemoveWsle.c)
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402023A0 (MiUnlockNestedPageTableWritePte.c)
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiCleanupLazyStampedPageTable @ 0x140305F5C (MiCleanupLazyStampedPageTable.c)
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     MiUnlockWsle @ 0x1403DB664 (MiUnlockWsle.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 */

__int64 __fastcall MiTerminateWsle(__int64 a1, unsigned __int64 a2, int a3, char a4, int *a5)
{
  int v5; // ebp
  __int64 v6; // r8
  unsigned __int64 v8; // r9
  BOOL v10; // r13d
  int v11; // edi
  ULONG_PTR v12; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // ebx
  char v21; // si
  int v22; // eax
  unsigned int v23; // ebx
  ULONG_PTR v24; // rbx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r15
  __int64 result; // rax
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r9
  __int64 v32; // rcx
  _KPROCESS *v33; // r8
  unsigned __int64 v34; // r9
  __int64 v35; // rdx
  unsigned __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // r8
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  ULONG_PTR v42; // rdi
  int v43; // eax
  int v44; // [rsp+30h] [rbp-58h]
  int v45; // [rsp+34h] [rbp-54h]
  ULONG_PTR v46[2]; // [rsp+38h] [rbp-50h] BYREF
  int v50; // [rsp+A8h] [rbp+20h]

  v5 = 0;
  v44 = 10;
  v45 = 0;
  v6 = 1LL;
  v8 = 0xFFFFF68000000000uLL;
  v10 = 1;
  v11 = 0;
  v12 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = 0xFFFFF6FB7DBED000uLL;
  v14 = *(_QWORD *)v12;
  if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v15 = *(_QWORD *)v12;
    if ( (v14 & 1) != 0 )
    {
      if ( ((v14 & 0x42) == 0 || (v14 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v32 = *(_QWORD *)(KernelWaitTime + 8 * ((v12 >> 3) & 0x1FF));
            if ( (v32 & 0x20) != 0 )
              v15 = v14 | 0x20;
            v14 = v15 | 0x42;
            if ( (v32 & 0x42) == 0 )
              v14 = v15;
          }
          v8 = 0xFFFFF68000000000uLL;
        }
      }
      v6 = 1LL;
      v13 = 0xFFFFF6FB7DBED000uLL;
    }
  }
  v16 = 48 * ((v14 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v17 = 1LL;
    v18 = *(_QWORD *)v12;
    v10 = *(_QWORD *)(v16 + 40) >= 0LL;
    if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v19 = *(_QWORD *)v12;
      if ( (v18 & 1) != 0 )
      {
        if ( ((v18 & 0x42) == 0 || (v18 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
        {
          v33 = KeGetCurrentThread()->ApcState.Process;
          if ( v33->AddressPolicy != 1 )
          {
            v34 = v33[2].KernelWaitTime;
            if ( v34 )
            {
              v35 = *(_QWORD *)(v34 + 8 * ((v12 >> 3) & 0x1FF));
              if ( (v35 & 0x20) != 0 )
                v19 = v18 | 0x20;
              v18 = v19 | 0x42;
              if ( (v35 & 0x42) == 0 )
                v18 = v19;
            }
          }
        }
        v17 = 1LL;
        v6 = 1LL;
      }
    }
    v20 = a4 & 1;
    v13 = HIBYTE(v18);
    LOBYTE(v13) = HIBYTE(v18) & 0xF;
    v21 = HIBYTE(v18) & 0xF | (16 * ((v18 >> 60) & 7));
    v44 = !(a4 & 1) + 9;
    if ( (HIBYTE(v18) & 0xF) == 8 )
    {
      v45 = 1;
      v43 = MiUnlockWsle(a1, a2, v16);
      v17 = 1LL;
      v11 = v43;
    }
    v8 = 0xFFFFF68000000000uLL;
  }
  else
  {
    v17 = 0LL;
    v21 = (*(_QWORD *)v16 >> 42) & 7;
    v20 = a4 & 1;
  }
  if ( v20 )
    goto LABEL_37;
  if ( (_DWORD)v17 )
  {
    v22 = 0;
    v50 = 0;
    if ( (a4 & 4) != 0 && v10 )
    {
      v23 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v23 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13, v17, v6, v8) )
          {
            HvlNotifyLongSpinWait(v23);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v16 + 24) < 0 );
      }
      v13 = 0x4000000000000000LL;
      *(_QWORD *)(v16 + 24) |= 0x4000000000000000uLL;
      v22 = 64;
      v50 = 64;
      v8 = 0xFFFFF68000000000uLL;
    }
    if ( v45 )
      goto LABEL_35;
    v24 = CLFS_LSN_NULL_EXT;
    v25 = *(_QWORD *)v12;
    if ( v12 >= 0xFFFFF6FB7DBED000uLL
      && v12 <= 0xFFFFF6FB7DBED7F8uLL
      && MiPteHasShadow(v13, v25, v6, 0xFFFFF68000000000uLL) )
    {
      LOBYTE(v25) = v25 | 0x20;
    }
    else
    {
      v26 = ((unsigned __int64)MiFlags >> 26) & 3;
      if ( v26 <= 1 )
      {
        if ( v26 )
        {
          if ( v12 >= 0xFFFFF6FB40000000uLL && v12 <= 0xFFFFF6FB7FFFFFFFuLL && (v25 & 0x80u) == 0LL )
            LOBYTE(v25) = v25 | 0x20;
        }
        else
        {
          LOBYTE(v25) = v25 | 0x20;
        }
      }
      else if ( (MiFlags & 0x2000000) != 0 )
      {
        _mm_lfence();
      }
    }
    if ( (v25 & 0x20) != 0 )
    {
      v46[0] = CLFS_LSN_NULL_EXT;
      if ( (unsigned int)MiPteInShadowRange(v12) )
      {
        v41 = MiSanitizeShadowPxe(v27, v46);
        v24 = v46[0];
        v5 = v41;
      }
      *(_QWORD *)v12 = v24;
      if ( v5 )
        MiWritePteShadow(v12, v24);
    }
    else
    {
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      if ( _bittest64(&MiFlags, 0x24u) && (CLFS_LSN_NULL_EXT & 0x21) == 1 && v12 >= v8 + 0x4000000000LL )
        MiCheckLinearProtectedPteAccessedBit(v12, CLFS_LSN_NULL_EXT);
      v42 = _InterlockedExchange64((volatile __int64 *)v12, CLFS_LSN_NULL_EXT);
      if ( (unsigned int)MiPteInShadowRange(v12) )
        MiWritePteShadow(v12, CLFS_LSN_NULL_EXT);
      if ( (v42 & 0x20) == 0 )
      {
        if ( _bittest64(&MiFlags, 0x24u) && v12 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(v12, v42);
        v11 = 0;
        goto LABEL_34;
      }
    }
    v11 = 1;
LABEL_34:
    v22 = v50;
LABEL_35:
    if ( v22 )
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_37:
    v28 = a1;
    goto LABEL_38;
  }
  v28 = a1;
  v36 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v12, v17, v6) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  MiLockNestedPageTable(a1, v12);
  v39 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v12, v37, v38) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( (*(_DWORD *)(v39 + 36) & 0x4000000) != 0 )
    v40 = HIDWORD(*(_QWORD *)v39);
  else
    v40 = *(_QWORD *)(v39 + 16) >> 16;
  if ( (v40 & 0x3FF) != 0 )
    goto LABEL_74;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
  {
    if ( a3 == 1 || a1 == MiGetAnyMultiplexedVm(4LL) )
      MiCleanupLazyStampedPageTable(a1, v12);
    if ( (unsigned __int16)*(_QWORD *)(v36 + 24) != 1 )
    {
LABEL_74:
      MiUnlockPageTableInternal(a1, v12);
      *a5 = 0;
      return 0LL;
    }
  }
  MiUnlockNestedPageTableWritePte(a1, v12, CLFS_LSN_NULL_EXT, 0LL);
  v11 = 1;
LABEL_38:
  if ( (a4 & 2) == 0 )
    MiRemoveWsle(v28, a2, v21, v44, v10);
  result = 1LL;
  *a5 = v11;
  return result;
}
