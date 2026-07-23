/*
 * XREFs of HsaInvalidateDTE @ 0x1405707F4
 * Callers:
 *     HsaUpdateDeviceTableEntry @ 0x14043E974 (HsaUpdateDeviceTableEntry.c)
 * Callees:
 *     HsaIommuWaitCommand @ 0x14043E718 (HsaIommuWaitCommand.c)
 *     HsaIommuSendCommand @ 0x14043E74C (HsaIommuSendCommand.c)
 */

__int64 __fastcall HsaInvalidateDTE(__int64 *a1, unsigned __int16 a2, unsigned int a3)
{
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[1] = 0LL;
  v6[0] = a2 | 0x2000000000000000LL;
  HsaIommuSendCommand(a1, v6, a3);
  return HsaIommuWaitCommand((__int64)a1, a3);
}
