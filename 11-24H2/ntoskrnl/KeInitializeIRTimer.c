/*
 * XREFs of KeInitializeIRTimer @ 0x1404BD12C
 * Callers:
 *     ExAllocateTimerInternal2 @ 0x1403ADEE0 (ExAllocateTimerInternal2.c)
 *     PopInitializeIRTimer @ 0x1405CA5AC (PopInitializeIRTimer.c)
 *     PopPowerButtonWorkCallback @ 0x1405D58C0 (PopPowerButtonWorkCallback.c)
 *     PopThermalZoneAdd @ 0x140752BE0 (PopThermalZoneAdd.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x14075B47C (PopIdleInitAoAcDozeS4Timer.c)
 *     NtCreateTimer2 @ 0x140A16910 (NtCreateTimer2.c)
 *     PopPowerAggregatorInitialize @ 0x140C6A210 (PopPowerAggregatorInitialize.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1403AE058 (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeIRTimer(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4, int a5)
{
  int v7; // r9d
  __int64 result; // rax
  unsigned __int8 v9; // dl

  v7 = a5 | 2;
  if ( ExAusterityResilientTimersEnabled && *((_DWORD *)&ExpIRTimerDescs + 6 * *a4 + 5) == 1 )
    v7 = a5 | 0x22;
  KiInitializeTimer2(a1, a2, a3, v7);
  result = *(unsigned __int8 *)a4;
  *(_BYTE *)(a1 + 2) = result;
  v9 = *((_BYTE *)a4 + 2);
  *(_BYTE *)(a1 + 3) = v9;
  if ( (unsigned __int8)result >= 0x14u || v9 >= LOBYTE((&ExpIRTimerDescs)[3 * result + 1]) )
    __fastfail(5u);
  return result;
}
