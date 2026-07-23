/*
 * XREFs of VmDeleteMemoryRange @ 0x140A5BB60
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 *     VmpRemoveMemoryRange @ 0x140479B50 (VmpRemoveMemoryRange.c)
 *     VmpReleasePushLockExclusive @ 0x1404816E0 (VmpReleasePushLockExclusive.c)
 *     VmpLogCreateDeleteMemoryRange @ 0x14079FD68 (VmpLogCreateDeleteMemoryRange.c)
 *     VmpValidateMemoryRangeParameters @ 0x140A5BC7C (VmpValidateMemoryRangeParameters.c)
 */

__int64 __fastcall VmDeleteMemoryRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // esi
  struct _LIST_ENTRY *Blink; // rdi
  signed int v10; // ebx
  __int64 v12; // rcx

  v8 = 0;
  Blink = KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink;
  if ( (unsigned int)VmpValidateMemoryRangeParameters(a1, a2, a3, a4) )
  {
    v10 = -1073741811;
  }
  else if ( Blink )
  {
    v8 = 1;
    FsRtlAcquirePushLockExclusive((unsigned __int64 *)&Blink[7].Blink);
    v10 = VmpRemoveMemoryRange((PEX_SPIN_LOCK)Blink, (_RTL_BALANCED_NODE *)(a2 >> 12), a1 >> 12, a3, a4);
    if ( v10 >= 0 )
      v10 = 0;
  }
  else
  {
    v10 = -1073741688;
  }
  if ( *(_QWORD *)&VmpTraceLoggingProvider )
  {
    if ( **(_DWORD **)&VmpTraceLoggingProvider )
    {
      if ( *(char *)(*(_QWORD *)&VmpTraceLoggingProvider + 16LL) < 0 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)&VmpTraceLoggingProvider + 24LL);
        if ( (v12 & 0x80) == v12 )
          VmpLogCreateDeleteMemoryRange(v12, 1, a1, a2, a3, 0LL, a4, v10);
      }
    }
  }
  if ( v8 )
    VmpReleasePushLockExclusive((volatile signed __int64 *)&Blink[7].Blink);
  return (unsigned int)v10;
}
