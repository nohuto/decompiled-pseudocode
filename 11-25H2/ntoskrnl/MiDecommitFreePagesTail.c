/*
 * XREFs of MiDecommitFreePagesTail @ 0x1404EDBB0
 * Callers:
 *     MiDecommitPagesTail @ 0x1402B2194 (MiDecommitPagesTail.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiDeleteClusterPage @ 0x1402C48B0 (MiDeleteClusterPage.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiBadShareCount @ 0x140340DD8 (MiBadShareCount.c)
 *     MiDecommitSharedPageTail @ 0x140340E30 (MiDecommitSharedPageTail.c)
 *     MiPfnShareCountIsZero @ 0x140342440 (MiPfnShareCountIsZero.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiDereferenceIoPages @ 0x140391A60 (MiDereferenceIoPages.c)
 *     MiShowBadMapper @ 0x1403BAD60 (MiShowBadMapper.c)
 *     MiDoubleUnlockMdlPage @ 0x14044A2E8 (MiDoubleUnlockMdlPage.c)
 *     MiIsPfnLocked @ 0x14044CDB4 (MiIsPfnLocked.c)
 *     MiDecommitPrivatePageTail @ 0x1404EE270 (MiDecommitPrivatePageTail.c)
 */

void __fastcall MiDecommitFreePagesTail(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // r14d
  int v3; // r13d
  __int64 v4; // r12
  __int64 v5; // rsi
  unsigned __int64 v6; // r8
  unsigned int v7; // r10d
  __int64 v8; // rbp
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  _QWORD *v11; // r9
  int v12; // edx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rcx
  int v15; // r8d
  __int64 v16; // rbx
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  __int64 ContainingPageTable; // rax
  __int64 v20; // r13
  unsigned int v21; // ebp
  __int64 v22; // r15
  __int64 v23; // r13
  unsigned int v24; // r12d
  int v25; // ebx
  ULONG_PTR v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rbp
  int v29; // eax
  unsigned __int64 v30; // r14
  __int64 v31; // r15
  unsigned __int64 v32; // rbx
  unsigned int v33; // r10d
  int v34; // r8d
  unsigned int v35; // r10d
  __int64 v36; // r11
  int v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // rdx
  unsigned __int64 v40; // [rsp+20h] [rbp-98h]
  __int64 v41; // [rsp+28h] [rbp-90h]
  __int64 v42; // [rsp+30h] [rbp-88h]
  _QWORD *v43; // [rsp+40h] [rbp-78h]
  __int64 v44; // [rsp+48h] [rbp-70h]
  __int64 v45; // [rsp+50h] [rbp-68h]
  unsigned __int64 v46; // [rsp+60h] [rbp-58h]
  unsigned int v48; // [rsp+C8h] [rbp+10h]
  unsigned int v49; // [rsp+D0h] [rbp+18h]
  char v50; // [rsp+D8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 160);
  v4 = -1LL;
  v48 = 0;
  v41 = -1LL;
  v5 = 0LL;
  v50 = v3;
  v44 = v1;
  v49 = 0;
  v6 = (((*(_QWORD *)(v1 + 16480) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  v7 = 0;
  v46 = v6;
  if ( !*(_DWORD *)(v1 + 16488) )
    return;
  while ( 1 )
  {
    v8 = v1 + 8LL * v7;
    v9 = v7 + 1548LL;
    v10 = *(_QWORD *)(v1 + 8 * v9);
    v11 = (_QWORD *)(v1 + 8 * v9);
    v43 = v11;
    v12 = 0;
    v13 = (v10 >> 12) & 0xFFFFFFFFFFLL;
    v40 = v6 + 8LL * *(unsigned __int16 *)(v8 + 16498);
    v14 = (__int64)(v40 << 25) >> 16;
    if ( v14 < 0xFFFFF68000000000uLL || v14 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v15 = 0;
      if ( (v3 & 0x60) != 0
        || (v3 & 8) != 0 && (v13 > qword_140E2D9A0 || ((*(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0) )
      {
        v12 = 1;
      }
    }
    else
    {
      v15 = 1;
    }
    if ( v13 <= qword_140E2D9A0 && ((*(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      v16 = 48 * v13 - 0x220000000000LL;
    else
      v16 = 0LL;
    if ( v12 )
    {
      if ( v16 )
      {
        if ( !MiIsPfnLocked(v16) )
          MiShowBadMapper((v10 >> 12) & 0xFFFFFFFFFFLL, 0LL, 2);
        if ( (v3 & 0x40) != 0 )
          MiDoubleUnlockMdlPage(v16, 1LL, v17, v18);
      }
      else
      {
        MiDereferenceIoPages(1, (v10 >> 12) & 0xFFFFFFFFFFLL, 1uLL);
      }
      ContainingPageTable = MiGetContainingPageTable(v40);
      *(_BYTE *)(v8 + 16497) &= ~1u;
      v20 = ContainingPageTable;
      goto LABEL_56;
    }
    if ( *(__int64 *)(v16 + 40) < 0 )
    {
      v20 = MiGetContainingPageTable(v40);
      MiDecommitSharedPageTail(v36, v40, v10);
      goto LABEL_56;
    }
    v20 = *(_QWORD *)(v16 + 40) & 0xFFFFFFFFFFLL;
    v42 = v20;
    if ( (*(_DWORD *)(a1 + 156) & 0x20) == 0
      || v15
      || ((v10 >> 12) & 0xF) != 0
      || *(_DWORD *)(a1 + 40)
      || (v21 = v7 + 16, v7 + 16 > *(_DWORD *)(v44 + 16488)) )
    {
      v32 = v40;
      v31 = a1;
LABEL_53:
      MiDecommitPrivatePageTail(v31, v32, v10);
      v2 = 0;
LABEL_56:
      if ( v20 != v4 )
      {
        if ( v5 )
        {
          v37 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v37 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait();
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v5 + 24) < 0 );
          }
          if ( (*(_BYTE *)(v5 + 34) & 7) != 6 )
            MiBadShareCount(v5);
          v38 = (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) - v48;
          *(_QWORD *)(v5 + 24) = v38 ^ (v38 ^ *(_QWORD *)(v5 + 24)) & 0xC000000000000000uLL;
          if ( !v38 )
            MiPfnShareCountIsZero(v5, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v48 = 0;
        }
        v5 = 48 * v20 - 0x220000000000LL;
        v41 = v20;
      }
      v35 = v49;
      v34 = ++v48;
      goto LABEL_73;
    }
    v22 = -1LL;
    v45 = *(_QWORD *)(a1 + 8);
    v23 = -1LL;
    v24 = v7;
    v25 = -1;
    if ( v7 < v21 )
    {
      while ( 1 )
      {
        v26 = (*v11 >> 12) & 0xFFFFFFFFFFLL;
        if ( v26 > qword_140E2D9A0 )
          break;
        v27 = 48 * v26;
        if ( ((*(_QWORD *)(48 * v26 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 || v22 != -1 && v26 != v22 )
          break;
        v22 = v26 + 1;
        v28 = v27 - 0x220000000000LL;
        if ( (unsigned __int16)*(_DWORD *)(v27 - 0x220000000000LL + 32) != 1 )
          break;
        v29 = MiPageToNode(v26);
        if ( v25 == -1 )
        {
          v25 = v29;
        }
        else if ( v29 != v25 )
        {
          break;
        }
        if ( v23 == -1 )
        {
          v23 = *(_QWORD *)(v28 + 40) & 0xFFFFFFFFFFLL;
        }
        else if ( (*(_QWORD *)(v28 + 40) & 0xFFFFFFFFFFLL) != v23 )
        {
          break;
        }
        if ( *(__int64 *)(v28 + 40) < 0 )
          break;
        if ( byte_140E3C8A6 )
        {
          v30 = (0xAAAAAAAAAAAAAAABuLL * (v27 >> 4)) >> 9;
          if ( *(_BYTE *)(qword_140E3CF00 + 2 * v30) )
          {
            if ( *(_BYTE *)(qword_140E3CF00 + 2 * v30) != 10 )
              break;
          }
        }
        if ( *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v28 + 40) >> 43) & 0x3FFLL)) != v45 )
          break;
        ++v24;
        v11 = v43 + 1;
        v21 = v49 + 16;
        ++v43;
        if ( v24 >= v49 + 16 )
        {
          v2 = 0;
          goto LABEL_47;
        }
      }
      v32 = v40;
      v31 = a1;
LABEL_52:
      v20 = v42;
      v4 = v41;
      goto LABEL_53;
    }
LABEL_47:
    v31 = a1;
    v32 = v40;
    if ( !(unsigned int)MiDeleteClusterPage(*(_QWORD *)(a1 + 8), v40, (v10 >> 12) & 0xFFFFFFFFFFLL) )
      goto LABEL_52;
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 32) - 376LL), 0xFFFFFFFFFFFFFFF0uLL);
    v33 = v49;
    if ( v49 < v21 )
      v33 = v49 + 16;
    v34 = v48;
    v35 = v33 - 1;
LABEL_73:
    v1 = v44;
    v7 = v35 + 1;
    v49 = v7;
    if ( v7 >= *(_DWORD *)(v44 + 16488) )
      break;
    v4 = v41;
    v6 = v46;
    LOBYTE(v3) = v50;
  }
  if ( v34 )
  {
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v2 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v5 + 34) & 7) != 6 )
      MiBadShareCount(v5);
    v39 = (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) - v48;
    *(_QWORD *)(v5 + 24) = v39 ^ (v39 ^ *(_QWORD *)(v5 + 24)) & 0xC000000000000000uLL;
    if ( !v39 )
      MiPfnShareCountIsZero(v5, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
}
