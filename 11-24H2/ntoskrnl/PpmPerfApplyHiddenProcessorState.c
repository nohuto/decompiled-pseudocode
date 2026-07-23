/*
 * XREFs of PpmPerfApplyHiddenProcessorState @ 0x1405D00A4
 * Callers:
 *     PpmPerfApplyProcessorStates @ 0x1402AF070 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     PpmEventProcessorPerfStateChange @ 0x1402AD2C8 (PpmEventProcessorPerfStateChange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PpmPerfApplyHiddenProcessorState(__int64 a1, __int64 a2, char a3)
{
  bool v5; // si
  int v6; // eax
  int v7; // edx

  v5 = *(_BYTE *)(a1 + 494) || *(_BYTE *)(a1 + 489) != 0xFD && a3;
  v6 = *(_DWORD *)(a1 + 804);
  v7 = *(_DWORD *)(a2 + 120);
  if ( a3 )
  {
    *(_DWORD *)(a2 + 120) = 0;
LABEL_9:
    *(_DWORD *)(a2 + 128) = *(_DWORD *)(a2 + 80);
    *(_DWORD *)(a2 + 124) = *(_DWORD *)(a2 + 84);
    *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 808);
    *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 824);
    *(_OWORD *)(a2 + 96) = *(_OWORD *)(a1 + 840);
    *(_QWORD *)(a2 + 112) = *(_QWORD *)(a1 + 856);
    LOBYTE(v6) = guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 8), a2 + 64);
    goto LABEL_10;
  }
  if ( v7 != v6 )
    goto LABEL_9;
LABEL_10:
  if ( *(_DWORD *)(a2 + 16) == 1 && !a3 )
    LOBYTE(v6) = PpmEventProcessorPerfStateChange(*(_QWORD *)a2, v5, 0);
  return v6;
}
