/*
 * XREFs of EtwTraceFlipManagerWaitForFrameRenderingComplete @ 0x1401B4B20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxxq_EtwWriteTransfer @ 0x1401B5DAC (McTemplateK0qxxq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerWaitForFrameRenderingComplete(int a1, char a2, int a3, char a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qxxq_EtwWriteTransfer(
             a1,
             (unsigned int)&FlipManagerWaitForFrameRenderingComplete,
             a3,
             a1,
             a2,
             a3,
             a4);
  return result;
}
