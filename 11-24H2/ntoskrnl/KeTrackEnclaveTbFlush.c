/*
 * XREFs of KeTrackEnclaveTbFlush @ 0x1405BA8C4
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1403D172C (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1404CACEC (MiProtectEnclavePages.c)
 * Callees:
 *     KiEnclsStatus @ 0x1403D1C7C (KiEnclsStatus.c)
 *     KiEncls @ 0x1406AAF00 (KiEncls.c)
 */

__int64 __fastcall KeTrackEnclaveTbFlush(__int64 a1)
{
  int v1; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  v1 = KiEncls(12LL, 0LL, a1, 0LL);
  return KiEnclsStatus(v1);
}
