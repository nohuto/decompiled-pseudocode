/*
 * XREFs of HalpHvTimerAcknowledgeInterrupt @ 0x140279DA0
 * Callers:
 *     HalpTimerClockInterrupt @ 0x140279B10 (HalpTimerClockInterrupt.c)
 *     KiCallInterruptServiceRoutine @ 0x140279DF0 (KiCallInterruptServiceRoutine.c)
 *     HalpHvTimerInitialize @ 0x14055C890 (HalpHvTimerInitialize.c)
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
