/*
 * XREFs of KiCheckForSListAddress @ 0x1403FE680
 * Callers:
 *     KiRollbackSlistPops @ 0x1404BD530 (KiRollbackSlistPops.c)
 *     KxIsrLinkage @ 0x1406AF940 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1406B08E0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1406B0C50 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1406B0FC0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1406B1330 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1406B16A0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1406B2330 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1406B31E0 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x1406B76C0 (KiNmiInterruptStart.c)
 *     KiPageFault @ 0x1406BAA40 (KiPageFault.c)
 *     KiMcheckAbort @ 0x1406BB9C0 (KiMcheckAbort.c)
 *     KiVirtualizationException @ 0x1406BCC00 (KiVirtualizationException.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiCheckForSListAddress(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx

  result = *(unsigned __int16 *)(a1 + 368);
  v2 = *(_QWORD *)(a1 + 360);
  if ( (_WORD)result == 51 )
  {
    result = qword_140FC7508;
    if ( v2 > qword_140FC7508 && v2 <= qword_140FC74F8 )
      *(_QWORD *)(a1 + 360) = qword_140FC7508;
  }
  else if ( (_WORD)result == 16 )
  {
    result = (__int64)&ExpInterlockedPopEntrySListResume;
    if ( v2 > (unsigned __int64)&ExpInterlockedPopEntrySListResume )
    {
      result = (__int64)&ExpInterlockedPopEntrySListEnd;
      if ( v2 <= (unsigned __int64)&ExpInterlockedPopEntrySListEnd )
        *(_QWORD *)(a1 + 48) |= 0x10000uLL;
    }
  }
  return result;
}
