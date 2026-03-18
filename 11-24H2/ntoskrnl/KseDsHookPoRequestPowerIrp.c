/*
 * XREFs of KseDsHookPoRequestPowerIrp @ 0x1405CB090
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventRequestPowerIrp @ 0x1405CBD68 (KsepDsEventRequestPowerIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsHookPoRequestPowerIrp(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  char v7; // bl
  int v8; // edi
  unsigned int v9; // ebp
  __int64 v11; // [rsp+50h] [rbp+8h]

  v11 = 0LL;
  v7 = a3;
  v8 = (unsigned __int8)a2;
  v9 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  KsepDsEventRequestPowerIrp(*(_QWORD *)(a1 + 8), a1, v11, v8, v7, v9);
  if ( a6 )
    *a6 = v11;
  return v9;
}
