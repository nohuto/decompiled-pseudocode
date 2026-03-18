/*
 * XREFs of MiClearPteAccessed @ 0x1402307A0
 * Callers:
 *     MiAgePteWorker @ 0x14022FCA0 (MiAgePteWorker.c)
 *     MiCrcStillIntact @ 0x1402FA610 (MiCrcStillIntact.c)
 *     MiResetAccessBitPteWorker @ 0x1403FB050 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetVaAgeList @ 0x140230FB0 (MiSetVaAgeList.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140285DE4 (MiUnlockNestedPageTableWritePte.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiLogPageAccess @ 0x140286F90 (MiLogPageAccess.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiCompressTbFlushList @ 0x140432A2C (MiCompressTbFlushList.c)
 *     qsort @ 0x1404FED20 (qsort.c)
 */

__int64 __fastcall MiClearPteAccessed(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rbp
  int v9; // edi
  char v10; // r15
  int v11; // ebx
  int v12; // r15d
  int v13; // r13d
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  ULONG_PTR v17; // rdi
  int v18; // ebx
  __int64 v19; // rcx
  BOOL v20; // edi
  __int64 v21; // r13
  __int64 v22; // r11
  int i; // ecx
  __int64 v24; // r9
  __int64 v25; // r10
  __int64 v26; // rax
  unsigned __int64 v27; // r8
  unsigned __int64 *v28; // r10
  unsigned __int64 v29; // rax
  unsigned __int64 v31; // rbx
  __int64 v32; // r9
  __int64 v33; // rdx
  int v34; // r9d
  unsigned int v35; // ebp
  int v36; // ecx
  unsigned __int64 v37; // rcx
  int v38; // eax
  KIRQL v39; // al
  int v40; // [rsp+20h] [rbp-58h]
  ULONG_PTR v41[10]; // [rsp+28h] [rbp-50h] BYREF
  BOOL v42; // [rsp+80h] [rbp+8h]
  __int64 v43; // [rsp+80h] [rbp+8h]
  __int64 v44; // [rsp+88h] [rbp+10h]
  unsigned int v45; // [rsp+90h] [rbp+18h]
  int v47; // [rsp+98h] [rbp+20h]
  unsigned __int8 v48; // [rsp+A0h] [rbp+28h]

  v44 = a2;
  v7 = a4;
  if ( a4 || (v9 = 0, (a5 & 4) != 0) )
    v9 = 1;
  v10 = a5;
  v48 = 17;
  v11 = (a5 >> 1) & 1;
  v42 = 0;
  v12 = v10 & 1;
  v40 = 0;
  v13 = 0;
  v14 = (__int64)(a3 << 25) >> 16;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
  {
    v42 = 0;
    v15 = 0LL;
    v45 = 0;
    if ( !v9 )
    {
LABEL_103:
      v20 = v42;
      goto LABEL_29;
    }
    goto LABEL_6;
  }
  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && *(__int64 *)(a2 + 40) >= 0
    || (*(_DWORD *)(a1 + 184) & 0xF) != 0 && (unsigned __int16)*(_DWORD *)(a2 + 32) > 1u )
  {
    return 0LL;
  }
  v15 = 1LL;
  v45 = 1;
  if ( v9 )
  {
    if ( v14 >= 0xFFFFF68000000000uLL )
    {
      if ( v14 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v42 = ((a3 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL;
        goto LABEL_72;
      }
LABEL_71:
      if ( v14 > 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_7;
LABEL_72:
      v13 = 1;
      MiLockNestedPageTable(a1, a3);
      a2 = v44;
      v15 = v45;
      goto LABEL_7;
    }
LABEL_6:
    if ( v14 < 0xFFFFF68000000000uLL )
    {
LABEL_7:
      if ( !(_DWORD)v15 )
        goto LABEL_8;
      if ( v42 )
      {
        v39 = ExAcquireSpinLockExclusive(&dword_140E373C0);
        a2 = v44;
        v48 = v39;
      }
      goto LABEL_59;
    }
    goto LABEL_71;
  }
LABEL_59:
  v40 = 1;
  v35 = 0;
LABEL_60:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    while ( 1 )
    {
      if ( (++v35 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15) )
        {
          HvlNotifyLongSpinWait(v35);
          a2 = v44;
          goto LABEL_79;
        }
        a2 = v44;
      }
      _mm_pause();
LABEL_79:
      if ( *(__int64 *)(a2 + 24) >= 0 )
        goto LABEL_60;
    }
  }
  v7 = a4;
  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && *(__int64 *)(a2 + 40) >= 0
    || (*(_DWORD *)(a1 + 184) & 0xF) != 0 && (unsigned __int16)*(_DWORD *)(a2 + 32) > 1u )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v42 )
      MiReleaseSpinLockExclusive(&dword_140E373C0, v48);
    if ( v13 )
      MiUnlockPageTableInternal(a1, a3);
    return 0LL;
  }
