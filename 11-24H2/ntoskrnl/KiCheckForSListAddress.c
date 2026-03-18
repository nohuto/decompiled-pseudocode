/*
 * XREFs of KiCheckForSListAddress @ 0x1404038C0
 * Callers:
 *     KiRollbackSlistPops @ 0x1404C1F40 (KiRollbackSlistPops.c)
 *     KxIsrLinkage @ 0x1406AE9A0 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1406AF940 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1406AFCB0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1406B0020 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1406B0390 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1406B0700 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1406B1390 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1406B2240 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x1406B67C0 (KiNmiInterruptStart.c)
 *     KiPageFault @ 0x1406B9B40 (KiPageFault.c)
 *     KiMcheckAbort @ 0x1406BAAC0 (KiMcheckAbort.c)
 *     KiVirtualizationException @ 0x1406BBD00 (KiVirtualizationException.c)
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
    result = qword_140FC6488;
    if ( v2 > qword_140FC6488 && v2 <= qword_140FC6478 )
      *(_QWORD *)(a1 + 360) = qword_140FC6488;
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
