/*
 * XREFs of PopCreateIdlePhaseWatchdog @ 0x140C32868
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     ZwPowerInformation @ 0x1406A6FF0 (ZwPowerInformation.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 PopCreateIdlePhaseWatchdog()
{
  __int64 result; // rax
  int InputBuffer; // [rsp+30h] [rbp-68h] BYREF
  int v2; // [rsp+34h] [rbp-64h] BYREF
  __int64 OutputBuffer; // [rsp+A0h] [rbp+8h] BYREF

  OutputBuffer = 0LL;
  memset_0(&v2, 0, 0x5CuLL);
  InputBuffer = 21;
  ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, &OutputBuffer, 8u);
  result = OutputBuffer;
  *(_OWORD *)&xmmword_140F07648 = 0LL;
  xmmword_140F07648 = 0LL;
  PopPdcIdlePhaseWatchdogContext = OutputBuffer;
  return result;
}
