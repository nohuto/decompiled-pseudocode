/*
 * XREFs of ?MarkAsEvaluated@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x1800729F8
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x18000DE88 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?EnableAllSpatialCapabilities@AtmosCheck@@AEAAXXZ @ 0x180150A0C (-EnableAllSpatialCapabilities@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall AtmosCheck::MarkAsEvaluated(struct AtmosCheck::EndpointSpecificSpatialTechInfo *a1)
{
  _BYTE *v1; // rcx
  __int64 v2; // rax

  v1 = (char *)a1 + 1;
  v2 = 7LL;
  do
  {
    *v1 = 1;
    v1 += 32;
    --v2;
  }
  while ( v2 );
}
