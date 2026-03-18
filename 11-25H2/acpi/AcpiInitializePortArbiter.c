/*
 * XREFs of AcpiInitializePortArbiter @ 0x1400A2664
 * Callers:
 *     AcpiArblibInitializeArbiter @ 0x140055D9C (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 *     ArbInitializeArbiterInstance @ 0x140097CD8 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall AcpiInitializePortArbiter(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // r9

  AcpiGetDriverProxyEndpoint((_QWORD *)(a1 + 256), (__int64)AcpiArblibUnpackRequirement);
  AcpiGetDriverProxyEndpoint((_QWORD *)(v1 + 128), (__int64)AcpiArblibPackResource);
  AcpiGetDriverProxyEndpoint((_QWORD *)(v2 + 136), (__int64)AcpiArblibUnpackResource);
  AcpiGetDriverProxyEndpoint((_QWORD *)(v3 + 144), (__int64)AcpiArblibScoreRequirement);
  AcpiGetDriverProxyEndpoint((_QWORD *)(v4 + 248), (__int64)&AcpiPortarbFindSuitableRange);
  AcpiGetDriverProxyEndpoint((_QWORD *)(v5 + 256), (__int64)AcpiPortarbAddAllocation);
  AcpiGetDriverProxyEndpoint((_QWORD *)(v6 + 264), (__int64)AcpiPortarbBacktrackAllocation);
  return ArbInitializeArbiterInstance(v8, *(_QWORD *)(v7 + 768), 1, v9);
}
