/*
 * XREFs of PopFreeWakeInfo @ 0x140AA0360
 * Callers:
 *     <none>
 * Callees:
 *     PopUnlinkWakeSources @ 0x140AA0388 (PopUnlinkWakeSources.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeWakeInfo(PVOID P)
{
  PopUnlinkWakeSources();
  ExFreePoolWithTag(P, 0x206D654Du);
}
