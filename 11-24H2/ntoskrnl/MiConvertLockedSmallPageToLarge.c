/*
 * XREFs of MiConvertLockedSmallPageToLarge @ 0x14034ED10
 * Callers:
 *     MiDeleteClusterPage @ 0x14034E8B0 (MiDeleteClusterPage.c)
 *     MiConvertSmallPageRangeToLarge @ 0x14034F90C (MiConvertSmallPageRangeToLarge.c)
 * Callees:
 *     MiCanPfnOriginalPteBeLost @ 0x1402EE318 (MiCanPfnOriginalPteBeLost.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiConvertLockedSmallPageToLarge(__int64 a1, __int64 a2, char a3, int a4)
{
  signed __int64 v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rdx
  signed __int64 v10; // rdx
  signed __int64 v11; // r8
  signed __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // r11d
  __int64 result; // rax
  signed __int64 v16; // rdx
  signed __int64 v17; // r8
  unsigned int v18; // eax
  __int64 v19; // rax
  signed __int64 v20; // rcx
  int v21; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v22; // [rsp+A8h] [rbp+20h]

  if ( a4 )
  {
    *(_QWORD *)(a1 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
    v16 = *(_QWORD *)(a1 + 24);
    v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v16 & 0xF80000FFFFFFFFFFuLL, v16);
    if ( v16 != v17 )
    {
      do
      {
        v20 = v17;
        v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v17 & 0xF80000FFFFFFFFFFuLL, v17);
      }
      while ( v20 != v17 );
    }
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
    v18 = *(_DWORD *)(a1 + 32);
    LOWORD(v18) = 2;
    v22 = v18;
    *(_DWORD *)(a1 + 32) = v18;
    if ( a1 != a2 )
    {
      v22 = *(_DWORD *)(a1 + 32);
      BYTE2(v22) = BYTE2(v22) & 0xF8 | 6;
      *(_DWORD *)(a1 + 32) = v22;
    }
  }
  if ( *(__int64 *)(a1 + 40) < 0 )
    *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  v22 = *(_DWORD *)(a1 + 32);
  HIBYTE(v22) &= 0xF8u;
  *(_DWORD *)(a1 + 32) = v22;
  v7 = *(_QWORD *)(a1 + 40);
  v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v7 & 0x8FFFFFFFFFFFFFFFuLL, v7);
  if ( v7 != v8 )
  {
    do
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v8 & 0x8FFFFFFFFFFFFFFFuLL, v8);
    }
    while ( v9 != v8 );
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v10 = *(_QWORD *)(a1 + 40);
  v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v10 & 0xFFFFFF0000000000uLL, v10);
  if ( v10 != v11 )
  {
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v11 & 0xFFFFFF0000000000uLL, v11);
    }
    while ( v12 != v11 );
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) &= ~0x4000000000000000uLL;
  *(_QWORD *)(a1 + 40) |= 0x10000000000uLL;
  v13 = *(_DWORD *)(a1 + 36);
  if ( a1 == a2 )
  {
    *(_DWORD *)(a1 + 36) = ((unsigned __int8)~a3 << 27) ^ (((unsigned __int8)~a3 << 27) ^ v13) & 0xE7FFFFFF;
    v19 = *(_QWORD *)(a2 + 40);
    if ( (*(_DWORD *)(a1 + 32) & 0x40000000) != 0 )
      *(_QWORD *)(a2 + 40) = v19 | 0x20000000000LL;
    else
      *(_QWORD *)(a2 + 40) = v19 & 0xFFFFFDFFFFFFFFFFuLL;
  }
  else
  {
    *(_DWORD *)(a1 + 36) = v13 & 0xE7FFFFFF;
    if ( (*(_DWORD *)(a1 + 32) & 0x40000000) != 0 )
    {
      v21 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v21);
        while ( *(__int64 *)(a2 + 24) < 0 );
      }
      *(_QWORD *)(a2 + 40) |= 0x20000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  v22 = *(_DWORD *)(a1 + 32);
  v14 = HIWORD(v22);
  if ( (v22 & 0x80000) != 0
    && (unsigned int)MiCanPfnOriginalPteBeLost(a1)
    && (((*(_QWORD *)(a1 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(a1 + 34) >> 4)) != 0 )
  {
    *(_QWORD *)(a1 + 16) &= ~4uLL;
  }
  BYTE2(v22) = v14 & 0xEF;
  result = v22;
  *(_DWORD *)(a1 + 32) = v22;
  return result;
}
