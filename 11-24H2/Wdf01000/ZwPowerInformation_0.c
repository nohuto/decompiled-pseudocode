/*
 * XREFs of ZwPowerInformation_0 @ 0x1400852E2
 * Callers:
 *     SleepstudyHelperInitializeOnce @ 0x1400DAF20 (SleepstudyHelperInitializeOnce.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwPowerInformation_0(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  return ZwPowerInformation(InformationLevel, InputBuffer, InputBufferLength, OutputBuffer, OutputBufferLength);
}
