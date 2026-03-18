/*
 * XREFs of ViIrpLogExposeWmiCallback @ 0x140B9BC50
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x140AB1C90 (IoCreateDriver.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ViIrpLogExposeWmiCallback(PVOID P)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&ViDdiWmiMofKey, &word_140BA9A80);
  RtlInitUnicodeString(&ViDdiWmiMofResourceName, &word_140BA9A80);
  RtlInitUnicodeString(&DestinationString, L"\\DRIVER\\VERIFIER_DDI");
  IoCreateDriver(&DestinationString, (unsigned __int64)ViDdiDriverEntry);
  ViIrpLogDdiLock = 2;
  ExFreePoolWithTag(P, 0);
}
