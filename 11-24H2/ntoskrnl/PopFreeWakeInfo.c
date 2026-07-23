/*
 * XREFs of PopFreeWakeInfo @ 0x140A9B6F0
 * Callers:
 *     <none>
 * Callees:
 *     PopUnlinkWakeSources @ 0x140A9B718 (PopUnlinkWakeSources.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeWakeInfo(PVOID P)
{
  PopUnlinkWakeSources();
  ExFreePoolWithTag(P, 0x206D654Du);
}
