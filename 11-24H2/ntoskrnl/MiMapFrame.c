/*
 * XREFs of MiMapFrame @ 0x14034D110
 * Callers:
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MmCopyToCachedPage @ 0x14034F0D4 (MmCopyToCachedPage.c)
 *     MiMapSystemCachePage @ 0x1404C2D08 (MiMapSystemCachePage.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiUserPdeOrAbove @ 0x1402127C8 (MiUserPdeOrAbove.c)
 *     MiIsAddressGlobal @ 0x14034E540 (MiIsAddressGlobal.c)
 */

__int64 __fastcall MiMapFrame(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  signed int v6; // edi
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  signed __int64 v9; // rbp
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  int IsAddressGlobal; // eax
  unsigned __int64 v13; // rdx
  bool v14; // al
  __int64 v15; // rdi
  ULONG_PTR v16; // rdi
  __int64 result; // rax
  int v18; // ecx

  v5 = 4;
  if ( a2 <= qword_140E2DD20 )
  {
    a3 = 6 * a2;
    if ( (*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
    {
      v18 = (unsigned __int8)BYTE2(*(_DWORD *)(48 * a2 - 0x21FFFFFFFFE0LL)) >> 6;
      if ( !v18 || v18 == 3 )
      {
        v5 = 12;
      }
      else if ( v18 == 2 )
      {
        v5 = 28;
      }
    }
  }
  v6 = v5 | 0xA0000000;
  v7 = (a2 & 0xFFFFFFFFFFLL) << 12;
  v8 = v7 | MmProtectToPteMask[v6 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
  if ( BugCheckParameter2 < 0xFFFFF68000000000uLL || BugCheckParameter2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v9 = BugCheckParameter2 << 25;
  }
  else
  {
    if ( BugCheckParameter2 >= 0xFFFFF6FB40000000uLL && BugCheckParameter2 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      v8 = BugCheckParameter2 == 0xFFFFF6FB7DBEDF68uLL
         ? v7 | MmProtectToPteMask[v6 & 0x1F] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL
         : v7 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v6 & 0x1F] & 0x7FF0000000000E7FLL | 0x21;
      if ( (unsigned int)MiUserPdeOrAbove(BugCheckParameter2) )
        v8 |= 4uLL;
    }
    v9 = BugCheckParameter2 << 25;
    v10 = v8 | 4;
    v11 = (__int64)(BugCheckParameter2 << 25) >> 16;
    if ( v11 > 0x7FFFFFFEFFFFLL )
      v10 = v8;
    IsAddressGlobal = MiIsAddressGlobal(v11, v10, a3, a4);
    v8 = v13 | 0x100;
    if ( !IsAddressGlobal )
      v8 = v13;
  }
  v14 = v6 < 0;
  v15 = v8 | 0x42;
  if ( !v14 )
    v15 = v8;
  v16 = (((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ v15) & 0xFFFFFFFFFFFFFEFFuLL) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( _bittest64(&MiFlags, 0x24u) && (v16 & 0x20) == 0 && BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, v16, 128LL);
  result = v9 >> 16;
  *(_QWORD *)BugCheckParameter2 = v16;
  return result;
}
