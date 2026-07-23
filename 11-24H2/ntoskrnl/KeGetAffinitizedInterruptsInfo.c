/*
 * XREFs of KeGetAffinitizedInterruptsInfo @ 0x1405C16E4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 */

__int64 __fastcall KeGetAffinitizedInterruptsInfo(struct _KAFFINITY_EX *a1)
{
  KiCopyAffinityEx(a1, a1->Size, &KiIntSteerAffinitizedInterrupts);
  return KeAddProcessorAffinityEx(&a1->Count, KiClockTimerOwner);
}
