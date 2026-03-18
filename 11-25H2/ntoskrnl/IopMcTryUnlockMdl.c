/*
 * XREFs of IopMcTryUnlockMdl @ 0x14059F778
 * Callers:
 *     IoTryReleasePages @ 0x14043D044 (IoTryReleasePages.c)
 *     IopMcDereferenceMdl @ 0x14059F4A8 (IopMcDereferenceMdl.c)
 *     IopMcWaitAndCleanupBufferEntry @ 0x14059F7D4 (IopMcWaitAndCleanupBufferEntry.c)
 * Callees:
 *     IopUnlockAndFreeMdl @ 0x1402D3518 (IopUnlockAndFreeMdl.c)
 *     IopMcRemoveMdlPagesFromTable @ 0x14059F624 (IopMcRemoveMdlPagesFromTable.c)
 */

char __fastcall IopMcTryUnlockMdl(ULONG_PTR BugCheckParameter2, signed __int64 BugCheckParameter3)
{
  ULONG_PTR v3; // rax
  struct _MDL *v4; // rdi

  if ( !BugCheckParameter3 )
    return 0;
  v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 56), 0LL, BugCheckParameter3);
  v4 = (struct _MDL *)v3;
  if ( BugCheckParameter3 != v3 )
    return 0;
  IopMcRemoveMdlPagesFromTable(BugCheckParameter2, v3);
  if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 1) != 0 )
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 12), 0xFFFFFFFE);
  IopUnlockAndFreeMdl(v4);
  return 1;
}
