/*
 * XREFs of HalpInterruptFindLinesForGsiRange @ 0x1403B9C8C
 * Callers:
 *     HalEnableInterrupt @ 0x1403B7D10 (HalEnableInterrupt.c)
 *     HalDisableInterrupt @ 0x1403B8EA0 (HalDisableInterrupt.c)
 *     HalpInterruptSetDestination @ 0x1403B9230 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1403B9368 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1403B9540 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptGsiToLine @ 0x1403B9678 (HalpInterruptGsiToLine.c)
 *     HalpInterruptApplyOverrides @ 0x1403B96C4 (HalpInterruptApplyOverrides.c)
 *     HalpMaskInterrupt @ 0x1403B99F0 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x1403B9B20 (HalpUnmaskInterrupt.c)
 *     ExtEnvSetVpptTarget @ 0x1403BB428 (ExtEnvSetVpptTarget.c)
 *     HalpInterruptSetLineState @ 0x1403BBB90 (HalpInterruptSetLineState.c)
 *     HalpInterruptGetApicVersion @ 0x1404CC760 (HalpInterruptGetApicVersion.c)
 *     HalpInterruptRequestInterrupt @ 0x1405427A0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x140543FC8 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x14054403C (HalpInterruptServiceActiveBoth.c)
 *     HalpInterruptRegisterLine @ 0x140562F80 (HalpInterruptRegisterLine.c)
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
