/*
 * XREFs of PnprGetMillisecondCounter @ 0x140B53B94
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x1405A7B30 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x1405A81D4 (PnprSwapFinalize.c)
 *     PnpReplacePartitionUnit @ 0x14072E220 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceDevices @ 0x140B545A4 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x140B54B74 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x140B551D4 (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x140B55254 (PnprWakeProcessors.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
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
    v2 = v3 + dword_140E6627C - dword_140E66278;
  dword_140E66278 = v3;
  result = v2;
  dword_140E6627C = v2;
  return result;
}
