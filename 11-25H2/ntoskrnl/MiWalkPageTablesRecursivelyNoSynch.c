/*
 * XREFs of MiWalkPageTablesRecursivelyNoSynch @ 0x140246BB8
 * Callers:
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x140246BB8 (MiWalkPageTablesRecursivelyNoSynch.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x140246BB8 (MiWalkPageTablesRecursivelyNoSynch.c)
 *     KdCheckForDebugBreak @ 0x140275528 (KdCheckForDebugBreak.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiWalkPageTablesRecursivelyNoSynch(_DWORD *a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 result; // rax

  v3 = a3;
  v4 = a2;
  if ( a2 < *(_QWORD *)&a1[2 * a3 + 24] )
    v4 = *(_QWORD *)&a1[2 * a3 + 24];
  v6 = (v4 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( v6 > *(_QWORD *)&a1[2 * a3 + 32] )
    v6 = *(_QWORD *)&a1[2 * a3 + 32];
  while ( v4 <= v6 )
  {
    if ( (_DWORD)v3 == 3 )
    {
      KdCheckForDebugBreak();
      if ( v4 == 0xFFFFF6FB7DBEDF68uLL )
        goto LABEL_27;
    }
    v7 = MI_READ_PTE_LOCK_FREE(v4);
    LOBYTE(v8) = v7;
    if ( (v7 & 1) != 0 )
    {
      v9 = (v7 >> 12) & 0xFFFFFFFFFFLL;
      if ( (*a1 & 0x200) != 0
        && qword_140E37100 != (PVOID)qword_140E37118
        && v9 == *((_QWORD *)&MiState + v3 + 5408)
        && (MiFlags & 0x20000000) != 0
        || (*a1 & 0x400) != 0 && qword_140E37100 != (PVOID)qword_140E37118 && v9 == *((_QWORD *)&MiState + v3 + 5415) )
      {
        goto LABEL_27;
      }
      if ( (v7 & 0x20) == 0 && (_DWORD)v3 )
      {
        v8 = v7 | 0x20;
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        _InterlockedExchange64((volatile __int64 *)v4, v8);
      }
    }
    result = guard_dispatch_icall_no_overrides(a1, v4);
    if ( (int)result >= 4 )
      return result;
    if ( (_DWORD)v3 && (_DWORD)result != 1 && (v8 & 1) != 0 && (v8 & 0x80u) == 0LL )
      MiWalkPageTablesRecursivelyNoSynch(a1, (__int64)(v4 << 25) >> 16, (unsigned int)(v3 - 1));
LABEL_27:
    v4 += 8LL;
  }
  return 0LL;
}
