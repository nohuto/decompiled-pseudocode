/*
 * XREFs of KseDsCallbackHookIrpPowerFunction @ 0x1405CACD0
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDevicePowerIrp @ 0x1405CB42C (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x1405CBE70 (KsepDsEventSystemPowerIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsCallbackHookIrpPowerFunction(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 v6; // rcx
  int v7; // ebx
  int v9; // r14d
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // r15d

  v5 = 0;
  v6 = *(_QWORD *)(a2 + 184);
  LOBYTE(v7) = 0;
  v9 = *(unsigned __int8 *)(v6 + 1);
  if ( (unsigned int)(v9 - 2) <= 1 )
  {
    v5 = *(_DWORD *)(v6 + 16);
    v7 = *(_DWORD *)(v6 + 24);
    if ( v5 == 1 )
      guard_dispatch_icall_no_overrides(a1, a2, KseDsCompletionHookForPowerDevice, 0LL);
  }
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2, a3, a4);
  v12 = guard_dispatch_icall_no_overrides(a1, a2, v10, v11);
  v13 = v12;
  if ( (unsigned int)(v9 - 2) <= 1 )
  {
    if ( v5 )
    {
      if ( v5 == 1 )
        KsepDsEventDevicePowerIrp(*(_QWORD *)(a1 + 8), a1, a2, v9, 1, v7, v12);
    }
    else
    {
      KsepDsEventSystemPowerIrp(*(_QWORD *)(a1 + 8), a1, a2, v9, 0, v7, v12);
    }
  }
  return v13;
}
