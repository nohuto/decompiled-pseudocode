/*
 * XREFs of ViPtCaptureStackTrace @ 0x140BA9324
 * Callers:
 *     ViPtLogPoolTraceWrapper @ 0x140B84104 (ViPtLogPoolTraceWrapper.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutEx @ 0x140232D00 (KeExpandKernelStackAndCalloutEx.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x14041E270 (RtlEnoughStackSpaceForStackCapture.c)
 *     ViPtCaptureStackTraceCallout @ 0x140BA9380 (ViPtCaptureStackTraceCallout.c)
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
