/*
 * XREFs of MiExtendDynamicBitMap @ 0x1403905A4
 * Callers:
 *     MiObtainDynamicVa @ 0x14038EB7C (MiObtainDynamicVa.c)
 *     MiMarkSystemVaAllocated @ 0x1404CF764 (MiMarkSystemVaAllocated.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1402A9FB0 (RtlClearBitsEx.c)
 *     MiSplitBitmapPages @ 0x14038E594 (MiSplitBitmapPages.c)
 *     MiSystemVaPreserveGuardPage @ 0x14066E2B0 (MiSystemVaPreserveGuardPage.c)
 */

__int64 __fastcall MiExtendDynamicBitMap(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v8; // rbp
  __int64 v9; // r12
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r14

  v4 = *(_QWORD *)a2;
  if ( a2 != a1 && v4 != *(_QWORD *)(a1 + 40) )
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
        v11 = *(_QWORD *)a2;
        *(_QWORD *)a2 += v10;
      }
      else
      {
        *(_QWORD *)a2 += v10;
        v11 = 0LL;
        *(_QWORD *)(a2 + 8) += -8LL * (v10 >> 6);
        if ( !*(_QWORD *)(a1 + 40) )
          *(_QWORD *)(a1 + 48) = (*(_QWORD *)(a1 + 8) >> 21) & 0x7FFFLL;
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 40), v10);
      }
      RtlClearBitsEx(a2, v11, v10);
      if ( *(_QWORD *)a2 == v8 )
      {
        if ( (unsigned int)MiSystemVaPreserveGuardPage(a1, a4) )
          _bittestandset64(*(signed __int64 **)(a2 + 8), v10 + v11 - 1);
      }
      return 1LL;
    }
  }
  return 0LL;
}
