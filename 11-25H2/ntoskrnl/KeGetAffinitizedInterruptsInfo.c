/*
 * XREFs of KeGetAffinitizedInterruptsInfo @ 0x1405C0034
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 */

__int64 __fastcall KeGetAffinitizedInterruptsInfo(struct _KAFFINITY_EX *a1)
{
  KiCopyAffinityEx(a1, a1->Size, &KiIntSteerAffinitizedInterrupts);
  return KeAddProcessorAffinityEx(&a1->Count, KiClockTimerOwner);
}
