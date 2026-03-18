/*
 * XREFs of PsTlsFree @ 0x14077A520
 * Callers:
 *     PsTlsAlloc @ 0x14077A4C0 (PsTlsAlloc.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     RtlpFlsFree @ 0x1407879CC (RtlpFlsFree.c)
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
