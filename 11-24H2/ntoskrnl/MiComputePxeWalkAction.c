/*
 * XREFs of MiComputePxeWalkAction @ 0x14023FE60
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     MiWalkLeap @ 0x140339C60 (MiWalkLeap.c)
 *     MiGetSystemCacheReverseMap @ 0x1403559C0 (MiGetSystemCacheReverseMap.c)
 *     MiIsPageAGapPage @ 0x14038F0FC (MiIsPageAGapPage.c)
 *     MiMakeSystemLeavesNonZero @ 0x1404D1540 (MiMakeSystemLeavesNonZero.c)
 */

__int64 __fastcall MiComputePxeWalkAction(int *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  int v5; // r14d
  __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  int *v8; // rsi
  __int64 result; // rax
  int v10; // r15d
  __int64 HasShadow; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 SystemCacheReverseMap; // rax

  v4 = *(_QWORD *)a2;
  v5 = a4;
  v6 = (int)a3;
  v7 = a2;
  v8 = a1;
  if ( (_DWORD)a3 == 3 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    a2 = *(_QWORD *)a2;
    if ( (v4 & 1) != 0 )
    {
      LOBYTE(a1) = (v4 & 0x42) != 0;
      if ( ((unsigned __int8)a1 & ((v4 & 0x20) != 0)) == 0 )
      {
        HasShadow = MiPteHasShadow(a1, a2, a3, a4);
        if ( HasShadow )
        {
          v12 = *(_QWORD *)(HasShadow + 1288);
          if ( v12 )
          {
            v13 = *(_QWORD *)(v12 + 8 * ((v7 >> 3) & 0x1FF));
            if ( (v13 & 0x20) != 0 )
              a2 |= 0x20uLL;
            v4 = a2 | 0x42;
            if ( (v13 & 0x42) == 0 )
              v4 = a2;
          }
        }
      }
    }
  }
  if ( (v4 & 1) == 0 )
    return (unsigned int)((*v8 & 1) != 0) + 1;
  v10 = *v8;
  if ( (*v8 & 0x8000) != 0
    && ((unsigned int)MiIsPageAGapPage((v4 >> 12) & 0xFFFFFFFFFFLL, (unsigned int)v6)
     || (v4 & 0x800) == 0 && (v4 & 0x42) == 0) )
  {
    return (unsigned int)((*v8 & 1) != 0) + 1;
  }
  if ( !(_DWORD)v6 )
    return 2LL;
  if ( (v4 & 0x80u) != 0LL )
  {
    if ( (v10 & 1) != 0 )
      return 2LL;
    result = MiWalkLeap(v8, v7, (unsigned int)v6);
    if ( (_DWORD)result == 2 )
      return 1LL;
  }
  else
  {
    if ( v7 == 0xFFFFF6FB7DBEDF68uLL )
      return 1LL;
    if ( (v10 & 0x200) != 0
      && qword_140E37480[0] != (PVOID)qword_140E37498
      && (a2 = (unsigned __int64)qword_140E37480, (PVOID)((v4 >> 12) & 0xFFFFFFFFFFLL) == qword_140E37480[v6]) )
    {
      return 1LL;
    }
    else
    {
      if ( (v10 & 1) == 0 )
      {
        if ( (*(_QWORD *)(48 * ((v4 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          return 2LL;
        if ( (_DWORD)v6 == 1 && (*(_DWORD *)(*((_QWORD *)v8 + 4) + 184LL) & 0xF) == 1 )
        {
          SystemCacheReverseMap = MiGetSystemCacheReverseMap((__int64)(v7 << 25) >> 16 << 25 >> 16, a2);
          if ( !SystemCacheReverseMap
            || ((*(_QWORD *)(SystemCacheReverseMap + 32) >> 6) & 0x3FFLL) != *(_WORD *)(*((_QWORD *)v8 + 4) + 174LL) )
          {
            return 2LL;
          }
        }
      }
      if ( v5 != 3
        || (_DWORD)v6 == 1
        && (*v8 & 0x10) != 0
        && (*v8 & 1) == 0
        && (((*(_QWORD *)(48 * ((*(_QWORD *)v7 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 45) & 0x3FF) == 0
         || (unsigned __int8)((*(_QWORD *)(48 * ((*(_QWORD *)v7 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 55) & 7) < (unsigned __int8)((unsigned __int8)HIBYTE(*((_WORD *)v8 + 2)) >> 4)) )
      {
        return 2LL;
      }
      if ( (*v8 & 0x8000) != 0 && (int)v6 > 1 && (_DWORD)v6 == (((unsigned int)v8[1] >> 6) & 7) )
        MiMakeSystemLeavesNonZero(v8, v7, (unsigned int)v6);
      return 3LL;
    }
  }
  return result;
}
