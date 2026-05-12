/*
 * XREFs of StorAdapterNeedsUpdate @ 0x140009EA8
 * Callers:
 *     StorEtwEnableCallback @ 0x140009BE0 (StorEtwEnableCallback.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 */

char __fastcall StorAdapterNeedsUpdate(__int64 a1, char a2)
{
  __int64 v2; // rax
  char v4; // bp
  char v5; // r15
  char v6; // r14
  char v7; // si
  __int64 v8; // rdi
  char result; // al

  v2 = *(_QWORD *)(a1 + 608);
  v4 = StorIoPerformanceEventsEnabled;
  v5 = StorMiniportDiagnosticEventsEnabled;
  v6 = StorMiniportHealthEventsEnabled;
  v7 = StorMiniportOperationalEventsEnabled;
  if ( v2 && *(_QWORD *)(v2 + 176) && ((*(_BYTE *)(a1 + 109) & 2) != 0) != a2 )
    return 1;
  v8 = a1 + 376;
  if ( (unsigned __int8)RaidIsAdapterControlSupported(a1 + 376, 20LL) )
  {
    if ( ((*(_BYTE *)(a1 + 110) & 8) != 0) != v7 )
      return 1;
  }
  if ( (unsigned __int8)RaidIsAdapterControlSupported(v8, 20LL) && ((*(_BYTE *)(a1 + 110) & 0x10) != 0) != v6
    || (unsigned __int8)RaidIsAdapterControlSupported(v8, 20LL) && ((*(_BYTE *)(a1 + 110) & 0x20) != 0) != v5 )
  {
    return 1;
  }
  result = RaidIsAdapterControlSupported(v8, 20LL);
  if ( result )
    return (*(_BYTE *)(a1 + 112) & 1) != v4;
  return result;
}
