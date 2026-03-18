/*
 * XREFs of KiEncls @ 0x14069FC30
 * Callers:
 *     KeRemoveEnclavePage @ 0x1403FC880 (KeRemoveEnclavePage.c)
 *     KeAddEnclavePage @ 0x1403FD3F8 (KeAddEnclavePage.c)
 *     KeBlockEnclavePage @ 0x1405B67A4 (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x1405B67EC (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x1405B68AC (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x1405B69AC (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x1405B69E8 (KeOutPageEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x1405B6AA0 (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x14072FD04 (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x14072FE30 (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x14072FEB4 (KeInitializeEnclave.c)
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
