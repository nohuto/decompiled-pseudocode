/*
 * XREFs of IvtUpdateTranslationStructures @ 0x1404F590C
 * Callers:
 *     IvtAttachDeviceDomainInternal @ 0x14056A710 (IvtAttachDeviceDomainInternal.c)
 *     IvtProcessDeviceExceptions @ 0x140B427F4 (IvtProcessDeviceExceptions.c)
 *     HalpIvtpInitializeReservedDomain @ 0x140B433F8 (HalpIvtpInitializeReservedDomain.c)
 * Callees:
 *     IvtUpdateContextEntry @ 0x1404C7474 (IvtUpdateContextEntry.c)
 *     IvtUpdateScalableModeTranslationStructures @ 0x1404C8F20 (IvtUpdateScalableModeTranslationStructures.c)
 */

__int64 __fastcall IvtUpdateTranslationStructures(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  int v8; // [rsp+20h] [rbp-28h]

  if ( *(_BYTE *)(a1 + 320) )
    return IvtUpdateScalableModeTranslationStructures(a1, a2, a3, a4, v8, a6);
  else
    return IvtUpdateContextEntry(a1, *(unsigned int **)(a2 + 56), a6, a4, a7);
}
