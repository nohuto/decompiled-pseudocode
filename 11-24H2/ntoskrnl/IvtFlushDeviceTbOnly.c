/*
 * XREFs of IvtFlushDeviceTbOnly @ 0x14056B8B0
 * Callers:
 *     <none>
 * Callees:
 *     IvtIommuWaitCommand @ 0x140374F34 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x140375084 (IvtIommuSendCommand.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall IvtFlushDeviceTbOnly(__int64 a1, unsigned __int16 a2, char a3)
{
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  v5[1] = 0x7FFFFFFFFFFFF001LL;
  v5[0] = ((a3 & 0x1F | ((unsigned __int64)a2 << 16)) << 16) | 3;
  IvtIommuSendCommand(a1, v5, 0);
  return IvtIommuWaitCommand(a1, 0, 0);
}
