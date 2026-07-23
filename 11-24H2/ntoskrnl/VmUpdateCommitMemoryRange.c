/*
 * XREFs of VmUpdateCommitMemoryRange @ 0x14079F1A0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 *     VmpReleasePushLockExclusive @ 0x1404816E0 (VmpReleasePushLockExclusive.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x140649B80 (VmpUpdateCommitStateMemoryRange.c)
 */

__int64 __fastcall VmUpdateCommitMemoryRange(__int128 *a1, ULONG a2, struct _LIST_ENTRY *a3)
{
  struct _LIST_ENTRY *Blink; // rbx
  unsigned int updated; // ebx
  volatile signed __int64 *p_Blink; // rdi

  Blink = KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink;
  if ( Blink )
  {
    p_Blink = (volatile signed __int64 *)&Blink[7].Blink;
    FsRtlAcquirePushLockExclusive((unsigned __int64 *)&Blink[7].Blink);
    if ( Blink[6].Blink == a3 )
      updated = VmpUpdateCommitStateMemoryRange((__int64)Blink, a1, a2);
    else
      updated = -1073740007;
    VmpReleasePushLockExclusive(p_Blink);
  }
  else
  {
    return (unsigned int)-1073741688;
  }
  return updated;
}
