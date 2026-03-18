/*
 * XREFs of ObSetProcessDeviceMap @ 0x140744600
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140445660 (PsGetProcessServerSilo.c)
 *     ObpSetDeviceMap @ 0x140A79B78 (ObpSetDeviceMap.c)
 */

__int64 __fastcall ObSetProcessDeviceMap(__int64 a1)
{
  void *ProcessServerSilo; // rax

  ProcessServerSilo = (void *)PsGetProcessServerSilo(a1);
  return ObpSetDeviceMap(ProcessServerSilo, 2, 0LL);
}