LABEL_8:
  if ( !v9 )
    goto LABEL_103;
  v16 = MI_READ_PTE_LOCK_FREE(a3);
  if ( v13 )
  {
    v20 = v42;
    MiUnlockNestedPageTableWritePte(a1, a3, v16 & 0xCFFFFFFFFFFFFFDFuLL, v42);
  }
  else
  {
    v17 = v16 & 0x80FFFFFFFFFFFFDFuLL | MI_READ_PTE_LOCK_FREE(a3) & 0x7F00000000000000LL;
    v18 = 0;
    v41[0] = v17;
    if ( (unsigned int)MiPteInShadowRange(a3) )
    {
      v38 = MiSanitizeShadowPxe(v19, v41);
      v17 = v41[0];
      v18 = v38;
    }
    if ( _bittest64(&MiFlags, 0x24u) && (v17 & 0x20) == 0 && a3 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(a3, v17);
    *(_QWORD *)a3 = v17;
    if ( v18 )
      MiWritePteShadow(a3, v17);
    v20 = v42;
  }
  v11 = 1;
  if ( v7 )
  {
    v21 = 1LL;
    v22 = (__int64)(a3 << 25) >> 16;
    v43 = v22;
    if ( *(_DWORD *)(v7 + 8) != 1 )
    {
      v36 = *(_DWORD *)(v7 + 16);
      if ( (v36 & 4) == 0 && v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
        *(_DWORD *)(v7 + 16) = v36 | 4;
    }
LABEL_18:
    for ( i = 0; ; i = 1 )
    {
      v47 = i;
      v24 = *(unsigned int *)(v7 + 28);
      if ( (_DWORD)v24 && (*(_DWORD *)(v7 + 16) & 2) == 0 )
      {
        v25 = 8LL * (unsigned int)(v24 - 1);
        v26 = *(_QWORD *)(v25 + v7 + 40);
        if ( (v26 & 0xC00) == 0 )
        {
          v27 = *(_QWORD *)(v25 + v7 + 40) & 0x3FFLL;
          if ( (v26 & 0xFFFFFFFFFFFFF000uLL) + ((v27 + 1) << 12) == v22 && v27 + v21 > v27 && v27 + v21 <= 0x3FF )
          {
            *(_QWORD *)(v7 + 32) += v21;
            *(_QWORD *)(v25 + v7 + 40) = (v26 + v21) ^ ((v26 + v21) ^ v26) & 0xFFFFFFFFFFFFFC00uLL;
            goto LABEL_29;
          }
          v28 = (unsigned __int64 *)(v7 + 8LL * (unsigned int)(v24 - 1) + 40);
          v29 = *v28;
          if ( (*v28 & 0xFFFFFFFFFFFFF000uLL) == (v21 << 12) + v43 )
          {
            v37 = *v28 & 0x3FF;
            if ( v37 + v21 <= 0x3FF && v37 + v21 > v37 )
            {
              *(_QWORD *)(v7 + 32) += v21;
              *v28 = (v29 - (v21 << 12) + v21) ^ ((v29 - (v21 << 12) + v21) ^ (v29 - (v21 << 12))) & 0xFFFFFFFFFFFFFC00uLL;
              goto LABEL_29;
            }
          }
          v22 = v43;
        }
        i = v47;
      }
      if ( (_DWORD)v24 != *(_DWORD *)(v7 + 12) )
        break;
      if ( i )
      {
        if ( !*(_BYTE *)(v7 + 25) )
          *(_BYTE *)(v7 + 25) = 1;
        goto LABEL_29;
      }
      if ( *(_BYTE *)(v7 + 25) )
        goto LABEL_29;
      qsort((void *)(v7 + 40), *(unsigned int *)(v7 + 28), 8uLL, MiTbFlushSort);
      MiCompressTbFlushList(v7);
      v22 = v43;
    }
    while ( v21 )
    {
      v33 = 1024LL;
      if ( (unsigned __int64)(v21 - 1) <= 0x3FF )
        v33 = v21;
      *(_QWORD *)(v7 + 8 * v24 + 40) = v22 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v33 - 1) & 0x3FF;
      v34 = *(_DWORD *)(v7 + 28);
      *(_QWORD *)(v7 + 32) += v33;
      v24 = (unsigned int)(v34 + 1);
      v22 += v33 << 12;
      *(_DWORD *)(v7 + 28) = v24;
      v43 = v22;
      v21 -= v33;
      if ( v21 && (_DWORD)v24 == *(_DWORD *)(v7 + 12) )
        goto LABEL_18;
    }
  }
LABEL_29:
  if ( v40 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v20 )
      MiReleaseSpinLockExclusive(&dword_140E373C0, v48);
  }
  if ( !v11 )
    return 1LL;
  if ( v14 < 0xFFFFF68000000000uLL || v14 > 0xFFFFF6FFFFFFFFFFuLL )
    v31 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 56) & 0xF;
  else
    v31 = (*(_QWORD *)(48
                     * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                     - 0x220000000000LL) >> 42) & 7LL;
  if ( !v12 )
    goto LABEL_34;
  if ( (_DWORD)v31 != 7 )
  {
    MiLogPageAccess(a1, a3);
LABEL_34:
    if ( !(_DWORD)v31 )
    {
      LOBYTE(v32) = 1;
      MiSetVaAgeList(a1, (__int64)(a3 << 25) >> 16, 1LL, v32);
    }
  }
  return 1LL;
}
