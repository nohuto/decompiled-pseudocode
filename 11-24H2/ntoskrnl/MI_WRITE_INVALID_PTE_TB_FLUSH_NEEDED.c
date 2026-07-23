/*
 * XREFs of MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140201590
 * Callers:
 *     MiWsleFlush @ 0x140201004 (MiWsleFlush.c)
 *     MiCombineWithExisting @ 0x140294840 (MiCombineWithExisting.c)
 *     MiDecommitAddToList @ 0x1402985A0 (MiDecommitAddToList.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiUnlockWsle @ 0x1403DB664 (MiUnlockWsle.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 */

__int64 __fastcall MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(
        volatile signed __int64 *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        char a3)
{
  __int64 v3; // rbx
  volatile signed __int64 *v6; // r9
  volatile signed __int64 *v9; // r8
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  int v12; // ecx
  int v14; // eax
  ULONG_PTR v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = *BugCheckParameter2;
  v6 = (volatile signed __int64 *)0xFFFFF6FB7DBED000LL;
  v9 = (volatile signed __int64 *)0xFFFFF6FB7DBED7F8LL;
  v10 = a3 & 2;
  if ( (_DWORD)v10
    || (unsigned __int64)BugCheckParameter2 < 0xFFFFF6FB7DBED000uLL
    || (unsigned __int64)BugCheckParameter2 > 0xFFFFF6FB7DBED7F8uLL
    || !MiPteHasShadow(BugCheckParameter2, v10, 0xFFFFF6FB7DBED7F8uLL, 0xFFFFF6FB7DBED000uLL) )
  {
    v11 = ((unsigned __int64)MiFlags >> 26) & 3;
    if ( v11 <= 1 )
    {
      if ( v11 )
      {
        if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6FB40000000uLL
          && (unsigned __int64)BugCheckParameter2 <= 0xFFFFF6FB7FFFFFFFuLL
          && (v3 & 0x80u) == 0LL )
        {
          v3 |= 0x20uLL;
        }
      }
      else
      {
        v3 |= 0x20uLL;
      }
    }
    else if ( (MiFlags & 0x2000000) != 0 )
    {
      _mm_lfence();
    }
  }
  else
  {
    v3 |= 0x20uLL;
  }
  if ( (v3 & 0x20) != 0 )
  {
    if ( (a3 & 4) == 0 )
    {
      if ( (_DWORD)v10 )
      {
        *BugCheckParameter2 = BugCheckParameter3;
      }
      else
      {
        v15 = BugCheckParameter3;
        v12 = 0;
        if ( BugCheckParameter2 >= v6 && BugCheckParameter2 <= v9 )
        {
          v14 = MiSanitizeShadowPxe(0LL, &v15);
          BugCheckParameter3 = v15;
          v12 = v14;
        }
        *BugCheckParameter2 = BugCheckParameter3;
        if ( v12 )
          MiWritePteShadow(BugCheckParameter2, BugCheckParameter3);
      }
    }
    return 1LL;
  }
  if ( (a3 & 4) != 0 )
  {
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    if ( (MiFlags & 0x1000000000LL) != 0
      && (BugCheckParameter3 & 1) != 0
      && (BugCheckParameter3 & 0x20) == 0
      && (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
    {
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, BugCheckParameter3);
    }
    if ( v3 != _InterlockedCompareExchange64(BugCheckParameter2, BugCheckParameter3, v3) )
      return 1LL;
  }
  else
  {
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    if ( (MiFlags & 0x1000000000LL) != 0
      && (BugCheckParameter3 & 1) != 0
      && (BugCheckParameter3 & 0x20) == 0
      && (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
    {
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, BugCheckParameter3);
    }
    v3 = _InterlockedExchange64(BugCheckParameter2, BugCheckParameter3);
    if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2) )
      MiWritePteShadow(BugCheckParameter2, BugCheckParameter3);
  }
  if ( (v3 & 0x20) != 0 )
    return 1LL;
  if ( (MiFlags & 0x1000000000LL) != 0 && (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, v3);
  return 0LL;
}
