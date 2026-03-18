/*
 * XREFs of log_xstr @ 0x1C00417B8
 * Callers:
 *     UsbhIoctlTraceOutput @ 0x1C0040FD4 (UsbhIoctlTraceOutput.c)
 *     UsbhExceptionTrace @ 0x1C004AC64 (UsbhExceptionTrace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall log_xstr(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = a3;
  if ( a2 < 0x7FFF )
    *(_WORD *)(a1 + 8) = a2;
  else
    *(_WORD *)(a1 + 8) = 0x7FFF;
  return a1;
}
