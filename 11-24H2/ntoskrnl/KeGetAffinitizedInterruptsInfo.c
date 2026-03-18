/*
 * XREFs of KeGetAffinitizedInterruptsInfo @ 0x1405C40C0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 */

__int64 __fastcall KeGetAffinitizedInterruptsInfo(struct _KAFFINITY_EX *a1)
{
  KiCopyAffinityEx(a1, a1->Size, &KiIntSteerAffinitizedInterrupts);
  return KeAddProcessorAffinityEx(&a1->Count, KiClockTimerOwner);
}
