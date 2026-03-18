/*
 * XREFs of IovpLogStackCallout @ 0x140B96B40
 * Callers:
 *     IovpLogStackTrace @ 0x140B96A8C (IovpLogStackTrace.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140347BC0 (RtlCaptureStackBackTrace.c)
 */

void __fastcall IovpLogStackCallout(PVOID *Parameter)
{
  USHORT v2; // ax

  v2 = RtlCaptureStackBackTrace(2u, 0xDu, Parameter + 3, 0LL);
  if ( v2 < 0xDu )
    Parameter[v2 + 3] = 0LL;
}
