/*
 * XREFs of FsFilterPerformCompletionCallbacks @ 0x14035B110
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x14035B210 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14035BCBC (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlQueryOpen @ 0x140861E30 (FsRtlQueryOpen.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14093DA50 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFile @ 0x14093E880 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409CEE20 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409CF0D0 (FsRtlReleaseFileForCcFlush.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FsFilterPerformCompletionCallbacks(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // ax
  unsigned int *v5; // rsi
  __int64 v6; // r8

  v2 = *(_WORD *)(a1 + 74);
  if ( v2 )
  {
    v5 = (unsigned int *)(a1 + 52);
    do
    {
      v6 = *(_QWORD *)(a1 + 80) + 32LL * v2;
      if ( *(_BYTE *)(a1 + 4) == 0xF9 )
        *v5 = a2;
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(v6 - 32);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(v6 - 24);
      guard_dispatch_icall_no_overrides(a1, a2);
      if ( *(_BYTE *)(a1 + 4) == 0xF9 )
        a2 = *v5;
      else
        v5 = (unsigned int *)(a1 + 52);
      v2 = *(_WORD *)(a1 + 74) - 1;
      *(_WORD *)(a1 + 74) = v2;
    }
    while ( v2 );
  }
  return a2;
}
