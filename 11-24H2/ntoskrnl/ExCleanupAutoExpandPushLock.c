/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x14043A400
 * Callers:
 *     MiDeleteAweInfo @ 0x1407F9698 (MiDeleteAweInfo.c)
 *     IopDeleteFile @ 0x140841DB0 (IopDeleteFile.c)
 *     FsRtlTeardownPerFileContexts @ 0x1409FD780 (FsRtlTeardownPerFileContexts.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE6484 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExSaFree @ 0x14043A42C (ExSaFree.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExSaFree((unsigned int)result & 0xFFFFFFF8, 16LL);
  return result;
}
