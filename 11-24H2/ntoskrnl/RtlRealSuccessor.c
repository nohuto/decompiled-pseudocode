/*
 * XREFs of RtlRealSuccessor @ 0x140248410
 * Callers:
 *     FsRtlCheckNoExclusiveConflict @ 0x1402479FC (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x140247B34 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     RtlEnumerateGenericTable @ 0x1402483A0 (RtlEnumerateGenericTable.c)
 *     FsRtlPrivateLock @ 0x140248460 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140248CD8 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x1402490B4 (FsRtlPrivateInsertExclusiveLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1402498C0 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingle @ 0x140249B60 (FsRtlFastUnlockSingle.c)
 *     FsRtlFastUnlockSingleShared @ 0x14024A1C0 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14024D62C (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlSplitLocks @ 0x14047A758 (FsRtlSplitLocks.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x1404916D0 (RtlEnumerateGenericTableWithoutSplaying.c)
 *     FsRtlGetNextFileLock @ 0x1405800A0 (FsRtlGetNextFileLock.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140A43B50 (FsRtlDeleteKeyFromTunnelCache.c)
 *     RtlNextUnicodePrefix @ 0x140A4A500 (RtlNextUnicodePrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlRealSuccessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  RTL_SPLAY_LINKS *v2; // rdx
  _RTL_SPLAY_LINKS *v3; // r8
  _RTL_SPLAY_LINKS *i; // rcx

  result = Links->RightChild;
  v2 = 0LL;
  v3 = Links;
  if ( result )
  {
    for ( i = result->LeftChild; i; i = i->LeftChild )
      result = i;
  }
  else
  {
    while ( 1 )
    {
      Links = Links->Parent;
      if ( Links->RightChild != v3 )
        break;
      v3 = Links;
    }
    if ( Links->LeftChild == v3 )
      return Links;
    return v2;
  }
  return result;
}
