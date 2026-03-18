/*
 * XREFs of EtwTraceStartInputDeviceRead @ 0x1400E06E0
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x14005B744 (RIMStartDeviceSpecificRead.c)
 * Callees:
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1400E0740 (McTemplateK0dq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceStartInputDeviceRead(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0dq_EtwWriteTransfer(a1, &StartInputDeviceRead, a3, (unsigned __int8)a1, a2);
  return result;
}
