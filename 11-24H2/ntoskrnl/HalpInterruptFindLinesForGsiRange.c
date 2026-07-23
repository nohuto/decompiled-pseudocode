/*
 * XREFs of HalpInterruptFindLinesForGsiRange @ 0x14037265C
 * Callers:
 *     HalEnableInterrupt @ 0x1402B3DD0 (HalEnableInterrupt.c)
 *     HalpInterruptSetLineState @ 0x1402B4E20 (HalpInterruptSetLineState.c)
 *     HalpMaskInterrupt @ 0x1403723C0 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x1403724F0 (HalpUnmaskInterrupt.c)
 *     HalpInterruptApplyOverrides @ 0x1403732F0 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGsiToLine @ 0x1403733E0 (HalpInterruptGsiToLine.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1403735D0 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptSetDestination @ 0x140373710 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x140373848 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalDisableInterrupt @ 0x140373FF0 (HalDisableInterrupt.c)
 *     ExtEnvSetVpptTarget @ 0x140374B64 (ExtEnvSetVpptTarget.c)
 *     HalpInterruptGetApicVersion @ 0x1404C5BD0 (HalpInterruptGetApicVersion.c)
 *     HalpInterruptRequestInterrupt @ 0x1405400F0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x140541918 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x14054198C (HalpInterruptServiceActiveBoth.c)
 *     HalpInterruptRegisterLine @ 0x140560BB0 (HalpInterruptRegisterLine.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall HalpInterruptFindLinesForGsiRange(unsigned int a1, unsigned int a2)
{
  ULONG_PTR *v2; // r8
  ULONG_PTR *v4; // rdi
  _QWORD **v5; // rdi
  _QWORD *v6; // r10
  _DWORD *v7; // r9
  unsigned int v8; // edx
  unsigned int v9; // eax

  v2 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  while ( v2 != &HalpRegisteredInterruptControllers )
  {
    v4 = v2;
    v2 = (ULONG_PTR *)*v2;
    v5 = (_QWORD **)(v4 + 33);
    v6 = *v5;
    while ( v6 != v5 )
    {
      v7 = v6;
      v6 = (_QWORD *)*v6;
      v8 = v7[7];
      if ( v8 != -1 )
      {
        if ( v8 >= a1 && v8 < a2 )
          return v7;
        v9 = v8 + v7[6] - v7[5] - 1;
        if ( v9 < a2 && v9 >= a1 )
          return v7;
        if ( v9 >= a2 && v8 < a1 )
          return v7;
      }
    }
  }
  return 0LL;
}
