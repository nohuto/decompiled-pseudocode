/*
 * XREFs of PspTlsAlloc @ 0x14077A658
 * Callers:
 *     PsTlsAlloc @ 0x14077A5C0 (PsTlsAlloc.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     RtlpFlsAlloc @ 0x140787754 (RtlpFlsAlloc.c)
 */

__int64 __fastcall PspTlsAlloc(int a1, __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx

  if ( (*(_DWORD *)&KeGetCurrentThread()[1].UserAffinityPrimaryGroup & 3) != 0 )
  {
    return (unsigned int)-1073741749;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v5 = RtlpFlsAlloc(a1, a2, a1, a4, a2);
    KeLeaveGuardedRegion();
  }
  return v5;
}
