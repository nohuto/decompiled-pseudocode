/*
 * XREFs of ?SetCompositionSurfaceObj@CSwapChainProp@@QEAAXPEAX@Z @ 0x1402BF040
 * Callers:
 *     UserSetWindowedSwapChain @ 0x140169708 (UserSetWindowedSwapChain.c)
 *     ?CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z @ 0x14016A7B4 (-CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CSwapChainProp::SetCompositionSurfaceObj(CSwapChainProp *this, void *a2)
{
  if ( *((_QWORD *)this + 3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 92);
  *((_QWORD *)this + 3) = a2;
}
