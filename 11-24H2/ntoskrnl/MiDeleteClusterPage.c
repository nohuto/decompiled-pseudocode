/*
 * XREFs of MiDeleteClusterPage @ 0x14034E8B0
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1404EF800 (MiDecommitFreePagesTail.c)
 * Callees:
 *     MiBadShareCount @ 0x140206F78 (MiBadShareCount.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiClearPfnImageVerified @ 0x1402EAB40 (MiClearPfnImageVerified.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiConvertLockedSmallPageToLarge @ 0x14034ED10 (MiConvertLockedSmallPageToLarge.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiDeleteClusterPage(__int64 a1, unsigned __int64 a2, ULONG_PTR a3)
{
  ULONG_PTR v3; // rdi
  __int64 v5; // rsi
  ULONG_PTR v6; // r15
  __int64 v7; // r13
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned int v12; // r12d
  unsigned __int64 v13; // rcx
  unsigned int v14; // r14d
  ULONG_PTR v16; // rbp
  ULONG_PTR v17; // rsi
  unsigned int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // r14
  int v21; // ecx
  __int64 v22; // rbx
  __int64 i; // rcx
  int v25; // [rsp+20h] [rbp-78h]
  int v26; // [rsp+20h] [rbp-78h]
  int v27; // [rsp+20h] [rbp-78h]
  int v28; // [rsp+20h] [rbp-78h]
  unsigned __int64 v29; // [rsp+28h] [rbp-70h]
  ULONG_PTR v30; // [rsp+30h] [rbp-68h]
  __int64 ContainingPageTable; // [rsp+38h] [rbp-60h]
  __int128 v32; // [rsp+40h] [rbp-58h]

  v3 = a3;
  ContainingPageTable = MiGetContainingPageTable(a2);
  v5 = 48 * a3 - 0x220000000000LL;
  v6 = a3 + 16;
  v30 = a3 + 16;
  v7 = v5;
  MiPageToNode(a3);
  v10 = v5 + 24;
  v32 = 0LL;
  v11 = -1LL;
  v12 = 0;
  while ( v3 < v6 )
  {
    if ( v3 == a3 )
    {
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0x3FuLL) )
      {
        do
        {
          if ( (++v14 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v14);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)v10 < 0 );
      }
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0x3FuLL) )
    {
      goto LABEL_16;
    }
    v11 = v3;
    if ( (*(_BYTE *)(v10 + 10) & 7) != 6 )
      MiBadShareCount(v5);
    if ( (unsigned __int16)*(_DWORD *)(v10 + 8) != 1
      || (*(_DWORD *)(v10 + 8) & 0x40000000) != 0
      || (HIWORD(*(_DWORD *)(v10 + 8)) & 7) == 5
      && (*(_QWORD *)(v10 - 16) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
    {
      goto LABEL_16;
    }
    ++v3;
    v5 += 48LL;
    v13 = (unsigned __int64)(unsigned __int8)BYTE2(*(_DWORD *)(v10 + 8)) >> 6;
    ++*((_DWORD *)&v32 + v13);
    v10 += 48LL;
  }
  if ( v3 != v6 )
  {
LABEL_16:
    if ( v11 != -1 )
    {
      for ( i = 48 * v11 - 0x220000000000LL; i != v7; i -= 48LL )
        _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 0LL;
  }
  v16 = v5;
  v17 = v5 - 768;
  v18 = 0;
  v19 = 1;
  if ( (_DWORD)v32 )
  {
    v18 = v32;
    v19 = 0;
  }
  if ( v18 < DWORD1(v32) )
  {
    v18 = DWORD1(v32);
    v19 = 1;
  }
  if ( v18 < DWORD2(v32) )
  {
    v18 = DWORD2(v32);
    v19 = 2;
  }
  v20 = a1;
  if ( v18 < HIDWORD(v32) )
    v19 = 3;
  do
  {
    HIWORD(v25) = HIWORD(*(_DWORD *)(v17 + 32));
    LOWORD(v25) = 2;
    *(_DWORD *)(v17 + 32) = v25;
    if ( ((*(_QWORD *)(v17 + 40) >> 60) & 7) == 3 )
      MiClearPfnImageVerified(v17, 12LL, v8, v9);
    v29 = *(_QWORD *)(v17 + 16);
    if ( (v29 & 0x400) == 0 && ((v29 & 4) != 0 || (v29 & 2) != 0) && v29 )
      MiReleasePageFileInfo(v20, v29, 1LL, v9);
    *(_QWORD *)(v17 + 16) = CLFS_LSN_NULL_EXT;
    if ( (unsigned __int8)BYTE2(*(_DWORD *)(v17 + 32)) >> 6 != v19 )
      MiChangePageAttribute(v17, v19);
    if ( (*(_BYTE *)(v17 + 35) & 0x10) != 0 )
    {
      v28 = *(_DWORD *)(v17 + 32);
      HIBYTE(v28) &= ~0x10u;
      *(_DWORD *)(v17 + 32) = v28;
    }
    v26 = *(_DWORD *)(v17 + 32);
    *(_QWORD *)(v17 + 40) &= ~0x8000000000000000uLL;
    HIWORD(v26) &= 0xD7C7u;
    v21 = 0;
    *(_DWORD *)(v17 + 32) = v26;
    if ( (*(_QWORD *)(v17 + 40) & 0x10000000000LL) != 0 )
      v21 = *(_DWORD *)(v17 + 36) & 0x18000000;
    *(_DWORD *)(v17 + 36) = v21;
    MiConvertLockedSmallPageToLarge(v17, v7, 2LL, 0LL);
    if ( v17 != v7 )
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v17 += 48LL;
  }
  while ( v17 < v16 );
  *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
  HIWORD(v27) = HIWORD(*(_DWORD *)(v7 + 32));
  LOWORD(v27) = 0;
  *(_DWORD *)(v7 + 32) = v27;
  MiInsertPageInFreeOrZeroedList(v30 - 16, 2LL);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v22 = 48 * ContainingPageTable - 0x220000000000LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
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
    while ( *(__int64 *)(v22 + 24) < 0 );
  }
  *(_QWORD *)(v22 + 24) = (*(_QWORD *)(v22 + 24) - 16LL) ^ (*(_QWORD *)(v22 + 24) ^ (*(_QWORD *)(v22 + 24) - 16LL)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 1LL;
}
