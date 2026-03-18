/*
 * XREFs of MiIsAddressGlobal @ 0x1402ECF00
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiAssignNonPagedPoolPte @ 0x1402EB5C0 (MiAssignNonPagedPoolPte.c)
 *     MiMapFrame @ 0x1402EBAD0 (MiMapFrame.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsAddressGlobal(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return HIBYTE(word_140E2ED84);
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( a1 < qword_140E2F280 || a1 > qword_140E2F290 )
      return (unsigned __int8)word_140E2ED84;
    return HIBYTE(word_140E2ED84);
  }
  return 0LL;
}
