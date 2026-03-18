/*
 * XREFs of MiMapFrame @ 0x140223140
 * Callers:
 *     MiMakePageAvoidRead @ 0x140222A90 (MiMakePageAvoidRead.c)
 *     MmCopyToCachedPage @ 0x140223414 (MmCopyToCachedPage.c)
 *     MiMapSystemCachePage @ 0x1404C945C (MiMapSystemCachePage.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x14020F170 (MiUserPdeOrAbove.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 */

__int64 __fastcall MiMapFrame(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rbx
  signed __int64 v5; // rsi
  __int64 v6; // rax
  ULONG_PTR v7; // rbx
  int v9; // ecx

  if ( a2 > qword_140E2D9A0 )
  {
    v3 = 4LL;
  }
  else if ( (*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
  {
    v9 = (unsigned __int8)BYTE2(*(_DWORD *)(48 * a2 - 0x21FFFFFFFFE0LL)) >> 6;
    if ( !v9 || v9 == 3 )
    {
      v3 = 12LL;
    }
    else
    {
      v3 = 4LL;
      if ( v9 == 2 )
        v3 = 28LL;
    }
  }
  else
  {
    v3 = 4LL;
  }
  v4 = ((a2 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v3] & 0xFFF0000000000E7FuLL | 0x21;
  if ( BugCheckParameter2 < 0xFFFFF68000000000uLL || BugCheckParameter2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v6 = v4;
    v5 = BugCheckParameter2 << 25;
  }
  else
  {
    if ( BugCheckParameter2 >= 0xFFFFF6FB40000000uLL && BugCheckParameter2 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( BugCheckParameter2 == 0xFFFFF6FB7DBEDF68uLL )
        v4 |= 0x8000000000000000uLL;
      else
        v4 &= ~0x8000000000000000uLL;
      if ( (unsigned int)MiUserPdeOrAbove(BugCheckParameter2) )
        v4 |= 4uLL;
    }
    v5 = BugCheckParameter2 << 25;
    v6 = v4 | 4;
    if ( (unsigned __int64)((__int64)(BugCheckParameter2 << 25) >> 16) > 0x7FFFFFFEFFFFLL )
      v6 = v4;
  }
  v7 = (((unsigned __int64)(unsigned __int8)word_140E2EB44 << 8) ^ ((v6 | 0x42) ^ ((unsigned __int64)(unsigned __int8)word_140E2EB44 << 8)) & 0xFFFFFFFFFFFFFEFFuLL) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( _bittest64(&MiFlags, 0x24u) && (v6 & 0x20) == 0 && BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, v7);
  *(_QWORD *)BugCheckParameter2 = v7;
  return v5 >> 16;
}
