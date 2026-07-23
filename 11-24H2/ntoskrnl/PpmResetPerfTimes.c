/*
 * XREFs of PpmResetPerfTimes @ 0x14044063C
 * Callers:
 *     PpmCheckReset @ 0x140440500 (PpmCheckReset.c)
 *     PpmResetPerfEngineForProcessor @ 0x140440520 (PpmResetPerfEngineForProcessor.c)
 *     PpmCheckProcessorInit @ 0x1405D41B0 (PpmCheckProcessorInit.c)
 *     PpmCheckResetProcessors @ 0x1405D41E0 (PpmCheckResetProcessors.c)
 * Callees:
 *     PpmSnapPerformanceAccumulation @ 0x14036E610 (PpmSnapPerformanceAccumulation.c)
 *     PpmResetPerformanceAccumulation @ 0x140440730 (PpmResetPerformanceAccumulation.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x140440784 (PpmHvSnapPerformanceAccumulation.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall PpmResetPerfTimes(__int64 a1)
{
  __int64 v1; // rdi
  _OWORD *v2; // rsi
  LARGE_INTEGER *v3; // rbp
  LARGE_INTEGER *v4; // rbx
  void *v5; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = (_OWORD *)(v1 + 32);
    v3 = *(LARGE_INTEGER **)(v1 + 88);
    if ( *(_BYTE *)(a1 + 68) )
    {
      v4 = (LARGE_INTEGER *)(a1 - 35248);
      PpmResetPerformanceAccumulation(a1 - 35248);
      PpmSnapPerformanceAccumulation(v4, 1u, 0, 0, v1 + 32, v3);
    }
    else
    {
      PpmHvSnapPerformanceAccumulation(a1, 1, 0, v1 + 32, *(_QWORD *)(v1 + 88));
    }
    v5 = *(void **)(v1 + 216);
    *(_OWORD *)(v1 + 160) = *v2;
    *(_OWORD *)(v1 + 176) = *(_OWORD *)(v1 + 48);
    *(_OWORD *)(v1 + 192) = *(_OWORD *)(v1 + 64);
    *(_QWORD *)(v1 + 208) = *(_QWORD *)(v1 + 80);
    memmove(v5, v3, 112 * v3[6].LowPart + 56);
    *(_QWORD *)(v1 + 8) = *(_QWORD *)v2;
    *(_QWORD *)v1 = *(_QWORD *)(v1 + 40);
    *(_QWORD *)(v1 + 16) = *(_QWORD *)(v1 + 48);
    result = *(unsigned int *)(v1 + 80);
    *(_DWORD *)(v1 + 24) = result;
  }
  return result;
}
