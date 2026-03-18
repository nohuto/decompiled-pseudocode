/*
 * XREFs of ACPIDeviceNotifyWakeEventDevice @ 0x14005CDB4
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x14001BA00 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x140032430 (ACPIDeviceCancelWaitWakeIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ACPIDeviceNotifyWakeEventDevice(__int64 a1, char a2)
{
  __int64 (__fastcall *v2)(__int64, __int64 *); // rax
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(unsigned int *)(a1 + 976);
  v2 = *(__int64 (__fastcall **)(__int64, __int64 *))(a1 + 984);
  v3 = *(_QWORD *)(a1 + 992);
  BYTE4(v5) = a2;
  return v2(v3, &v5);
}
