/*
 * XREFs of MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402869A0
 * Callers:
 *     MiWsleFlush @ 0x140286410 (MiWsleFlush.c)
 *     MiDecommitAddToList @ 0x1402889A0 (MiDecommitAddToList.c)
 *     MiUnlockWsle @ 0x1402C7B94 (MiUnlockWsle.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiCombineWithExisting @ 0x1402F92E0 (MiCombineWithExisting.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402141A0 (MiPteHasShadow.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(
        volatile signed __int64 *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        char a3)
{
  __int64 v3; // rbx
  volatile signed __int64 *v6; // r9
  volatile signed __int64 *v9; // r8
  int v10; // edx
  unsigned __int64 v11; // rcx
  int v12; // ecx

  v3 = *BugCheckParameter2;
  v6 = (volatile signed __int64 *)0xFFFFF6FB7DBED000LL;
  v9 = (volatile signed __int64 *)0xFFFFF6FB7DBED7F8LL;
  v10 = a3 & 2;
  if ( v10
    || (unsigned __int64)BugCheckParameter2 < 0xFFFFF6FB7DBED000uLL
    || (unsigned __int64)BugCheckParameter2 > 0xFFFFF6FB7DBED7F8uLL
    || !MiPteHasShadow() )
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
      if ( v10 )
      {
        *BugCheckParameter2 = BugCheckParameter3;
      }
      else
      {
        v12 = 0;
        if ( BugCheckParameter2 >= v6 && BugCheckParameter2 <= v9 )
          v12 = MiSanitizeShadowPxe();
        *BugCheckParameter2 = BugCheckParameter3;
        if ( v12 )
          MiWritePteShadow();
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
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, BugCheckParameter3, 128);
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
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, BugCheckParameter3, 128);
    }
    v3 = _InterlockedExchange64(BugCheckParameter2, BugCheckParameter3);
    if ( MiPteInShadowRange((unsigned __int64)BugCheckParameter2) )
      MiWritePteShadow();
  }
  if ( (v3 & 0x20) != 0 )
    return 1LL;
  if ( (MiFlags & 0x1000000000LL) != 0 && (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, v3, a3);
  return 0LL;
}
