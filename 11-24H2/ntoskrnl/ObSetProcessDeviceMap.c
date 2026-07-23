/*
 * XREFs of ObSetProcessDeviceMap @ 0x1407428F0
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     ObpSetDeviceMap @ 0x140A73E78 (ObpSetDeviceMap.c)
 */

__int64 __fastcall ObSetProcessDeviceMap(__int64 a1)
{
  void *ProcessServerSilo; // rax

  ProcessServerSilo = (void *)PsGetProcessServerSilo(a1);
  return ObpSetDeviceMap(ProcessServerSilo, 2, 0LL);
}
