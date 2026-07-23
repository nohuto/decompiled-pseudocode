/*
 * XREFs of MiSmallVaStillMapsFrame @ 0x14045BBE4
 * Callers:
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x14025539C (MiLockStealUserVm.c)
 *     MiLockStealSystemVm @ 0x1402FD650 (MiLockStealSystemVm.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiSmallVaStillMapsFrame(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // esi
  __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  int v7; // ebp
  char v8; // al
  int v9; // eax
  unsigned __int64 v10; // rax
  unsigned __int64 v13[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v13, 0, 32);
  v3 = 0LL;
  v4 = 4;
  do
  {
    a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13[v3++] = a1;
  }
  while ( v3 < 4 );
  v5 = 4LL;
  do
  {
    v6 = v13[v5 - 1];
    v7 = v4 - 1;
    --v5;
    --v4;
    v8 = MI_READ_PTE_LOCK_FREE(v6);
    if ( (v8 & 1) == 0 )
      return 0LL;
    v9 = v8 & 0x80;
  }
  while ( !v9 && v5 != 1 );
  if ( (v9 != 0LL ? v7 : 0) != 0 )
    return 0LL;
  if ( a2 != -1 )
  {
    v10 = MI_READ_PTE_LOCK_FREE(v13[0]);
    if ( (v10 & 1) == 0
      || ((v10 >> 12) & 0xFFFFFFFFFFLL) != a2
      && (v13[0] != 0xFFFFF6FB7DBEDF68uLL
       || (*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) & 0xFFFFFFFFFFLL) != a2
       || a2 != KeGetCurrentThread()->ApcState.Process->UserDirectoryTableBase >> 12) )
    {
      return 0LL;
    }
  }
  return 1LL;
}
