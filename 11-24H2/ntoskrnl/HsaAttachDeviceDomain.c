/*
 * XREFs of HsaAttachDeviceDomain @ 0x14056FC40
 * Callers:
 *     <none>
 * Callees:
 *     HsaAttachDeviceDomainInternal @ 0x14043E2A0 (HsaAttachDeviceDomainInternal.c)
 */

__int64 __fastcall HsaAttachDeviceDomain(__int64 a1, __int64 a2, _BYTE *a3)
{
  return HsaAttachDeviceDomainInternal(a1, a2, a3);
}
