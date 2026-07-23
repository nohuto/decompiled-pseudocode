/*
 * XREFs of VmMergeMemoryRanges @ 0x140A76400
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 *     VmpReleasePushLockExclusive @ 0x1404816E0 (VmpReleasePushLockExclusive.c)
 *     VmpMergeMemoryRanges @ 0x1404C98A4 (VmpMergeMemoryRanges.c)
 *     VmpLogSplitMergeMemoryRange @ 0x1407A0420 (VmpLogSplitMergeMemoryRange.c)
 */

__int64 __fastcall VmMergeMemoryRanges(unsigned __int64 a1, __int64 a2)
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
    v6 = VmpMergeMemoryRanges((__int64)Blink, a1 >> 12, a2);
  }
  else
  {
    v6 = -1073741688;
  }
  if ( *(_QWORD *)&VmpTraceLoggingProvider )
  {
    if ( **(_DWORD **)&VmpTraceLoggingProvider )
    {
      if ( *(char *)(*(_QWORD *)&VmpTraceLoggingProvider + 16LL) < 0 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)&VmpTraceLoggingProvider + 24LL);
        if ( (v8 & 0x80) == v8 )
          VmpLogSplitMergeMemoryRange(v8, 0, a1, a2, v6);
      }
    }
  }
  if ( v2 )
    VmpReleasePushLockExclusive((volatile signed __int64 *)&Blink[7].Blink);
  return v6;
}
