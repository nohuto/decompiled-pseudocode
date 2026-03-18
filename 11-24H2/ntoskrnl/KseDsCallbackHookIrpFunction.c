/*
 * XREFs of KseDsCallbackHookIrpFunction @ 0x1405CAB90
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDataIrp @ 0x1405CB250 (KsepDsEventDataIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsCallbackHookIrpFunction(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebp
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // eax
  unsigned int v10; // edi

  v6 = **(unsigned __int8 **)(a2 + 184);
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2, a3, a4);
  v9 = guard_dispatch_icall_no_overrides(a1, a2, v7, v8);
  v10 = v9;
  if ( (unsigned int)(v6 - 3) <= 1 )
    KsepDsEventDataIrp(*(_QWORD *)(a1 + 8), a1, a2, v6, v9);
  return v10;
}
