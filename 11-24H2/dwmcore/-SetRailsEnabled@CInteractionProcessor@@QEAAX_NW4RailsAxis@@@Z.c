/*
 * XREFs of ?SetRailsEnabled@CInteractionProcessor@@QEAAX_NW4RailsAxis@@@Z @ 0x1801FA50C
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x1800901C0 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?SetRailsEnabled@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAX_NW4RailsAxis@@@Z @ 0x1801FA64C (-SetRailsEnabled@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

char __fastcall CInteractionProcessor::SetRailsEnabled(_BYTE *a1, char a2, int a3)
{
  char v6; // cl
  char v7; // cl
  char v8; // al
  char result; // al
  char v10; // cl
  char v11; // bl
  char v12; // cl
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    if ( a3 != 1 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v12 = a1[148];
    if ( ((v12 & 0x20) != 0) != a2 )
      a1[148] = (32 * a2) | v12 & 0xDF | 1;
    if ( ((a1[308] & 0x20) != 0) != a2 )
    {
      v7 = a1[308] & 0xDF;
      v8 = 32 * a2;
      goto LABEL_6;
    }
  }
  else
  {
    v6 = a1[148];
    if ( ((v6 & 0x10) != 0) != a2 )
      a1[148] = (16 * a2) | v6 & 0xEF | 1;
    if ( ((a1[308] & 0x10) != 0) != a2 )
    {
      v7 = a1[308] & 0xEF;
      v8 = 16 * a2;
LABEL_6:
      a1[308] = v8 | v7 | 1;
    }
  }
  CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::SetRailsEnabled(a1 + 320);
  if ( a3 )
  {
    result = (a1[628] & 0x20) != 0;
    if ( result == a2 )
      return result;
    v10 = a1[628] & 0xDF;
    v11 = 32 * a2;
  }
  else
  {
    result = (a1[628] & 0x10) != 0;
    if ( result == a2 )
      return result;
    v10 = a1[628] & 0xEF;
    v11 = 16 * a2;
  }
  a1[628] = v11 | v10 | 1;
  return result;
}
