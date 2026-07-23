/*
 * XREFs of CmpDereferenceNameControlBlockWithLock @ 0x140875130
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpCloneToUnbackedKcb @ 0x1407DB018 (CmpCloneToUnbackedKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140874810 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140881CD0 (CmpDereferenceKeyControlBlockWithLock.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 */

__int64 __fastcall CmpDereferenceNameControlBlockWithLock(_WORD *a1)
{
  char *v1; // r15
  __int64 v3; // rdi
  unsigned __int64 *v4; // rsi
  char *v5; // rax
  char *v6; // rbx
  unsigned int v7; // eax
  __int64 *i; // rcx
  __int64 v9; // rax
  signed __int64 *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rdx
  signed __int64 v13; // rtt

  v1 = (char *)(a1 + 4);
  v3 = 16LL
     * (((unsigned __int16)(-30045 * (a1[4] ^ (*((_DWORD *)a1 + 2) >> 9))) ^ (unsigned __int16)((unsigned __int64)(unsigned int)(101027 * (*((_DWORD *)a1 + 2) ^ (*((_DWORD *)a1 + 2) >> 9))) >> 9)) & 0x7FF);
  v4 = (unsigned __int64 *)((char *)CmpNameCacheTable + v3);
  v5 = (char *)KeAbPreAcquire((__int64)CmpNameCacheTable + v3, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
  if ( v6 )
    v6[10] = 1;
  v7 = *(_DWORD *)a1 & 1 | (2 * (*(_DWORD *)a1 >> 1) - 2);
  *(_DWORD *)a1 = v7;
  if ( v7 < 2 )
  {
    for ( i = (__int64 *)((char *)CmpNameCacheTable + v3 + 8); i; i = (__int64 *)(v9 + 8) )
    {
      v9 = *i;
      if ( !*i )
        break;
      if ( (char *)v9 == v1 )
      {
        *i = *(_QWORD *)(v9 + 8);
        break;
      }
    }
    CmpFreeTransientPoolWithTag(a1, 0x624E4D43u);
  }
  v10 = (signed __int64 *)((char *)CmpNameCacheTable + v3);
  _m_prefetchw((char *)CmpNameCacheTable + v3);
  v11 = *v10;
  v12 = *v10 - 16;
  if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v12 = 0LL;
  if ( (v11 & 2) != 0 || (v13 = *v10, v13 != _InterlockedCompareExchange64(v10, v12, v11)) )
    ExfReleasePushLock(v10);
  return KeAbPostRelease((ULONG_PTR)v10);
}
