/*
 * XREFs of MiIsAddressGlobal @ 0x1402C3B60
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiAssignNonPagedPoolPte @ 0x1402C3250 (MiAssignNonPagedPoolPte.c)
 *     MiWriteLargePte @ 0x1402C3820 (MiWriteLargePte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsAddressGlobal(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return HIBYTE(word_140E2EB44);
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( a1 < qword_140E2F040 || a1 > qword_140E2F050 )
      return (unsigned __int8)word_140E2EB44;
    return HIBYTE(word_140E2EB44);
  }
  return 0LL;
}
