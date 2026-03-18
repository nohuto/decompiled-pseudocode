/*
 * XREFs of EtwTraceCompleteInputDeviceRead @ 0x1400E0710
 * Callers:
 *     rimInputApc @ 0x14017F8E0 (rimInputApc.c)
 * Callees:
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1400E0740 (McTemplateK0dq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceCompleteInputDeviceRead(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0dq_EtwWriteTransfer(a1, &CompleteInputDeviceRead, a3, (unsigned __int8)a1, a2);
  return result;
}
