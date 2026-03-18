/*
 * XREFs of KseDsCallbackHookIrpDeviceControlFunction @ 0x1405C64F0
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDataIrp @ 0x1405C6C30 (KsepDsEventDataIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsCallbackHookIrpDeviceControlFunction(__int64 a1, __int64 a2)
{
  int v3; // esi
  int v4; // edi
  unsigned int v5; // ebx

  v3 = a2;
  v4 = **(unsigned __int8 **)(a2 + 184);
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8));
  v5 = guard_dispatch_icall_no_overrides(a1);
  KsepDsEventDataIrp(*(_QWORD *)(a1 + 8), a1, v3, v4, v5);
  return v5;
}
