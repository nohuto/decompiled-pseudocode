/*
 * XREFs of PsTlsFree @ 0x14076ABD0
 * Callers:
 *     PsTlsAlloc @ 0x14076AB70 (PsTlsAlloc.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     RtlpFlsFree @ 0x14077877C (RtlpFlsFree.c)
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
