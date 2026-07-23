/*
 * XREFs of KseDsCallbackHookIrpDeviceControlFunction @ 0x1405C8230
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDataIrp @ 0x1405C8970 (KsepDsEventDataIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsCallbackHookIrpDeviceControlFunction(__int64 a1, __int64 a2)
{
  int v4; // edi
  unsigned int v5; // ebx

  v4 = **(unsigned __int8 **)(a2 + 184);
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2);
  v5 = guard_dispatch_icall_no_overrides(a1, a2);
  KsepDsEventDataIrp(*(_QWORD *)(a1 + 8), a1, a2, v4, v5);
  return v5;
}
