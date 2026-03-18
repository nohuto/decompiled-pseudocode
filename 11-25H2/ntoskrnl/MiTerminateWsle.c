/*
 * XREFs of MiTerminateWsle @ 0x140231080
 * Callers:
 *     MiDecommitAddToList @ 0x140382190 (MiDecommitAddToList.c)
 *     MiRemoveSystemImagePage @ 0x1403FF714 (MiRemoveSystemImagePage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiPteHasShadow @ 0x14024B550 (MiPteHasShadow.c)
 *     MiUnlockWsle @ 0x1402CC3B4 (MiUnlockWsle.c)
 *     MiEvictPageTableLock @ 0x1402FB4A4 (MiEvictPageTableLock.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiRemoveWsle @ 0x14038B0E4 (MiRemoveWsle.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 */

__int64 __fastcall MiTerminateWsle(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4, int *a5)
{
  int v5; // ebp
  __int64 v7; // r9
  unsigned __int64 v8; // r8
  int v10; // edi
  int v11; // r11d
  ULONG_PTR v12; // r15
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  unsigned __int64 v16; // rax
  int v17; // ebx
  unsigned __int8 v18; // si
  int v19; // eax
  int v20; // eax
  unsigned int v21; // ebx
  ULONG_PTR v22; // rbx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ebx
  __int64 result; // rax
  ULONG_PTR v28; // rdi
  __int64 v29; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r10
  __int64 v32; // rdx
  int v33; // eax
  int v34; // eax
  int v35; // [rsp+30h] [rbp-68h]
  _BOOL8 v36; // [rsp+38h] [rbp-60h]
  ULONG_PTR v37[3]; // [rsp+40h] [rbp-58h] BYREF
  int v39; // [rsp+A8h] [rbp+10h]
  int v41; // [rsp+B8h] [rbp+20h]

  v5 = 0;
  v39 = 10;
  v35 = 0;
  v7 = 1LL;
  v8 = 0xFFFFF68000000000uLL;
  LODWORD(v36) = 1;
  v10 = 0;
  v11 = 0;
  v12 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = *(_QWORD *)v12;
  if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v29 = *(_QWORD *)v12;
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
            v32 = *(_QWORD *)(KernelWaitTime + 8 * ((v12 >> 3) & 0x1FF));
            if ( (v32 & 0x20) != 0 )
              v29 = v13 | 0x20;
            v13 = v29 | 0x42;
            if ( (v32 & 0x42) == 0 )
              v13 = v29;
          }
        }
      }
      v8 = 0xFFFFF68000000000uLL;
    }
  }
  v14 = 0xFFFFFFFFFFLL;
  v15 = 48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v36 = *(_QWORD *)(v15 + 40) >= 0LL;
    v16 = MI_READ_PTE_LOCK_FREE(v12);
    v17 = a4 & 1;
    v14 = HIBYTE(v16);
    LOBYTE(v14) = HIBYTE(v16) & 0xF;
    v18 = HIBYTE(v16) & 0xF | (16 * ((v16 >> 60) & 7));
    v39 = !(a4 & 1) + 9;
    if ( (HIBYTE(v16) & 0xF) == 8 )
    {
      v35 = 1;
      v34 = MiUnlockWsle(a1, a2, v15);
      v7 = v36;
      v10 = v34;
      v19 = 1;
      v11 = 1;
    }
    else
    {
      v7 = v36;
      v11 = 0;
      v19 = 1;
    }
    v8 = 0xFFFFF68000000000uLL;
  }
  else
  {
    v19 = 0;
    v18 = (*(_QWORD *)v15 >> 42) & 7;
    v17 = a4 & 1;
  }
  if ( v17 )
  {
    v26 = a1;
  }
  else
  {
    if ( v19 )
    {
      v20 = 0;
      v41 = 0;
      if ( (a4 & 4) != 0 && (_DWORD)v7 )
      {
        v21 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v21 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
            {
              HvlNotifyLongSpinWait(v21);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v15 + 24) < 0 );
        }
        v14 = 0x4000000000000000LL;
        v11 = v35;
        *(_QWORD *)(v15 + 24) |= 0x4000000000000000uLL;
        v20 = 64;
        v41 = 64;
        v8 = 0xFFFFF68000000000uLL;
      }
      if ( v11 )
        goto LABEL_25;
      v22 = CLFS_LSN_NULL_EXT;
      v23 = *(_QWORD *)v12;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL
        && v12 <= 0xFFFFF6FB7DBED7F8uLL
        && MiPteHasShadow(v14, v23, 0xFFFFF68000000000uLL, v7) )
      {
        LOBYTE(v23) = v23 | 0x20;
      }
      else
      {
        v24 = ((unsigned __int64)MiFlags >> 26) & 3;
        if ( v24 <= 1 )
        {
          if ( v24 )
          {
            if ( v12 >= 0xFFFFF6FB40000000uLL && v12 <= 0xFFFFF6FB7FFFFFFFuLL && (v23 & 0x80u) == 0LL )
              LOBYTE(v23) = v23 | 0x20;
          }
          else
          {
            LOBYTE(v23) = v23 | 0x20;
          }
        }
        else if ( (MiFlags & 0x2000000) != 0 )
        {
          _mm_lfence();
        }
      }
      if ( (v23 & 0x20) != 0 )
      {
        v37[0] = CLFS_LSN_NULL_EXT;
        if ( (unsigned int)MiPteInShadowRange(v12) )
        {
          v33 = MiSanitizeShadowPxe(v25, v37);
          v22 = v37[0];
          v5 = v33;
        }
        *(_QWORD *)v12 = v22;
        if ( v5 )
          MiWritePteShadow(v12, v22);
      }
      else
      {
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        if ( _bittest64(&MiFlags, 0x24u) && (CLFS_LSN_NULL_EXT & 0x21) == 1 && v12 >= v8 + 0x4000000000LL )
          MiCheckLinearProtectedPteAccessedBit(v12, CLFS_LSN_NULL_EXT);
        v28 = _InterlockedExchange64((volatile __int64 *)v12, CLFS_LSN_NULL_EXT);
        if ( (unsigned int)MiPteInShadowRange(v12) )
          MiWritePteShadow(v12, CLFS_LSN_NULL_EXT);
        if ( (v28 & 0x20) == 0 )
        {
          if ( _bittest64(&MiFlags, 0x24u) && v12 >= 0xFFFFF6C000000000uLL )
            MiCheckLinearProtectedPteAccessedBit(v12, v28);
          v10 = 0;
          goto LABEL_24;
        }
      }
      v10 = 1;
LABEL_24:
      v20 = v41;
LABEL_25:
      v26 = a1;
      if ( v20 )
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_27;
    }
    v26 = a1;
    if ( !(unsigned int)MiEvictPageTableLock(a1, v12, a3, CLFS_LSN_NULL_EXT) )
    {
      *a5 = 0;
      return 0LL;
    }
    v10 = 1;
  }
LABEL_27:
  if ( (a4 & 2) == 0 )
    MiRemoveWsle(v26, a2, v18, v39, v36);
  result = 1LL;
  *a5 = v10;
  return result;
}
