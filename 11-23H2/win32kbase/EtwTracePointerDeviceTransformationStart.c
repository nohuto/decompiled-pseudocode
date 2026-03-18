/*
 * XREFs of EtwTracePointerDeviceTransformationStart @ 0x1C013AE50
 * Callers:
 *     rimTransformGeometry @ 0x1C00E335E (rimTransformGeometry.c)
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1C013C2AC (McTemplateK0d_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTracePointerDeviceTransformationStart(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &PointerDeviceTransformationStart, a3, (unsigned int)a1);
  return result;
}
