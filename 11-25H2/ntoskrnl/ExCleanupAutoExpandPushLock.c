/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x14036D350
 * Callers:
 *     MiDeleteAweInfo @ 0x1407E9808 (MiDeleteAweInfo.c)
 *     IopDeleteFile @ 0x140844B30 (IopDeleteFile.c)
 *     MmDeleteProcessAddressSpace @ 0x1408D7B40 (MmDeleteProcessAddressSpace.c)
 *     FsRtlTeardownPerFileContexts @ 0x1409FF0A0 (FsRtlTeardownPerFileContexts.c)
 * Callees:
 *     ExSaFree @ 0x14036D37C (ExSaFree.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExSaFree((unsigned int)result & 0xFFFFFFF8, 16LL);
  return result;
}
