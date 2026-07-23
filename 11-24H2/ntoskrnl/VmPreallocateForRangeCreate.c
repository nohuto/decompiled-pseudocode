/*
 * XREFs of VmPreallocateForRangeCreate @ 0x140A55A60
 * Callers:
 *     <none>
 * Callees:
 *     VmpProcessContextSetup @ 0x14079F700 (VmpProcessContextSetup.c)
 *     VmpAllocateMemoryRanges @ 0x140A55AE0 (VmpAllocateMemoryRanges.c)
 */

__int64 __fastcall VmPreallocateForRangeCreate(__int64 *a1, __int64 a2)
{
  _KPROCESS *Process; // rdi
  struct _LIST_ENTRY *Blink; // rbx
  __int64 MemoryRanges; // rax
  __int64 result; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  Blink = Process[3].ProcessListEntry.Blink;
  if ( !Blink )
  {
    result = VmpProcessContextSetup(a2);
    if ( (int)result < 0 )
      return result;
    Blink = Process[3].ProcessListEntry.Blink;
  }
  MemoryRanges = VmpAllocateMemoryRanges(1LL);
  if ( !MemoryRanges )
    return 3221225626LL;
  _InterlockedIncrement64((volatile signed __int64 *)&Blink[7]);
  *a1 = (unsigned __int64)Blink ^ MemoryRanges;
  return 0LL;
}
