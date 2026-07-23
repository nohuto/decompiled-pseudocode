/*
 * XREFs of ViDmaUninit @ 0x140B9E120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ViDmaUninit()
{
  __int64 result; // rax

  ViVerifyDma = 0;
  if ( (unsigned int)HalPrivateDispatchTable >= 0x3D )
  {
    result = VfRealHalAllocateMapRegisters;
    off_140E00830[0] = (__int64 (__fastcall *)())VfRealHalAllocateMapRegisters;
  }
  ViDoubleBufferDma = 0;
  return result;
}
