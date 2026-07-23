/*
 * XREFs of PnprGetMillisecondCounter @ 0x140B55BE4
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x1405A4B20 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x1405A51C4 (PnprSwapFinalize.c)
 *     PnpReplacePartitionUnit @ 0x14072C230 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceDevices @ 0x140B565F4 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x140B56BC4 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x140B57224 (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x140B572A4 (PnprWakeProcessors.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
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
    v2 = v3 + dword_140E663A0 - dword_140E663A4;
  dword_140E663A4 = v3;
  result = v2;
  dword_140E663A0 = v2;
  return result;
}
