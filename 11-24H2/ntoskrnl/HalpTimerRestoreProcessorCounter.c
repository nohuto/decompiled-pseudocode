/*
 * XREFs of HalpTimerRestoreProcessorCounter @ 0x1404F602C
 * Callers:
 *     HalpPostSleepMP @ 0x140B6886C (HalpPostSleepMP.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerRestoreProcessorCounter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // r8

  LODWORD(a2) = KeGetPcr()->Prcb.Number;
  result = HalpTimerSavedProcessorCounter;
  v5 = *(_QWORD *)(HalpTimerSavedProcessorCounter + 8 * a2);
  if ( qword_140FC0EC8 )
  {
    if ( !(_DWORD)a2 && HalpTimerIsReferenceTimeSaved )
    {
      result = qword_140FC10B0;
      if ( qword_140FC10B0 )
        return guard_dispatch_icall_no_overrides(
                 (unsigned int)HalpTimerSavedSequenceNumber,
                 HalpTimerSavedReferenceTime,
                 v5,
                 a4);
    }
  }
  else
  {
    result = *(_QWORD *)(HalpTimerSavedProcessorCounter + 8 * a2);
    __writemsr(0x10u, v5);
  }
  return result;
}
