/*
 * XREFs of MiDeleteClusterPage @ 0x1402ED270
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1404F1D60 (MiDecommitFreePagesTail.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiBadShareCount @ 0x14023EE28 (MiBadShareCount.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1402ED6D0 (MiConvertLockedSmallPageToLarge.c)
 *     MiClearPfnImageVerified @ 0x14036C0C0 (MiClearPfnImageVerified.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MiDeleteClusterPage(__int64 a1, unsigned __int64 a2, ULONG_PTR a3)
{
  ULONG_PTR v3; // rdi
  __int64 v5; // rsi
  ULONG_PTR v6; // r15
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned int v10; // r12d
  unsigned __int64 v11; // rcx
  unsigned int v12; // r14d
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rsi
  unsigned int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // r14
  int v19; // ecx
  __int64 v20; // rbx
  __int64 i; // rcx
  int v23; // [rsp+20h] [rbp-78h]
  int v24; // [rsp+20h] [rbp-78h]
  int v25; // [rsp+20h] [rbp-78h]
  int v26; // [rsp+20h] [rbp-78h]
  unsigned __int64 v27; // [rsp+28h] [rbp-70h]
  ULONG_PTR v28; // [rsp+30h] [rbp-68h]
  __int64 ContainingPageTable; // [rsp+38h] [rbp-60h]
  __int128 v30; // [rsp+40h] [rbp-58h]

  v3 = a3;
  ContainingPageTable = MiGetContainingPageTable(a2);
  v5 = 48 * a3 - 0x220000000000LL;
  v6 = a3 + 16;
  v28 = a3 + 16;
  v7 = v5;
  MiPageToNode(a3);
  v8 = v5 + 24;
  v30 = 0LL;
  v9 = -1LL;
  v10 = 0;
  while ( v3 < v6 )
  {
    if ( v3 == a3 )
    {
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0x3FuLL) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v12);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)v8 < 0 );
      }
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0x3FuLL) )
    {
      goto LABEL_16;
    }
    v9 = v3;
    if ( (*(_BYTE *)(v8 + 10) & 7) != 6 )
      MiBadShareCount(v5);
    if ( (unsigned __int16)*(_DWORD *)(v8 + 8) != 1
      || (*(_DWORD *)(v8 + 8) & 0x40000000) != 0
      || (HIWORD(*(_DWORD *)(v8 + 8)) & 7) == 5
      && (*(_QWORD *)(v8 - 16) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
    {
      goto LABEL_16;
    }
    ++v3;
    v5 += 48LL;
    v11 = (unsigned __int64)(unsigned __int8)BYTE2(*(_DWORD *)(v8 + 8)) >> 6;
    ++*((_DWORD *)&v30 + v11);
    v8 += 48LL;
  }
  if ( v3 != v6 )
  {
LABEL_16:
    if ( v9 != -1 )
    {
      for ( i = 48 * v9 - 0x220000000000LL; i != v7; i -= 48LL )
        _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 0LL;
  }
  v14 = v5;
  v15 = v5 - 768;
  v16 = 0;
  v17 = 1;
  if ( (_DWORD)v30 )
  {
    v16 = v30;
    v17 = 0;
  }
  if ( v16 < DWORD1(v30) )
  {
    v16 = DWORD1(v30);
    v17 = 1;
  }
  if ( v16 < DWORD2(v30) )
  {
    v16 = DWORD2(v30);
    v17 = 2;
  }
  v18 = a1;
  if ( v16 < HIDWORD(v30) )
    v17 = 3;
  do
  {
    HIWORD(v23) = HIWORD(*(_DWORD *)(v15 + 32));
    LOWORD(v23) = 2;
    *(_DWORD *)(v15 + 32) = v23;
    if ( ((*(_QWORD *)(v15 + 40) >> 60) & 7) == 3 )
      MiClearPfnImageVerified(v15, 12LL);
    v27 = *(_QWORD *)(v15 + 16);
    if ( (v27 & 0x400) == 0 && ((v27 & 4) != 0 || (v27 & 2) != 0) && v27 )
      MiReleasePageFileInfo(v18, v27, 1LL);
    *(_QWORD *)(v15 + 16) = CLFS_LSN_NULL_EXT;
    if ( (unsigned __int8)BYTE2(*(_DWORD *)(v15 + 32)) >> 6 != v17 )
      MiChangePageAttribute(v15, v17);
    if ( (*(_BYTE *)(v15 + 35) & 0x10) != 0 )
    {
      v26 = *(_DWORD *)(v15 + 32);
      HIBYTE(v26) &= ~0x10u;
      *(_DWORD *)(v15 + 32) = v26;
    }
    v24 = *(_DWORD *)(v15 + 32);
    *(_QWORD *)(v15 + 40) &= ~0x8000000000000000uLL;
    HIWORD(v24) &= 0xD7C7u;
    v19 = 0;
    *(_DWORD *)(v15 + 32) = v24;
    if ( (*(_QWORD *)(v15 + 40) & 0x10000000000LL) != 0 )
      v19 = *(_DWORD *)(v15 + 36) & 0x18000000;
    *(_DWORD *)(v15 + 36) = v19;
    MiConvertLockedSmallPageToLarge(v15, v7, 2LL, 0LL);
    if ( v15 != v7 )
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v15 += 48LL;
  }
  while ( v15 < v14 );
  *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
  HIWORD(v25) = HIWORD(*(_DWORD *)(v7 + 32));
  LOWORD(v25) = 0;
  *(_DWORD *)(v7 + 32) = v25;
  MiInsertPageInFreeOrZeroedList(v28 - 16, 2LL);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v20 = 48 * ContainingPageTable - 0x220000000000LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v10 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v10);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v20 + 24) < 0 );
  }
  *(_QWORD *)(v20 + 24) = (*(_QWORD *)(v20 + 24) - 16LL) ^ (*(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) - 16LL)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 1LL;
}
