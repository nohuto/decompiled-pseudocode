/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x1402B9C50
 * Callers:
 *     MiDeleteAweInfo @ 0x1407F9E08 (MiDeleteAweInfo.c)
 *     IopDeleteFile @ 0x14083E070 (IopDeleteFile.c)
 *     FsRtlTeardownPerFileContexts @ 0x1409F64C0 (FsRtlTeardownPerFileContexts.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE7D64 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExSaFree @ 0x1402B9C7C (ExSaFree.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExSaFree((unsigned int)result & 0xFFFFFFF8, 16LL);
  return result;
}
