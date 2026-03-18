/*
 * XREFs of KiInitializeProcessor @ 0x140B565CC
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140B575C0 (KiInitializeDynamicProcessorDpc.c)
 *     KeInitSystem @ 0x140C60CE0 (KeInitSystem.c)
 * Callees:
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     KeInitializeGate @ 0x1404892A8 (KeInitializeGate.c)
 *     KeInitializeThreadedDpc @ 0x1404FA5C0 (KeInitializeThreadedDpc.c)
 *     KiCreateDpcLimitsProcessorConfiguration @ 0x1405B4BAC (KiCreateDpcLimitsProcessorConfiguration.c)
 *     KiInitializeDpcList @ 0x1405C7118 (KiInitializeDpcList.c)
 *     KiApplyProcessorDpcLimits @ 0x140B55BCC (KiApplyProcessorDpcLimits.c)
 */

__int64 __fastcall KiInitializeProcessor(__int64 a1)
{
  int v1; // esi
  int v3; // ecx
  int v4; // ecx
  int v6[10]; // [rsp+20h] [rbp-28h] BYREF

  v1 = KeDpcWatchdogProfileBufferSizeBytes;
  memset(v6, 0, 32);
  if ( KeThreadDpcEnable )
  {
    KeInitializeGate(a1 + 33600, 0);
    KiInitializeDpcList((_QWORD *)(a1 + 14448));
    *(_QWORD *)(a1 + 14464) = 0LL;
    *(_DWORD *)(a1 + 14472) = 0;
  }
  KeInitializeThreadedDpc((PRKDPC)(a1 + 35544), (PKDEFERRED_ROUTINE)KiDpcWatchdog, (PVOID)*(unsigned int *)(a1 + 36));
  v3 = *(_DWORD *)(a1 + 36);
  *(_BYTE *)(a1 + 35545) = 2;
  if ( !*(_QWORD *)(a1 + 35600) )
    *(_WORD *)(a1 + 35546) = v3 + 2048;
  KeInitializeDpc((PRKDPC)(a1 + 41296), (PKDEFERRED_ROUTINE)KiFreeTemporaryStacks, 0LL);
  v4 = *(_DWORD *)(a1 + 36);
  *(_BYTE *)(a1 + 41297) = 2;
  if ( !*(_QWORD *)(a1 + 41352) )
    *(_WORD *)(a1 + 41298) = v4 + 2048;
  KiCreateDpcLimitsProcessorConfiguration((__int64)v6, 0, v1);
  return KiApplyProcessorDpcLimits(a1, v6);
}
