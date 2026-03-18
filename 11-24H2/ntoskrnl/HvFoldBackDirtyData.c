/*
 * XREFs of HvFoldBackDirtyData @ 0x14097AA78
 * Callers:
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 * Callees:
 *     HvMarkDirtyForFlush @ 0x140488CB4 (HvMarkDirtyForFlush.c)
 *     HvLockHiveWriter @ 0x140882A38 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140882E28 (HvUnlockHiveWriter.c)
 *     HvFreeDirtyData @ 0x14097C440 (HvFreeDirtyData.c)
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
