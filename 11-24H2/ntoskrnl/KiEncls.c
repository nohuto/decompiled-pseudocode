/*
 * XREFs of KiEncls @ 0x1406ABEA0
 * Callers:
 *     KeRemoveEnclavePage @ 0x14046D340 (KeRemoveEnclavePage.c)
 *     KeAddEnclavePage @ 0x14046DEB8 (KeAddEnclavePage.c)
 *     KeBlockEnclavePage @ 0x1405B7BF8 (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x1405B7C40 (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x1405B7D00 (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x1405B7E00 (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x1405B7E3C (KeOutPageEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x1405B7EF4 (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x140739EC4 (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x140739FF0 (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x14073A074 (KeInitializeEnclave.c)
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
