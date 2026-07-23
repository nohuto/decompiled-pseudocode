/*
 * XREFs of IvtUpdateTranslationStructures @ 0x1404F59EC
 * Callers:
 *     IvtAttachDeviceDomainInternal @ 0x14056AEA0 (IvtAttachDeviceDomainInternal.c)
 *     IvtProcessDeviceExceptions @ 0x140B54844 (IvtProcessDeviceExceptions.c)
 *     HalpIvtpInitializeReservedDomain @ 0x140B55448 (HalpIvtpInitializeReservedDomain.c)
 * Callees:
 *     IvtUpdateContextEntry @ 0x1404C1800 (IvtUpdateContextEntry.c)
 *     IvtUpdateScalableModeTranslationStructures @ 0x1404C4C90 (IvtUpdateScalableModeTranslationStructures.c)
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
