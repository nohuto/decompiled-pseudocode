/*
 * XREFs of HalpHvTimerAcknowledgeInterrupt @ 0x14031A530
 * Callers:
 *     HalpTimerClockInterrupt @ 0x14031A2C0 (HalpTimerClockInterrupt.c)
 *     KiCallInterruptServiceRoutine @ 0x14031A580 (KiCallInterruptServiceRoutine.c)
 *     HalpHvTimerInitialize @ 0x14055CDC0 (HalpHvTimerInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpHvTimerAcknowledgeInterrupt(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  result = *(_QWORD *)(a1 + 24 * v1 + 8);
  _m_prefetchw((const void *)(result + 768));
  if ( *(_DWORD *)(result + 768) )
  {
    *(_DWORD *)(result + 768) = 0;
    if ( (*(_BYTE *)(result + 773) & 1) != 0 )
    {
      result = 0LL;
      __writemsr(0x40000084u, 0LL);
    }
  }
  return result;
}
