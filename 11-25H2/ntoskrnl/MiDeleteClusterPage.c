/*
 * XREFs of MiDeleteClusterPage @ 0x1402C48B0
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1404EDBB0 (MiDecommitFreePagesTail.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiClearPfnReuseFields @ 0x1402C4CC0 (MiClearPfnReuseFields.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1402C4D20 (MiConvertLockedSmallPageToLarge.c)
 *     MiClearPfnImageVerified @ 0x1402CC5F0 (MiClearPfnImageVerified.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiBadShareCount @ 0x140340DD8 (MiBadShareCount.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MiDeleteClusterPage(__int64 a1, unsigned __int64 a2, ULONG_PTR a3)
{
  ULONG_PTR v3; // rsi
  __int64 v5; // rbx
  ULONG_PTR v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned int v10; // r13d
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned int v14; // r14d
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rbx
  unsigned int v17; // eax
  int v18; // edi
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 i; // rcx
  int v25; // [rsp+20h] [rbp-78h]
  int v26; // [rsp+20h] [rbp-78h]
  int v27; // [rsp+20h] [rbp-78h]
  unsigned __int64 v28; // [rsp+28h] [rbp-70h]
  volatile signed __int64 *v29; // [rsp+30h] [rbp-68h]
  __int64 ContainingPageTable; // [rsp+40h] [rbp-58h]
  __int128 v32; // [rsp+48h] [rbp-50h]

  v3 = a3;
  ContainingPageTable = MiGetContainingPageTable(a2);
  v5 = 48 * a3 - 0x220000000000LL;
  v6 = a3 + 16;
  v7 = v5;
  MiPageToNode(a3);
  v32 = 0LL;
  v8 = -1LL;
  v29 = (volatile signed __int64 *)(v5 + 24);
  v9 = v5 + 24;
  v10 = 0;
  while ( 1 )
  {
    v11 = 0x8000000000000000uLL;
    if ( v3 >= v6 )
      break;
    if ( v3 == a3 )
    {
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0x3FuLL) )
      {
        do
        {
          if ( (++v14 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11) )
          {
            HvlNotifyLongSpinWait(v14);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)v9 < 0 );
      }
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0x3FuLL) )
    {
      goto LABEL_12;
    }
    v8 = v3;
    if ( (*(_BYTE *)(v9 + 10) & 7) != 6 )
      MiBadShareCount(v5);
    if ( (unsigned __int16)*(_DWORD *)(v9 + 8) != 1
      || (*(_DWORD *)(v9 + 8) & 0x40000000) != 0
      || (HIWORD(*(_DWORD *)(v9 + 8)) & 7) == 5
      && (*(_QWORD *)(v9 - 16) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
    {
      goto LABEL_12;
    }
    ++v3;
    v5 += 48LL;
    v12 = (unsigned __int64)(unsigned __int8)BYTE2(*(_DWORD *)(v9 + 8)) >> 6;
    ++*((_DWORD *)&v32 + v12);
    v9 += 48LL;
  }
  if ( v3 != v6 )
  {
LABEL_12:
    if ( v8 != -1 )
    {
      for ( i = 48 * v8 - 0x220000000000LL; i != v7; i -= 48LL )
        _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 0LL;
  }
  v15 = v5;
  v16 = v5 - 768;
  v17 = 0;
  v18 = 1;
  if ( (_DWORD)v32 )
  {
    v17 = v32;
    v18 = 0;
  }
  if ( v17 < DWORD1(v32) )
  {
    v17 = DWORD1(v32);
    v18 = 1;
  }
  if ( v17 < DWORD2(v32) )
  {
    v17 = DWORD2(v32);
    v18 = 2;
  }
  v19 = a1;
  if ( v17 < HIDWORD(v32) )
    v18 = 3;
  do
  {
    HIWORD(v25) = HIWORD(*(_DWORD *)(v16 + 32));
    LOWORD(v25) = 2;
    *(_DWORD *)(v16 + 32) = v25;
    if ( ((*(_QWORD *)(v16 + 40) >> 60) & 7) == 3 )
      MiClearPfnImageVerified(v16, 12LL);
    v28 = *(_QWORD *)(v16 + 16);
    if ( (v28 & 0x400) == 0 && ((v28 & 4) != 0 || (v28 & 2) != 0) && v28 )
      MiReleasePageFileInfo(v19, v28, 1);
    *(_QWORD *)(v16 + 16) = CLFS_LSN_NULL_EXT;
    if ( (unsigned __int8)BYTE2(*(_DWORD *)(v16 + 32)) >> 6 != v18 )
      MiChangePageAttribute(v16, v18);
    if ( (*(_BYTE *)(v16 + 35) & 0x10) != 0 )
    {
      v27 = *(_DWORD *)(v16 + 32);
      HIBYTE(v27) &= ~0x10u;
      *(_DWORD *)(v16 + 32) = v27;
    }
    MiClearPfnReuseFields(v16);
    MiConvertLockedSmallPageToLarge(v20, v7, 2LL, 0LL);
    if ( v16 != v7 )
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v16 += 48LL;
  }
  while ( v16 < v15 );
  *(_QWORD *)(v7 + 24) = *v29 & 0xC000000000000000uLL;
  HIWORD(v26) = HIWORD(*(_DWORD *)(v7 + 32));
  LOWORD(v26) = 0;
  *(_DWORD *)(v7 + 32) = v26;
  MiInsertPageInFreeOrZeroedList(a3);
  _InterlockedAnd64(v29, 0x7FFFFFFFFFFFFFFFuLL);
  v22 = 48 * ContainingPageTable - 0x220000000000LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v10 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21) )
      {
        HvlNotifyLongSpinWait(v10);
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
