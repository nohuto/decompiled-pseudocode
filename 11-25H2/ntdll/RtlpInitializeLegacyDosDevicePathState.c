/*
 * XREFs of RtlpInitializeLegacyDosDevicePathState @ 0x1801217A4
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800B1738 (LdrpInitializeExecutionOptions.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x18011A088 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpInitializeLegacyDosDevicePathState(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      dword_1801D0294 = 1;
  }
  else
  {
    dword_1801D0294 = 2;
  }
}
