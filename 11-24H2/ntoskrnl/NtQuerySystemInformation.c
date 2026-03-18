/*
 * XREFs of NtQuerySystemInformation @ 0x140AE0FD0
 * Callers:
 *     HalpTimerConfigureQpcBypass @ 0x14054A67C (HalpTimerConfigureQpcBypass.c)
 *     AlpcpInitSystem @ 0x1407422BC (AlpcpInitSystem.c)
 * Callees:
 *     KeQueryPrimaryGroupThread @ 0x140485128 (KeQueryPrimaryGroupThread.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 */

int __fastcall NtQuerySystemInformation(unsigned int a1, unsigned __int64 a2, unsigned int a3, unsigned int *a4)
{
  __int16 *p_PrimaryGroupThread; // rdx
  unsigned int *v6; // r11
  unsigned int v8; // r10d
  unsigned int v9; // r8d
  __int16 PrimaryGroupThread; // [rsp+40h] [rbp+8h] BYREF

  p_PrimaryGroupThread = 0LL;
  v6 = a4;
  PrimaryGroupThread = 0;
  v8 = a1;
  switch ( a1 )
  {
    case 8u:
    case 0x17u:
    case 0x2Au:
    case 0x3Du:
    case 0x53u:
    case 0x64u:
    case 0x6Cu:
    case 0x8Du:
      PrimaryGroupThread = KeQueryPrimaryGroupThread((__int64)KeGetCurrentThread());
      goto LABEL_3;
    case 0x49u:
LABEL_3:
      p_PrimaryGroupThread = &PrimaryGroupThread;
      v9 = 2;
      return ExpQuerySystemInformation(v8, p_PrimaryGroupThread, v9, a2, a3, v6);
    case 0x6Bu:
    case 0x79u:
    case 0xB4u:
    case 0xD2u:
    case 0xD3u:
    case 0xDEu:
    case 0xE7u:
    case 0xEEu:
    case 0xEFu:
    case 0xF0u:
    case 0xFEu:
      return -1073741821;
    default:
      v9 = 0;
      return ExpQuerySystemInformation(v8, p_PrimaryGroupThread, v9, a2, a3, v6);
  }
}
