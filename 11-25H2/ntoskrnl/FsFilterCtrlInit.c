/*
 * XREFs of FsFilterCtrlInit @ 0x140433350
 * Callers:
 *     FsRtlQueryOpen @ 0x140861E30 (FsRtlQueryOpen.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14093DA50 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFile @ 0x14093E880 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409CEE20 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409CF0D0 (FsRtlReleaseFileForCcFlush.c)
 * Callees:
 *     FsFilterAllocateCompletionStack @ 0x1404333E8 (FsFilterAllocateCompletionStack.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall FsFilterCtrlInit(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  unsigned int v6; // edi
  unsigned __int16 v8; // ax
  void *v9; // rcx
  __int64 result; // rax

  v6 = 0;
  *(_QWORD *)(a1 + 16) = a5;
  *(_DWORD *)a1 = 64;
  *(_BYTE *)(a1 + 4) = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v8 = *(char *)(a3 + 76);
  *(_WORD *)(a1 + 72) = v8;
  *(_WORD *)(a1 + 74) = 0;
  if ( v8 <= 0xFu )
  {
    v9 = (void *)(a1 + 88);
    *(_QWORD *)(a1 + 80) = v9;
    memset_0(v9, 0, 0x1E0uLL);
    *(_WORD *)(a1 + 72) = 15;
    return v6;
  }
  result = FsFilterAllocateCompletionStack(a1, a6);
  v6 = result;
  if ( (int)result >= 0 )
    return v6;
  return result;
}
