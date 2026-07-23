/*
 * XREFs of VmSplitMemoryRange @ 0x140A73D90
 * Callers:
 *     <none>
 * Callees:
 *     VmpSplitMemoryRange @ 0x140399CE8 (VmpSplitMemoryRange.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     VmpReleasePushLockExclusive @ 0x1404816E0 (VmpReleasePushLockExclusive.c)
 *     VmpLogSplitMergeMemoryRange @ 0x1407A0420 (VmpLogSplitMergeMemoryRange.c)
 */

__int64 __fastcall VmSplitMemoryRange(unsigned __int64 a1, __int64 a2)
{
  int v2; // r14d
  struct _LIST_ENTRY *Blink; // rdi
  unsigned int v6; // ebx
  __int64 v8; // rcx

  v2 = 0;
  Blink = KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink;
  if ( a2 == -1 || (a1 & 0xFFF) != 0 )
  {
    v6 = -1073741811;
  }
  else if ( Blink )
  {
    v2 = 1;
    FsRtlAcquirePushLockExclusive((unsigned __int64 *)&Blink[7].Blink);
    v6 = VmpSplitMemoryRange((PEX_SPIN_LOCK)Blink, a1 >> 12, a2);
  }
  else
  {
    v6 = -1073741688;
  }
  if ( *(_QWORD *)&VmpTraceLoggingProvider
    && **(_DWORD **)&VmpTraceLoggingProvider
    && tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 128LL) )
  {
    VmpLogSplitMergeMemoryRange(v8, 1, a1, a2, v6);
  }
  if ( v2 )
    VmpReleasePushLockExclusive((volatile signed __int64 *)&Blink[7].Blink);
  return v6;
}
