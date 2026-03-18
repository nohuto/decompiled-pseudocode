/*
 * XREFs of IvtLegacyUpdateTranslationStructures @ 0x14056DDFC
 * Callers:
 *     IvtLegacyAttachDeviceDomainInternal @ 0x14056C85C (IvtLegacyAttachDeviceDomainInternal.c)
 *     IvtLegacyProcessDeviceExceptions @ 0x140B4250C (IvtLegacyProcessDeviceExceptions.c)
 *     HalpIvtpLegacyInitializeReservedDomain @ 0x140B434E4 (HalpIvtpLegacyInitializeReservedDomain.c)
 * Callees:
 *     IvtUpdateContextEntry @ 0x1404C7474 (IvtUpdateContextEntry.c)
 *     IvtLegacyUpdateScalableModeTranslationStructures @ 0x14056DCFC (IvtLegacyUpdateScalableModeTranslationStructures.c)
 */

__int64 __fastcall IvtLegacyUpdateTranslationStructures(
        __int64 a1,
        int *a2,
        __int64 a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+38h] [rbp-20h]

  if ( *(_BYTE *)(a1 + 320) )
    return IvtLegacyUpdateScalableModeTranslationStructures(a1, a2, a3, a4, a5, v10, a7, v11, a9);
  else
    return IvtUpdateContextEntry(a1, (unsigned int *)a2, a7, (__int64)a4, a9);
}
