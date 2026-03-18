/*
 * XREFs of IovpLogStackCallout @ 0x140BA6B20
 * Callers:
 *     IovpLogStackTrace @ 0x140BA6A6C (IovpLogStackTrace.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14027C690 (RtlCaptureStackBackTrace.c)
 */

void __fastcall IovpLogStackCallout(PVOID *Parameter)
{
  USHORT v2; // ax

  v2 = RtlCaptureStackBackTrace(2u, 0xDu, Parameter + 3, 0LL);
  if ( v2 < 0xDu )
    Parameter[v2 + 3] = 0LL;
}
