/*
 * XREFs of HalpTimerRestoreProcessorCounter @ 0x1404F392C
 * Callers:
 *     HalpPostSleepMP @ 0x140B70824 (HalpPostSleepMP.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall HalpTimerRestoreProcessorCounter(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  LODWORD(a2) = KeGetPcr()->Prcb.Number;
  result = HalpTimerSavedProcessorCounter;
  if ( qword_140FC1128 )
  {
    if ( !(_DWORD)a2 && HalpTimerIsReferenceTimeSaved )
    {
      result = qword_140FC1310;
      if ( qword_140FC1310 )
        return guard_dispatch_icall_no_overrides(
                 (unsigned int)HalpTimerSavedSequenceNumber,
                 HalpTimerSavedReferenceTime);
    }
  }
  else
  {
    result = *(_QWORD *)(HalpTimerSavedProcessorCounter + 8 * a2);
    __writemsr(0x10u, result);
  }
  return result;
}
