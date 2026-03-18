/*
 * XREFs of KeTrackEnclaveTbFlush @ 0x1405B6AA0
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1403FC4C8 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1404CAFB0 (MiProtectEnclavePages.c)
 * Callees:
 *     KiEnclsStatus @ 0x1403FCA0C (KiEnclsStatus.c)
 *     KiEncls @ 0x14069FC30 (KiEncls.c)
 */

__int64 __fastcall KeTrackEnclaveTbFlush(__int64 a1)
{
  int v1; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  v1 = KiEncls(12LL, 0LL, a1, 0LL);
  return KiEnclsStatus(v1);
}
