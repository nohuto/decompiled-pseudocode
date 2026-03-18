/*
 * XREFs of MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140247E00
 * Callers:
 *     MiWsleFlush @ 0x1402479D4 (MiWsleFlush.c)
 *     MiUnlockWsle @ 0x1402CC3B4 (MiUnlockWsle.c)
 *     MiDecommitAddToList @ 0x140382190 (MiDecommitAddToList.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiCombineWithExisting @ 0x14038A898 (MiCombineWithExisting.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiPteHasShadow @ 0x14024B550 (MiPteHasShadow.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 */

__int64 __fastcall MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(
        volatile signed __int64 *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  char v6; // si
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rcx
  int v13; // eax
  ULONG_PTR v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = *BugCheckParameter2;
  v6 = a3;
  v8 = a3 & 2;
  if ( (a3 & 2) != 0
    || (unsigned __int64)BugCheckParameter2 < 0xFFFFF6FB7DBED000uLL
    || (unsigned __int64)BugCheckParameter2 > 0xFFFFF6FB7DBED7F8uLL
    || !MiPteHasShadow(BugCheckParameter2, v8, a3, a4) )
  {
    v9 = ((unsigned __int64)MiFlags >> 26) & 3;
    if ( v9 <= 1 )
    {
      if ( v9 )
      {
        if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6FB40000000uLL
          && (unsigned __int64)BugCheckParameter2 <= 0xFFFFF6FB7FFFFFFFuLL
          && (v4 & 0x80u) == 0LL )
        {
          v4 |= 0x20uLL;
        }
      }
      else
      {
        v4 |= 0x20uLL;
      }
    }
    else if ( (MiFlags & 0x2000000) != 0 )
    {
      _mm_lfence();
    }
  }
  else
  {
    v4 |= 0x20uLL;
  }
  if ( (v4 & 0x20) != 0 )
  {
    if ( (v6 & 4) == 0 )
    {
      if ( (_DWORD)v8 )
      {
        *BugCheckParameter2 = BugCheckParameter3;
      }
      else
      {
        v14 = BugCheckParameter3;
        v10 = 0;
        if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2) )
        {
          v13 = MiSanitizeShadowPxe(v11, &v14);
          BugCheckParameter3 = v14;
          v10 = v13;
        }
        *BugCheckParameter2 = BugCheckParameter3;
        if ( v10 )
          MiWritePteShadow(BugCheckParameter2, BugCheckParameter3);
      }
    }
    return 1LL;
  }
  if ( (v6 & 4) != 0 )
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
    if ( v4 != _InterlockedCompareExchange64(BugCheckParameter2, BugCheckParameter3, v4) )
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
    v4 = _InterlockedExchange64(BugCheckParameter2, BugCheckParameter3);
    if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2) )
      MiWritePteShadow(BugCheckParameter2, BugCheckParameter3);
  }
  if ( (v4 & 0x20) != 0 )
    return 1LL;
  if ( (MiFlags & 0x1000000000LL) != 0 && (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, v4);
  return 0LL;
}
