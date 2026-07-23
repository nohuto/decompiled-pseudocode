/*
 * XREFs of MiIsAddressGlobal @ 0x14034E540
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiAssignNonPagedPoolPte @ 0x14034CC00 (MiAssignNonPagedPoolPte.c)
 *     MiMapFrame @ 0x14034D110 (MiMapFrame.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsAddressGlobal(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return HIBYTE(word_140E2EEC4);
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( a1 < qword_140E2F3C0 || a1 > qword_140E2F3D0 )
      return (unsigned __int8)word_140E2EEC4;
    return HIBYTE(word_140E2EEC4);
  }
  return 0LL;
}
