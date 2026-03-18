/*
 * XREFs of PopFreeWakeInfo @ 0x140A9A5F0
 * Callers:
 *     <none>
 * Callees:
 *     PopUnlinkWakeSources @ 0x140A9A618 (PopUnlinkWakeSources.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeWakeInfo(PVOID P)
{
  PopUnlinkWakeSources();
  ExFreePoolWithTag(P, 0x206D654Du);
}
