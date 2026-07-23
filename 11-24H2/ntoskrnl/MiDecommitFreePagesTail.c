/*
 * XREFs of MiDecommitFreePagesTail @ 0x1404EF800
 * Callers:
 *     MiDecommitPagesTail @ 0x14023D754 (MiDecommitPagesTail.c)
 * Callees:
 *     MiDecommitSharedPageTail @ 0x140206290 (MiDecommitSharedPageTail.c)
 *     MiBadShareCount @ 0x140206F78 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x14024D700 (MiPfnShareCountIsZero.c)
 *     MiShowBadMapper @ 0x140275730 (MiShowBadMapper.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiDeleteClusterPage @ 0x14034E8B0 (MiDeleteClusterPage.c)
 *     MiDereferenceIoPages @ 0x14038E760 (MiDereferenceIoPages.c)
 *     MiDecommitPagesCoalesce @ 0x1404180A0 (MiDecommitPagesCoalesce.c)
 *     MiDoubleUnlockMdlPage @ 0x14044022C (MiDoubleUnlockMdlPage.c)
 *     MiIsPfnLocked @ 0x140443768 (MiIsPfnLocked.c)
 *     MiDecommitPrivatePageTail @ 0x1404EFCE0 (MiDecommitPrivatePageTail.c)
 */

__int64 __fastcall MiDecommitFreePagesTail(__int64 a1)
{
  __int64 v1; // r11
  int v2; // esi
  unsigned int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 result; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // r12
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r14
  int v12; // edx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rcx
  int v15; // r8d
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  _QWORD *v20; // r9
  __int64 ContainingPageTable; // rsi
  unsigned int v22; // esi
  unsigned int v23; // r9d
  __int64 v24; // r8
  unsigned int v25; // r9d
  __int64 v26; // r10
  unsigned int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // [rsp+20h] [rbp-68h]
  __int64 v31; // [rsp+28h] [rbp-60h]
  unsigned __int64 v32; // [rsp+30h] [rbp-58h]
  unsigned int v34; // [rsp+98h] [rbp+10h]
  unsigned int v35; // [rsp+A0h] [rbp+18h]
  char v36; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 160);
  v3 = 0;
  v34 = 0;
  v4 = 0LL;
  v36 = v2;
  v5 = -1LL;
  v31 = v1;
  result = 0xFFFFF68000000000uLL;
  v35 = 0;
  v7 = (((*(_QWORD *)(v1 + 16480) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  LODWORD(v8) = 0;
  v32 = v7;
  if ( !*(_DWORD *)(v1 + 16488) )
    return result;
  while ( 1 )
  {
    v9 = v1 + 8LL * (unsigned int)v8;
    v10 = *(_QWORD *)(v9 + 12384);
    v11 = (v10 >> 12) & 0xFFFFFFFFFFLL;
    v12 = 0;
    v13 = v7 + 8LL * *(unsigned __int16 *)(v9 + 16498);
    v14 = (__int64)(v13 << 25) >> 16;
    if ( v14 < 0xFFFFF68000000000uLL || v14 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v15 = 0;
      if ( (v2 & 0x60) != 0
        || (v2 & 8) != 0 && (v11 > qword_140E2DD20 || ((*(_QWORD *)(48 * v11 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0) )
      {
        v12 = 1;
      }
    }
    else
    {
      v15 = 1;
    }
    if ( v11 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v11 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      v16 = 48 * v11 - 0x220000000000LL;
    else
      v16 = 0LL;
    if ( v12 )
    {
      if ( v16 )
      {
        if ( !MiIsPfnLocked(v16) )
          MiShowBadMapper(v11, 0LL, 2);
        if ( (v36 & 0x40) != 0 )
          MiDoubleUnlockMdlPage(v16, 1LL, v17, v18);
      }
      else
      {
        MiDereferenceIoPages(1, (*(_QWORD *)(v9 + 12384) >> 12) & 0xFFFFFFFFFFLL, 1uLL);
      }
      result = MiGetContainingPageTable(v13);
      *(_BYTE *)(v9 + 16497) &= ~1u;
      ContainingPageTable = result;
      goto LABEL_36;
    }
    if ( *(__int64 *)(v16 + 40) < 0 )
    {
      ContainingPageTable = MiGetContainingPageTable(v13);
      result = MiDecommitSharedPageTail(v26, v13, v10);
      goto LABEL_36;
    }
    ContainingPageTable = *(_QWORD *)(v16 + 40) & 0xFFFFFFFFFFLL;
    v30 = ContainingPageTable;
    if ( (*(_DWORD *)(a1 + 156) & 0x20) == 0 || v15 || ((v10 >> 12) & 0xF) != 0 || *(_DWORD *)(a1 + 40) )
      goto LABEL_34;
    v22 = v8 + 16;
    if ( (unsigned int)(v8 + 16) > *(_DWORD *)(v1 + 16488)
      || !(unsigned int)MiDecommitPagesCoalesce(*(_QWORD *)(a1 + 8), v1, v8)
      || !(unsigned int)MiDeleteClusterPage(*(_QWORD *)(a1 + 8), v13, v11) )
    {
      ContainingPageTable = v30;
LABEL_34:
      result = MiDecommitPrivatePageTail(a1, v13, v10);
LABEL_36:
      if ( ContainingPageTable != v5 )
      {
        if ( v4 )
        {
          v27 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v27 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v27);
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
          v28 = (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL) - v34;
          *(_QWORD *)(v4 + 24) = v28 ^ (v28 ^ *(_QWORD *)(v4 + 24)) & 0xC000000000000000uLL;
          if ( !v28 )
            MiPfnShareCountIsZero(v4, 0LL, v19, v20);
          _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v34 = 0;
        }
        result = 0xFFFFDE0000000000uLL;
        v4 = 48 * ContainingPageTable - 0x220000000000LL;
        v5 = ContainingPageTable;
      }
      v25 = v35;
      v24 = ++v34;
      goto LABEL_53;
    }
    result = *(_QWORD *)(a1 + 32);
    _InterlockedAdd64((volatile signed __int64 *)(result - 376), 0xFFFFFFFFFFFFFFF0uLL);
    v23 = v35;
    if ( v35 < v22 )
      v23 = v35 + 16;
    v24 = v34;
    v25 = v23 - 1;
LABEL_53:
    v1 = v31;
    v8 = v25 + 1;
    v35 = v8;
    if ( (unsigned int)v8 >= *(_DWORD *)(v31 + 16488) )
      break;
    v7 = v32;
    LOBYTE(v2) = v36;
  }
  if ( (_DWORD)v24 )
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
    v29 = (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL) - v34;
    *(_QWORD *)(v4 + 24) = v29 ^ (v29 ^ *(_QWORD *)(v4 + 24)) & 0xC000000000000000uLL;
    if ( !v29 )
      MiPfnShareCountIsZero(v4, 0LL, v24, (_QWORD *)v8);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
