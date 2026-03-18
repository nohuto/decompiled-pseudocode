/*
 * XREFs of HalpTimerSaveProcessorCounter @ 0x1404D35B0
 * Callers:
 *     HaliAcpiSleep @ 0x1404D9F00 (HaliAcpiSleep.c)
 *     HaliAcpiSleepOld @ 0x140569940 (HaliAcpiSleepOld.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerSaveProcessorCounter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 result; // rax

  LODWORD(a3) = KeGetPcr()->Prcb.Number;
  v4 = __rdtsc();
  v5 = (unsigned __int64)HIDWORD(v4) << 32;
  *(_QWORD *)(HalpTimerSavedProcessorCounter + 8 * a3) = v5 | (unsigned int)v4;
  result = qword_140FC0EC8;
  if ( qword_140FC0EC8 )
  {
    if ( !(_DWORD)a3 )
    {
      HalpTimerIsReferenceTimeSaved = 1;
      result = guard_dispatch_icall_no_overrides(&HalpTimerSavedSequenceNumber, v5, a3, a4);
      HalpTimerSavedReferenceTime = result;
    }
  }
  else
  {
    HalpTimerSavedSequenceNumber = 0;
    HalpTimerIsReferenceTimeSaved = 0;
  }
  return result;
}
