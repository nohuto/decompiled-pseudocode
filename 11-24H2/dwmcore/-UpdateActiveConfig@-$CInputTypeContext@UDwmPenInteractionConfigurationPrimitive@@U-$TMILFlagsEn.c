/*
 * XREFs of ?UpdateActiveConfig@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAXAEBUDwmPenInteractionConfigurationPrimitive@@@Z @ 0x1801E8818
 * Callers:
 *     ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x1801E82A0 (-ConfigureInteractionContextIfNecessary@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimi.c)
 * Callees:
 *     ??$UpdateActiveConfig@UDwmTouchInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXAEBUDwmTouchInteractionConfigurationPrimitive@@@Z @ 0x1801E807C (--$UpdateActiveConfig@UDwmTouchInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLo.c)
 */

__int64 __fastcall CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::UpdateActiveConfig(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // xmm0_8
  int v4; // eax
  int *v5; // rcx
  bool v6; // zf
  __int64 result; // rax

  v2 = *a2;
  v4 = *((_DWORD *)a2 + 2);
  v5 = (int *)(a1 + 8);
  *(_BYTE *)(a1 + 148) &= ~1u;
  v6 = (*(_BYTE *)(a1 + 148) & 0x40) == 0;
  *(_QWORD *)v5 = v2;
  v5[2] = v4;
  if ( v6 )
    InputTraceLogging::GestureTargeting::UpdateActiveConfig<DwmTouchInteractionConfigurationPrimitive>(v5);
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_QWORD *)(a1 + 36) = 0LL;
  *(_QWORD *)(a1 + 44) = 0LL;
  *(_QWORD *)(a1 + 52) = 0LL;
  *(_QWORD *)(a1 + 60) = 0LL;
  *(_QWORD *)(a1 + 68) = 0LL;
  *(_DWORD *)(a1 + 76) = 0;
  result = 1065353216LL;
  *(_DWORD *)(a1 + 80) = 1065353216;
  if ( (*(_BYTE *)(a1 + 16) & 3) != 0 )
    *(_DWORD *)(a1 + 20) = 1065353216;
  if ( (*(_BYTE *)(a1 + 16) & 0xC) != 0 )
    *(_DWORD *)(a1 + 40) = 1065353216;
  if ( (*(_BYTE *)(a1 + 16) & 0x30) != 0 )
    *(_DWORD *)(a1 + 60) = 1065353216;
  return result;
}
