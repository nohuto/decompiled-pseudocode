/*
 * XREFs of HalpInterruptFindLinesForGsiRange @ 0x140445AEC
 * Callers:
 *     HalEnableInterrupt @ 0x140201940 (HalEnableInterrupt.c)
 *     HalpInterruptSetLineState @ 0x140443F50 (HalpInterruptSetLineState.c)
 *     ExtEnvSetVpptTarget @ 0x140444404 (ExtEnvSetVpptTarget.c)
 *     HalDisableInterrupt @ 0x140444D30 (HalDisableInterrupt.c)
 *     HalpInterruptSetDestination @ 0x1404450C0 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404451F8 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1404453D0 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptGsiToLine @ 0x140445508 (HalpInterruptGsiToLine.c)
 *     HalpInterruptApplyOverrides @ 0x140445554 (HalpInterruptApplyOverrides.c)
 *     HalpMaskInterrupt @ 0x140445850 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x140445980 (HalpUnmaskInterrupt.c)
 *     HalpInterruptGetApicVersion @ 0x140447790 (HalpInterruptGetApicVersion.c)
 *     HalpInterruptRequestInterrupt @ 0x14053FF70 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x140541798 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x14054180C (HalpInterruptServiceActiveBoth.c)
 *     HalpInterruptRegisterLine @ 0x140560680 (HalpInterruptRegisterLine.c)
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
