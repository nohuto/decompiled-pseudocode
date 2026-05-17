/*
 * XREFs of RtlpInitializeLegacyDosDevicePathState @ 0x18011FED4
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800887A8 (LdrpInitializeExecutionOptions.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x180116E44 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpInitializeLegacyDosDevicePathState(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      dword_1801CE294 = 1;
  }
  else
  {
    dword_1801CE294 = 2;
  }
}
