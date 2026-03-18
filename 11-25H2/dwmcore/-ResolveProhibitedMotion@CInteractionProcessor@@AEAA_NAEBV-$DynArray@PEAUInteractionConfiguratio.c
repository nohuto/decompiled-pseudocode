/*
 * XREFs of ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801F0DF8
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801F05F8 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801F2308 (--$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInterac.c)
 *     ??$ResolveProhibitedMotion@UDwmTouchInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801F273C (--$ResolveProhibitedMotion@UDwmTouchInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractio.c)
 */

char __fastcall CInteractionProcessor::ResolveProhibitedMotion(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v6; // r8
  __int64 v9; // rdi
  char v11; // al

  v6 = 1;
  v9 = 0LL;
  while ( (unsigned int)v9 < *(_DWORD *)(a2 + 24) )
  {
    switch ( *(_DWORD *)(a1 + 788) )
    {
      case 2:
        v11 = CInteractionProcessor::ResolveProhibitedMotion<DwmTouchInteractionConfigurationPrimitive,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
                a1,
                *(_QWORD *)(*(_QWORD *)a2 + 8 * v9) + 72LL,
                a3,
                a4);
        goto LABEL_7;
      case 3:
        v11 = CInteractionProcessor::ResolveProhibitedMotion<DwmTouchpadInteractionConfigurationPrimitive,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
                a1,
                *(_QWORD *)(*(_QWORD *)a2 + 8 * v9) + 104LL,
                a3,
                a4);
LABEL_7:
        v6 = v11;
        goto LABEL_8;
      case 4:
        v11 = CInteractionProcessor::ResolveProhibitedMotion<DwmTouchInteractionConfigurationPrimitive,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
                a1,
                *(_QWORD *)(*(_QWORD *)a2 + 8 * v9) + 40LL,
                a3,
                a4);
        goto LABEL_7;
    }
    if ( *(_DWORD *)(a1 + 788) != 5 )
    {
      if ( *(_DWORD *)(a1 + 788) != 6 )
      {
        *(_WORD *)a3 = 0;
        *(_DWORD *)(a3 + 4) = 0;
        *(_DWORD *)(a3 + 8) = 0;
        *(_DWORD *)(a3 + 12) = 0;
        *a4 = *(_DWORD *)(a1 + 784);
        goto LABEL_8;
      }
      v11 = CInteractionProcessor::ResolveProhibitedMotion<DwmTouchInteractionConfigurationPrimitive,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
              a1,
              *(_QWORD *)(*(_QWORD *)a2 + 8 * v9) + 8LL,
              a3,
              a4);
      goto LABEL_7;
    }
    if ( **(_DWORD **)(*(_QWORD *)a2 + 8 * v9) )
    {
      *(_WORD *)a3 = 0;
      *(_DWORD *)(a3 + 4) = 0;
      *(_DWORD *)(a3 + 8) = 0;
      *(_DWORD *)(a3 + 12) = 0;
      v6 = 0;
      *a4 = *(_DWORD *)(a1 + 784);
      return v6;
    }
LABEL_8:
    v9 = (unsigned int)(v9 + 1);
    if ( !v6 )
      return v6;
  }
  return v6;
}
