/*
 * XREFs of KiEncls @ 0x1406AAF00
 * Callers:
 *     KeRemoveEnclavePage @ 0x1403D1AF0 (KeRemoveEnclavePage.c)
 *     KeAddEnclavePage @ 0x14047424C (KeAddEnclavePage.c)
 *     KeBlockEnclavePage @ 0x1405BA5C8 (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x1405BA610 (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x1405BA6D0 (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x1405BA7D0 (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x1405BA80C (KeOutPageEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x1405BA8C4 (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x14073BF94 (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x14073C0C0 (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x14073C144 (KeInitializeEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEncls(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  __asm { encls }
  return result;
}
