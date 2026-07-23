/*
 * XREFs of RtlpInitializeLegacyDosDevicePathState @ 0x18011E104
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800A4268 (LdrpInitializeExecutionOptions.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x180111E30 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpInitializeLegacyDosDevicePathState(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      dword_1801CD294 = 1;
  }
  else
  {
    dword_1801CD294 = 2;
  }
}
