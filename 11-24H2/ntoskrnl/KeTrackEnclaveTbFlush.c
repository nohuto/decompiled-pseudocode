/*
 * XREFs of KeTrackEnclaveTbFlush @ 0x1405B7EF4
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x14046CF84 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1404C420C (MiProtectEnclavePages.c)
 * Callees:
 *     KiEnclsStatus @ 0x14046D4CC (KiEnclsStatus.c)
 *     KiEncls @ 0x1406ABEA0 (KiEncls.c)
 */

__int64 __fastcall KeTrackEnclaveTbFlush(__int64 a1)
{
  int v1; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  v1 = KiEncls(12LL, 0LL, a1, 0LL);
  return KiEnclsStatus(v1);
}
