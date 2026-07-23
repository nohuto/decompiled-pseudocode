/*
 * XREFs of HvFoldBackDirtyData @ 0x140963288
 * Callers:
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 * Callees:
 *     HvMarkDirtyForFlush @ 0x140483DA4 (HvMarkDirtyForFlush.c)
 *     HvLockHiveWriter @ 0x1408868E8 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140886CD8 (HvUnlockHiveWriter.c)
 *     HvFreeDirtyData @ 0x140964C50 (HvFreeDirtyData.c)
 */

__int64 __fastcall HvFoldBackDirtyData(ULONG_PTR a1)
{
  unsigned __int64 v1; // rdi
  __int64 v4; // rbp
  int v5; // esi

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 1696) )
  {
    v4 = *(unsigned int *)(a1 + 1688);
    HvLockHiveWriter(a1);
    if ( (_DWORD)v4 )
    {
      v5 = 8;
      do
      {
        if ( _bittest64(*(const signed __int64 **)(a1 + 1696), v1) == 1 )
          HvMarkDirtyForFlush(a1);
        ++v1;
        v5 += 512;
        --v4;
      }
      while ( v4 );
    }
    HvUnlockHiveWriter(a1);
  }
  return HvFreeDirtyData(a1);
}
