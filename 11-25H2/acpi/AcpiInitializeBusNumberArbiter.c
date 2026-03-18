/*
 * XREFs of AcpiInitializeBusNumberArbiter @ 0x14009BFE8
 * Callers:
 *     AcpiArblibInitializeArbiter @ 0x140055D9C (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 *     ArbInitializeArbiterInstance @ 0x140097CD8 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall AcpiInitializeBusNumberArbiter(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // r9

  AcpiGetDriverProxyEndpoint((_QWORD *)(a1 + 256), (__int64)AcpiArblibUnpackRequirement);
  AcpiGetDriverProxyEndpoint((_QWORD *)(v1 + 128), (__int64)AcpiArblibPackResource);
  AcpiGetDriverProxyEndpoint((_QWORD *)(v2 + 136), (__int64)AcpiArblibUnpackResource);
  AcpiGetDriverProxyEndpoint((_QWORD *)(v3 + 144), (__int64)AcpiArblibScoreRequirement);
  return ArbInitializeArbiterInstance(v5, *(_QWORD *)(v4 + 768), 6, v6);
}
