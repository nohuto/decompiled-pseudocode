/*
 * XREFs of PnprGetMillisecondCounter @ 0x140B43B94
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x1405A4320 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x1405A49C4 (PnprSwapFinalize.c)
 *     PnpReplacePartitionUnit @ 0x1407222A0 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceDevices @ 0x140B445A4 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x140B44B74 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x140B451D4 (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x140B45254 (PnprWakeProcessors.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall PnprGetMillisecondCounter(char a1)
{
  unsigned int v2; // edi
  LONGLONG v3; // rax
  __int128 v4; // rtt
  __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v4 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = v4 / PerformanceFrequency.QuadPart;
  if ( !a1 )
    v2 = v3 + dword_140E65FDC - dword_140E65FD8;
  dword_140E65FD8 = v3;
  result = v2;
  dword_140E65FDC = v2;
  return result;
}
