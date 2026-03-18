/*
 * XREFs of MiDecommitFreePagesTail @ 0x1404F1D60
 * Callers:
 *     MiDecommitPagesTail @ 0x1402DBE74 (MiDecommitPagesTail.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x1402209B0 (MiPfnShareCountIsZero.c)
 *     MiDecommitSharedPageTail @ 0x14023E140 (MiDecommitSharedPageTail.c)
 *     MiBadShareCount @ 0x14023EE28 (MiBadShareCount.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiDeleteClusterPage @ 0x1402ED270 (MiDeleteClusterPage.c)
 *     MiDereferenceIoPages @ 0x1403CE8E0 (MiDereferenceIoPages.c)
 *     MiShowBadMapper @ 0x1403D0830 (MiShowBadMapper.c)
 *     MiDecommitPagesCoalesce @ 0x1404241F0 (MiDecommitPagesCoalesce.c)
 *     MiDoubleUnlockMdlPage @ 0x140447B0C (MiDoubleUnlockMdlPage.c)
 *     MiIsPfnLocked @ 0x14044C868 (MiIsPfnLocked.c)
 *     MiDecommitPrivatePageTail @ 0x1404F2240 (MiDecommitPrivatePageTail.c)
 */

void __fastcall MiDecommitFreePagesTail(__int64 a1)
{
  __int64 v1; // r11
  int v2; // esi
  unsigned int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // r13
  unsigned __int64 v6; // rcx
  unsigned int v7; // r9d
  __int64 v8; // r12
  unsigned __int64 v9; // rbx
  ULONG_PTR v10; // r14
  int v11; // edx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 ContainingPageTable; // rax
  __int64 v18; // rsi
  unsigned int v19; // esi
  unsigned int v20; // r9d
  int v21; // r8d
  unsigned int v22; // r9d
  __int64 v23; // r10
  unsigned int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // [rsp+20h] [rbp-68h]
  __int64 v28; // [rsp+28h] [rbp-60h]
  unsigned __int64 v29; // [rsp+30h] [rbp-58h]
  unsigned int v31; // [rsp+98h] [rbp+10h]
  unsigned int v32; // [rsp+A0h] [rbp+18h]
  char v33; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 160);
  v3 = 0;
  v31 = 0;
  v4 = 0LL;
  v33 = v2;
  v5 = -1LL;
  v28 = v1;
  v32 = 0;
  v6 = (((*(_QWORD *)(v1 + 16480) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  v7 = 0;
  v29 = v6;
  if ( !*(_DWORD *)(v1 + 16488) )
    return;
  while ( 1 )
  {
    v8 = v1 + 8LL * v7;
    v9 = *(_QWORD *)(v8 + 12384);
    v10 = (v9 >> 12) & 0xFFFFFFFFFFLL;
    v11 = 0;
    v12 = v6 + 8LL * *(unsigned __int16 *)(v8 + 16498);
    v13 = (__int64)(v12 << 25) >> 16;
    if ( v13 < 0xFFFFF68000000000uLL || v13 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v14 = 0;
      if ( (v2 & 0x60) != 0
        || (v2 & 8) != 0 && (v10 > qword_140E2DBE0 || ((*(_QWORD *)(48 * v10 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0) )
      {
        v11 = 1;
      }
    }
    else
    {
      v14 = 1;
    }
    if ( v10 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v10 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      v15 = 48 * v10 - 0x220000000000LL;
    else
      v15 = 0LL;
    if ( v11 )
    {
      if ( v15 )
      {
        if ( !MiIsPfnLocked(v15) )
          MiShowBadMapper(v10, 0LL, 2);
        if ( (v33 & 0x40) != 0 )
          MiDoubleUnlockMdlPage(v15, 1LL, v16);
      }
      else
      {
        MiDereferenceIoPages(1, (*(_QWORD *)(v8 + 12384) >> 12) & 0xFFFFFFFFFFLL, 1uLL);
      }
      ContainingPageTable = MiGetContainingPageTable(v12);
      *(_BYTE *)(v8 + 16497) &= ~1u;
      v18 = ContainingPageTable;
      goto LABEL_36;
    }
    if ( *(__int64 *)(v15 + 40) < 0 )
    {
      v18 = MiGetContainingPageTable(v12);
      MiDecommitSharedPageTail(v23, v12, v9);
      goto LABEL_36;
    }
    v18 = *(_QWORD *)(v15 + 40) & 0xFFFFFFFFFFLL;
    v27 = v18;
    if ( (*(_DWORD *)(a1 + 156) & 0x20) == 0 || v14 || ((v9 >> 12) & 0xF) != 0 || *(_DWORD *)(a1 + 40) )
      goto LABEL_34;
    v19 = v7 + 16;
    if ( v7 + 16 > *(_DWORD *)(v1 + 16488)
      || !(unsigned int)MiDecommitPagesCoalesce(*(_QWORD *)(a1 + 8), v1, v7)
      || !(unsigned int)MiDeleteClusterPage(*(_QWORD *)(a1 + 8), v12, v10) )
    {
      v18 = v27;
LABEL_34:
      MiDecommitPrivatePageTail(a1, v12, v9);
LABEL_36:
      if ( v18 != v5 )
      {
        if ( v4 )
        {
          v24 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v24 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v24);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v4 + 24) < 0 );
          }
          if ( (*(_BYTE *)(v4 + 34) & 7) != 6 )
            MiBadShareCount(v4);
          v25 = (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL) - v31;
          *(_QWORD *)(v4 + 24) = v25 ^ (v25 ^ *(_QWORD *)(v4 + 24)) & 0xC000000000000000uLL;
          if ( !v25 )
            MiPfnShareCountIsZero(v4, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v31 = 0;
        }
        v4 = 48 * v18 - 0x220000000000LL;
        v5 = v18;
      }
      v22 = v32;
      v21 = ++v31;
      goto LABEL_53;
    }
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 32) - 376LL), 0xFFFFFFFFFFFFFFF0uLL);
    v20 = v32;
    if ( v32 < v19 )
      v20 = v32 + 16;
    v21 = v31;
    v22 = v20 - 1;
LABEL_53:
    v1 = v28;
    v7 = v22 + 1;
    v32 = v7;
    if ( v7 >= *(_DWORD *)(v28 + 16488) )
      break;
    v6 = v29;
    LOBYTE(v2) = v33;
  }
  if ( v21 )
  {
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v3 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v3);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v4 + 34) & 7) != 6 )
      MiBadShareCount(v4);
    v26 = (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL) - v31;
    *(_QWORD *)(v4 + 24) = v26 ^ (v26 ^ *(_QWORD *)(v4 + 24)) & 0xC000000000000000uLL;
    if ( !v26 )
      MiPfnShareCountIsZero(v4, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
}
