/*
 * XREFs of FsFilterPerformCompletionCallbacks @ 0x140374BC0
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x140372004 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140372ABC (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140942350 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFile @ 0x140943180 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409D1DE0 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409D2090 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlQueryOpen @ 0x1409D51C4 (FsRtlQueryOpen.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FsFilterPerformCompletionCallbacks(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // ax
  unsigned int *v7; // rsi
  __int64 v8; // r8

  v4 = *(_WORD *)(a1 + 74);
  if ( v4 )
  {
    v7 = (unsigned int *)(a1 + 52);
    do
    {
      v8 = *(_QWORD *)(a1 + 80) + 32LL * v4;
      if ( *(_BYTE *)(a1 + 4) == 0xF9 )
        *v7 = a2;
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(v8 - 32);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(v8 - 24);
      guard_dispatch_icall_no_overrides(a1, a2, *(_QWORD *)(v8 - 16), a4);
      if ( *(_BYTE *)(a1 + 4) == 0xF9 )
        a2 = *v7;
      else
        v7 = (unsigned int *)(a1 + 52);
      v4 = *(_WORD *)(a1 + 74) - 1;
      *(_WORD *)(a1 + 74) = v4;
    }
    while ( v4 );
  }
  return a2;
}
