/*
 * XREFs of MiComputePxeWalkAction @ 0x1402B48B0
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWalkLeap @ 0x1402B50C0 (MiWalkLeap.c)
 *     MiIsPageAGapPage @ 0x1402D046C (MiIsPageAGapPage.c)
 *     MiGetSystemCacheReverseMap @ 0x1403B53D0 (MiGetSystemCacheReverseMap.c)
 *     MiMakeSystemLeavesNonZero @ 0x1404D9074 (MiMakeSystemLeavesNonZero.c)
 */

__int64 __fastcall MiComputePxeWalkAction(int *a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 v4; // rbp
  unsigned __int64 v8; // rbx
  __int64 result; // rax
  int v10; // r15d
  __int64 SystemCacheReverseMap; // rax

  v4 = a3;
  if ( a3 == 3 )
    v8 = MI_READ_PTE_LOCK_FREE(a2);
  else
    v8 = *(_QWORD *)a2;
  if ( (v8 & 1) == 0 )
    return (unsigned int)((*a1 & 1) != 0) + 1;
  v10 = *a1;
  if ( (*a1 & 0x8000) != 0
    && ((unsigned int)MiIsPageAGapPage((v8 >> 12) & 0xFFFFFFFFFFLL, (unsigned int)v4)
     || (v8 & 0x800) == 0 && (v8 & 0x42) == 0) )
  {
    return (unsigned int)((*a1 & 1) != 0) + 1;
  }
  if ( !(_DWORD)v4 )
    return 2LL;
  if ( (v8 & 0x80u) != 0LL )
  {
    if ( (v10 & 1) != 0 )
      return 2LL;
    result = MiWalkLeap(a1, a2, (unsigned int)v4);
    if ( (_DWORD)result == 2 )
      return 1LL;
  }
  else if ( a2 == 0xFFFFF6FB7DBEDF68uLL
         || (v10 & 0x200) != 0
         && qword_140E37100[0] != (PVOID)qword_140E37118
         && (PVOID)((v8 >> 12) & 0xFFFFFFFFFFLL) == qword_140E37100[v4] )
  {
    return 1LL;
  }
  else
  {
    if ( (v10 & 1) == 0 )
    {
      if ( (*(_QWORD *)(48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        return 2LL;
      if ( (_DWORD)v4 == 1 && (*(_DWORD *)(*((_QWORD *)a1 + 4) + 184LL) & 0xF) == 1 )
      {
        SystemCacheReverseMap = MiGetSystemCacheReverseMap((__int64)(a2 << 25) >> 16 << 25 >> 16);
        if ( !SystemCacheReverseMap
          || ((*(_QWORD *)(SystemCacheReverseMap + 32) >> 6) & 0x3FFLL) != *(_WORD *)(*((_QWORD *)a1 + 4) + 174LL) )
        {
          return 2LL;
        }
      }
    }
    if ( a4 != 3
      || (_DWORD)v4 == 1
      && (*a1 & 0x10) != 0
      && (*a1 & 1) == 0
      && (((*(_QWORD *)(48 * ((*(_QWORD *)a2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 45) & 0x3FF) == 0
       || (unsigned __int8)((*(_QWORD *)(48 * ((*(_QWORD *)a2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 55) & 7) < (unsigned __int8)((unsigned __int8)HIBYTE(*((_WORD *)a1 + 2)) >> 4)) )
    {
      return 2LL;
    }
    if ( (*a1 & 0x8000) != 0 && (int)v4 > 1 && (_DWORD)v4 == (((unsigned int)a1[1] >> 6) & 7) )
      MiMakeSystemLeavesNonZero(a1, a2, (unsigned int)v4);
    return 3LL;
  }
  return result;
}
