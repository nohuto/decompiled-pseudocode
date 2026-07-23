/*
 * XREFs of PopCreateIdlePhaseWatchdog @ 0x140C349A8
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     ZwPowerInformation @ 0x1406A7F90 (ZwPowerInformation.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  xmmword_140F07948 = 0LL;
  *(_QWORD *)&xmmword_140F07948 = 0LL;
  PopPdcIdlePhaseWatchdogContext = OutputBuffer;
  return result;
}
