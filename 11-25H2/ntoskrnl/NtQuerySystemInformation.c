/*
 * XREFs of NtQuerySystemInformation @ 0x1409DB410
 * Callers:
 *     HalpTimerConfigureQpcBypass @ 0x140547D8C (HalpTimerConfigureQpcBypass.c)
 *     AlpcpInitSystem @ 0x14073629C (AlpcpInitSystem.c)
 * Callees:
 *     KeQueryPrimaryGroupThread @ 0x14048489C (KeQueryPrimaryGroupThread.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 */

__int64 __fastcall NtQuerySystemInformation(unsigned int a1)
{
  __int16 *p_PrimaryGroupThread; // rdx
  unsigned int v2; // r10d
  __int16 PrimaryGroupThread; // [rsp+40h] [rbp+8h] BYREF

  p_PrimaryGroupThread = 0LL;
  PrimaryGroupThread = 0;
  v2 = a1;
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
      goto LABEL_6;
    case 0x49u:
LABEL_6:
      p_PrimaryGroupThread = &PrimaryGroupThread;
      return ExpQuerySystemInformation(v2, p_PrimaryGroupThread);
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
      return 3221225475LL;
    default:
      return ExpQuerySystemInformation(v2, p_PrimaryGroupThread);
  }
}
