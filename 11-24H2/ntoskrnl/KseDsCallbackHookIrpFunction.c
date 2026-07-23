/*
 * XREFs of KseDsCallbackHookIrpFunction @ 0x1405C82B0
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDataIrp @ 0x1405C8970 (KsepDsEventDataIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsCallbackHookIrpFunction(__int64 a1, __int64 a2)
{
  int v4; // ebp
  unsigned int v5; // eax
  unsigned int v6; // edi

  v4 = **(unsigned __int8 **)(a2 + 184);
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2);
  v5 = guard_dispatch_icall_no_overrides(a1, a2);
  v6 = v5;
  if ( (unsigned int)(v4 - 3) <= 1 )
    KsepDsEventDataIrp(*(_QWORD *)(a1 + 8), a1, a2, v4, v5);
  return v6;
}
