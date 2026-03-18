/*
 * XREFs of ViPtCaptureStackTrace @ 0x140BA7324
 * Callers:
 *     ViPtLogPoolTraceWrapper @ 0x140B82100 (ViPtLogPoolTraceWrapper.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutEx @ 0x14027D770 (KeExpandKernelStackAndCalloutEx.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x14042B6E0 (RtlEnoughStackSpaceForStackCapture.c)
 *     ViPtCaptureStackTraceCallout @ 0x140BA7380 (ViPtCaptureStackTraceCallout.c)
 */

void __fastcall ViPtCaptureStackTrace(PVOID Parameter)
{
  if ( Parameter )
  {
    if ( KeGetCurrentIrql() > 1u || (unsigned int)RtlEnoughStackSpaceForStackCapture() )
      ViPtCaptureStackTraceCallout(Parameter);
    else
      KeExpandKernelStackAndCalloutEx(ViPtCaptureStackTraceCallout, Parameter, 0xE30uLL, 1u, 0LL);
  }
}
