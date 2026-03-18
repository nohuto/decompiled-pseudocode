/*
 * XREFs of RtlSetSystemBootStatus @ 0x140A6C590
 * Callers:
 *     PopWriteBsdPoInfo @ 0x140427FF8 (PopWriteBsdPoInfo.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x140749718 (PopRecordLongPowerButtonPressDetected.c)
 *     PopCheckAndClearBootError @ 0x140C2D62C (PopCheckAndClearBootError.c)
 * Callees:
 *     ZwPowerInformation @ 0x1406A6FF0 (ZwPowerInformation.c)
 */

NTSTATUS __fastcall RtlSetSystemBootStatus(int a1, __int64 a2, int a3, void *a4)
{
  _DWORD v5[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-28h]
  int v7; // [rsp+40h] [rbp-20h]
  _QWORD InputBuffer[3]; // [rsp+48h] [rbp-18h] BYREF

  v5[0] = a1;
  v6 = a2;
  v7 = a3;
  v5[1] = 0;
  InputBuffer[0] = 32LL;
  InputBuffer[1] = 1LL;
  InputBuffer[2] = v5;
  return ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x18u, a4, a4 != 0LL ? 4 : 0);
}
