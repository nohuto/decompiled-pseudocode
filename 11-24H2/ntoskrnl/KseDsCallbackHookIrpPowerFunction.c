/*
 * XREFs of KseDsCallbackHookIrpPowerFunction @ 0x1405C83F0
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDevicePowerIrp @ 0x1405C8B4C (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x1405C9590 (KsepDsEventSystemPowerIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsCallbackHookIrpPowerFunction(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rcx
  int v5; // ebx
  int v7; // r14d
  unsigned int v8; // eax
  unsigned int v9; // r15d

  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  LOBYTE(v5) = 0;
  v7 = *(unsigned __int8 *)(v4 + 1);
  if ( (unsigned int)(v7 - 2) <= 1 )
  {
    v3 = *(_DWORD *)(v4 + 16);
    v5 = *(_DWORD *)(v4 + 24);
    if ( v3 == 1 )
      guard_dispatch_icall_no_overrides(a1, a2);
  }
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2);
  v8 = guard_dispatch_icall_no_overrides(a1, a2);
  v9 = v8;
  if ( (unsigned int)(v7 - 2) <= 1 )
  {
    if ( v3 )
    {
      if ( v3 == 1 )
        KsepDsEventDevicePowerIrp(*(_QWORD *)(a1 + 8), a1, a2, v7, 1, v5, v8);
    }
    else
    {
      KsepDsEventSystemPowerIrp(*(_QWORD *)(a1 + 8), a1, a2, v7, 0, v5, v8);
    }
  }
  return v9;
}
