/*
 * XREFs of MiWalkPageTablesRecursivelyNoSynch @ 0x14020FAE8
 * Callers:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x14020FAE8 (MiWalkPageTablesRecursivelyNoSynch.c)
 * Callees:
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x14020FAE8 (MiWalkPageTablesRecursivelyNoSynch.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     KdCheckForDebugBreak @ 0x1402AC8F8 (KdCheckForDebugBreak.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiWalkPageTablesRecursivelyNoSynch(unsigned int *a1, volatile __int64 *a2, __int64 a3)
{
  __int64 v3; // rsi
  volatile __int64 *v4; // rdi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 result; // rax

  v3 = (int)a3;
  v4 = a2;
  if ( (unsigned __int64)a2 < *(_QWORD *)&a1[2 * (int)a3 + 24] )
    v4 = *(volatile __int64 **)&a1[2 * (int)a3 + 24];
  v6 = ((unsigned __int64)v4 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( v6 > *(_QWORD *)&a1[2 * (int)a3 + 32] )
    v6 = *(_QWORD *)&a1[2 * (int)a3 + 32];
  while ( (unsigned __int64)v4 <= v6 )
  {
    if ( (_DWORD)v3 == 3 )
    {
      KdCheckForDebugBreak();
      if ( v4 == (volatile __int64 *)0xFFFFF6FB7DBEDF68LL )
        goto LABEL_27;
    }
    v7 = MI_READ_PTE_LOCK_FREE(v4, a2, a3);
    LOBYTE(v9) = v7;
    if ( (v7 & 1) != 0 )
    {
      a2 = (volatile __int64 *)*a1;
      v10 = (v7 >> 12) & 0xFFFFFFFFFFLL;
      if ( ((unsigned __int16)a2 & 0x200) != 0
        && qword_140E37480 != (PVOID)qword_140E37498
        && v10 == *((_QWORD *)&MiState + v3 + 5408)
        && (MiFlags & 0x20000000) != 0
        || ((unsigned __int16)a2 & 0x400) != 0
        && qword_140E37480 != (PVOID)qword_140E37498
        && v10 == *((_QWORD *)&MiState + v3 + 5415) )
      {
        goto LABEL_27;
      }
      if ( (v7 & 0x20) == 0 && (_DWORD)v3 )
      {
        v9 = v7 | 0x20;
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        _InterlockedExchange64(v4, v9);
      }
    }
    result = guard_dispatch_icall_no_overrides(a1, v4, (unsigned int)v3, v8);
    if ( (int)result >= 4 )
      return result;
    if ( (_DWORD)v3 && (_DWORD)result != 1 && (v9 & 1) != 0 && (v9 & 0x80u) == 0LL )
      MiWalkPageTablesRecursivelyNoSynch(a1, (__int64)((_QWORD)v4 << 25) >> 16, (unsigned int)(v3 - 1));
LABEL_27:
    ++v4;
  }
  return 0LL;
}
