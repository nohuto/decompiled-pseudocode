/*
 * XREFs of IsFirmwareActivateWithoutResetEnabled @ 0x140021C34
 * Callers:
 *     FirmwareActivate @ 0x14001F854 (FirmwareActivate.c)
 *     NVMeFirmwareActivateCompletion @ 0x140022470 (NVMeFirmwareActivateCompletion.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1400251A0 (NVMeWriteBufferFirmwareActivateCompletion.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsFirmwareActivateWithoutResetEnabled(__int64 a1)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *(_QWORD *)(a1 + 1560);
  v2 = 0;
  if ( v1 && (*(_BYTE *)(v1 + 260) & 0x10) != 0 )
    return (*(_BYTE *)(a1 + 56) & 0x20) == 0;
  return v2;
}
