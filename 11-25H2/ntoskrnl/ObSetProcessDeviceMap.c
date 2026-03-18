/*
 * XREFs of ObSetProcessDeviceMap @ 0x1407385E0
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     ObpSetDeviceMap @ 0x140A77D08 (ObpSetDeviceMap.c)
 */

__int64 __fastcall ObSetProcessDeviceMap(__int64 a1)
{
  void *ProcessServerSilo; // rax

  ProcessServerSilo = (void *)PsGetProcessServerSilo(a1);
  return ObpSetDeviceMap(ProcessServerSilo, 2, 0LL);
}
