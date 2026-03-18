/*
 * XREFs of PpmPerfApplyHiddenProcessorState @ 0x1405D2984
 * Callers:
 *     PpmPerfApplyProcessorStates @ 0x14029EE10 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     PpmEventProcessorPerfStateChange @ 0x14029E7D8 (PpmEventProcessorPerfStateChange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PpmPerfApplyHiddenProcessorState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  bool v6; // si
  int v7; // eax
  int v8; // edx

  v4 = a3;
  v6 = *(_BYTE *)(a1 + 494) || *(_BYTE *)(a1 + 489) != 0xFD && (_BYTE)a3;
  v7 = *(_DWORD *)(a1 + 804);
  v8 = *(_DWORD *)(a2 + 120);
  if ( (_BYTE)a3 )
  {
    *(_DWORD *)(a2 + 120) = 0;
LABEL_9:
    LOBYTE(a4) = a3;
    LOBYTE(a3) = v6;
    *(_DWORD *)(a2 + 128) = *(_DWORD *)(a2 + 80);
    *(_DWORD *)(a2 + 124) = *(_DWORD *)(a2 + 84);
    *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 808);
    *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 824);
    *(_OWORD *)(a2 + 96) = *(_OWORD *)(a1 + 840);
    *(_QWORD *)(a2 + 112) = *(_QWORD *)(a1 + 856);
    LOBYTE(v7) = guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 8), a2 + 64, a3, a4);
    goto LABEL_10;
  }
  if ( v8 != v7 )
    goto LABEL_9;
LABEL_10:
  if ( *(_DWORD *)(a2 + 16) == 1 && !v4 )
    LOBYTE(v7) = PpmEventProcessorPerfStateChange(*(_QWORD *)a2, v6, 0);
  return v7;
}
