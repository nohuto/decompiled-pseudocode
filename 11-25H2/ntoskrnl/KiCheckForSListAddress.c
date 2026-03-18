/*
 * XREFs of KiCheckForSListAddress @ 0x140400C70
 * Callers:
 *     KiRollbackSlistPops @ 0x1404C3540 (KiRollbackSlistPops.c)
 *     KxIsrLinkage @ 0x1406A36D0 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1406A4670 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1406A49E0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1406A4D50 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1406A50C0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1406A5430 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1406A60C0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1406A6F70 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x1406AB4C0 (KiNmiInterruptStart.c)
 *     KiPageFault @ 0x1406AE840 (KiPageFault.c)
 *     KiMcheckAbort @ 0x1406AF7C0 (KiMcheckAbort.c)
 *     KiVirtualizationException @ 0x1406B0A00 (KiVirtualizationException.c)
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
    result = qword_140FC64C8;
    if ( v2 > qword_140FC64C8 && v2 <= qword_140FC64B8 )
      *(_QWORD *)(a1 + 360) = qword_140FC64C8;
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
