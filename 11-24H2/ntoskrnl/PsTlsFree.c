/*
 * XREFs of PsTlsFree @ 0x14077A620
 * Callers:
 *     PsTlsAlloc @ 0x14077A5C0 (PsTlsAlloc.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     RtlpFlsFree @ 0x1407878FC (RtlpFlsFree.c)
 */

void __fastcall PsTlsFree(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( (int)RtlpFlsFree(a1, (unsigned int)a1) < 0 )
    __fastfail(0x46u);
  KeLeaveGuardedRegion();
}
