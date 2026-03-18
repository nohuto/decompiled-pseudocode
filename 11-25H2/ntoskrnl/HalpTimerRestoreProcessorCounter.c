/*
 * XREFs of HalpTimerRestoreProcessorCounter @ 0x1404F37D8
 * Callers:
 *     HalpPostSleepMP @ 0x140B58A3C (HalpPostSleepMP.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall HalpTimerRestoreProcessorCounter(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  LODWORD(a2) = KeGetPcr()->Prcb.Number;
  result = HalpTimerSavedProcessorCounter;
  if ( qword_140FC0728 )
  {
    if ( !(_DWORD)a2 && HalpTimerIsReferenceTimeSaved )
    {
      result = qword_140FC0910;
      if ( qword_140FC0910 )
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
