/*
 * XREFs of MiExtendDynamicBitMap @ 0x14026ECB4
 * Callers:
 *     MiMarkSystemVaAllocated @ 0x14026B454 (MiMarkSystemVaAllocated.c)
 *     MiObtainDynamicVa @ 0x14026CBCC (MiObtainDynamicVa.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x14026C5E4 (MiSplitBitmapPages.c)
 *     RtlClearBitsEx @ 0x1402920E0 (RtlClearBitsEx.c)
 *     MiSystemVaPreserveGuardPage @ 0x14067AD3C (MiSystemVaPreserveGuardPage.c)
 */

__int64 __fastcall MiExtendDynamicBitMap(__int64 a1, unsigned __int64 *a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v8; // rbp
  __int64 v9; // r12
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r14

  v4 = *a2;
  if ( a2 != (unsigned __int64 *)a1 && v4 != *(_QWORD *)(a1 + 40) )
    return 1LL;
  v8 = *(_QWORD *)(a1 + 16);
  if ( ((a4 - 6) & 0xFFFFFFFD) != 0 )
  {
    if ( ((a4 - 10) & 0xFFFFFFFD) == 0 )
      v8 -= *(_QWORD *)a1;
  }
  else
  {
    v8 -= *(_QWORD *)(a1 + 40);
  }
  if ( v4 < v8 )
  {
    v9 = 0x8000LL;
    if ( a3 )
      v9 = a3;
    if ( (unsigned int)MiSplitBitmapPages(8LL) )
    {
      v10 = v8 - v4;
      if ( v9 + v4 <= v8 )
        v10 = v9;
      if ( ((a4 - 10) & 0xFFFFFFFD) != 0 )
      {
        v11 = *a2;
        *a2 += v10;
      }
      else
      {
        *a2 += v10;
        v11 = 0LL;
        a2[1] += -8LL * (v10 >> 6);
        if ( !*(_QWORD *)(a1 + 40) )
          *(_QWORD *)(a1 + 48) = (*(_QWORD *)(a1 + 8) >> 21) & 0x7FFFLL;
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 40), v10);
      }
      RtlClearBitsEx(a2, v11, v10);
      if ( *a2 == v8 )
      {
        if ( (unsigned int)MiSystemVaPreserveGuardPage(a1, a4) )
          _bittestandset64((signed __int64 *)a2[1], v10 + v11 - 1);
      }
      return 1LL;
    }
  }
  return 0LL;
}
