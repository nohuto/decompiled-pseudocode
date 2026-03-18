/*
 * XREFs of ?SetRailsEnabled@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAX_NW4RailsAxis@@@Z @ 0x180206134
 * Callers:
 *     ?SetRailsEnabled@CInteractionProcessor@@QEAAX_NW4RailsAxis@@@Z @ 0x180205FF4 (-SetRailsEnabled@CInteractionProcessor@@QEAAX_NW4RailsAxis@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::SetRailsEnabled(
        __int64 a1,
        char a2,
        int a3)
{
  char v4; // cl
  char result; // al
  char v6; // cl
  char v7; // dl
  char v8; // cl
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    v4 = *(_BYTE *)(a1 + 148);
    result = (v4 & 0x10) != 0;
    if ( result == a2 )
      return result;
    v6 = v4 & 0xEF;
    v7 = 16 * a2;
    goto LABEL_4;
  }
  if ( a3 != 1 )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  v8 = *(_BYTE *)(a1 + 148);
  result = (v8 & 0x20) != 0;
  if ( result != a2 )
  {
    v6 = v8 & 0xDF;
    v7 = 32 * a2;
LABEL_4:
    *(_BYTE *)(a1 + 148) = v7 | v6 | 1;
  }
  return result;
}
