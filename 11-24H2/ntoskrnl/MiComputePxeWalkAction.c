/*
 * XREFs of MiComputePxeWalkAction @ 0x1402DE580
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiWalkLeap @ 0x140210900 (MiWalkLeap.c)
 *     MiPteHasShadow @ 0x1402141A0 (MiPteHasShadow.c)
 *     MiGetSystemCacheReverseMap @ 0x1402D4740 (MiGetSystemCacheReverseMap.c)
 *     MiIsPageAGapPage @ 0x1403956AC (MiIsPageAGapPage.c)
 *     MiMakeSystemLeavesNonZero @ 0x1404D80F4 (MiMakeSystemLeavesNonZero.c)
 */

__int64 __fastcall MiComputePxeWalkAction(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rbp
  __int64 result; // rax
  int v10; // r15d
  _KPROCESS *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v14; // rax
  __int64 SystemCacheReverseMap; // rax

  v4 = *(_QWORD *)a2;
  v6 = a3;
  if ( a3 == 3
    && a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (v4 & 1) != 0
    && ((v4 & 0x42) == 0 || (v4 & 0x20) == 0) )
  {
    v11 = MiPteHasShadow();
    if ( v11 )
    {
      KernelWaitTime = v11[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v14 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
        if ( (v14 & 0x20) != 0 )
          v12 |= 0x20uLL;
        v4 = v12 | 0x42;
        if ( (v14 & 0x42) == 0 )
          v4 = v12;
      }
    }
  }
  if ( (v4 & 1) == 0 )
    return (unsigned int)((*(_DWORD *)a1 & 1) != 0) + 1;
  v10 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x8000) != 0
    && ((unsigned int)MiIsPageAGapPage((v4 >> 12) & 0xFFFFFFFFFFLL, (unsigned int)v6)
     || (v4 & 0x800) == 0 && (v4 & 0x42) == 0) )
  {
    return (unsigned int)((*(_DWORD *)a1 & 1) != 0) + 1;
  }
  if ( !(_DWORD)v6 )
    return 2LL;
  if ( (v4 & 0x80u) != 0LL )
  {
    if ( (v10 & 1) != 0 )
      return 2LL;
    result = MiWalkLeap(a1, a2, v6);
    if ( (_DWORD)result == 2 )
      return 1LL;
  }
  else if ( a2 == 0xFFFFF6FB7DBEDF68uLL
         || (v10 & 0x200) != 0
         && qword_140E37340[0] != (PVOID)qword_140E37358
         && (PVOID)((v4 >> 12) & 0xFFFFFFFFFFLL) == qword_140E37340[v6] )
  {
    return 1LL;
  }
  else
  {
    if ( (v10 & 1) == 0 )
    {
      if ( (*(_QWORD *)(48 * ((v4 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        return 2LL;
      if ( (_DWORD)v6 == 1 && (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 184LL) & 0xF) == 1 )
      {
        SystemCacheReverseMap = MiGetSystemCacheReverseMap((__int64)(a2 << 25) >> 16 << 25 >> 16);
        if ( !SystemCacheReverseMap
          || ((*(_QWORD *)(SystemCacheReverseMap + 32) >> 6) & 0x3FFLL) != *(_WORD *)(*(_QWORD *)(a1 + 32) + 174LL) )
        {
          return 2LL;
        }
      }
    }
    if ( a4 != 3
      || (_DWORD)v6 == 1
      && (*(_DWORD *)a1 & 0x10) != 0
      && (*(_DWORD *)a1 & 1) == 0
      && (((*(_QWORD *)(48 * ((*(_QWORD *)a2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 45) & 0x3FF) == 0
       || (unsigned __int8)((*(_QWORD *)(48 * ((*(_QWORD *)a2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 55) & 7) < (unsigned __int8)((unsigned __int8)HIBYTE(*(_WORD *)(a1 + 4)) >> 4)) )
    {
      return 2LL;
    }
    if ( (*(_DWORD *)a1 & 0x8000) != 0 && (int)v6 > 1 && (_DWORD)v6 == ((*(_DWORD *)(a1 + 4) >> 6) & 7) )
      MiMakeSystemLeavesNonZero(a1, a2, (unsigned int)v6);
    return 3LL;
  }
  return result;
}
