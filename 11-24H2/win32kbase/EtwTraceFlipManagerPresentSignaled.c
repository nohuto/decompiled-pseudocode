/*
 * XREFs of EtwTraceFlipManagerPresentSignaled @ 0x140131D70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxtq_EtwWriteTransfer @ 0x1401B5D0C (McTemplateK0qxtq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerPresentSignaled(int a1, int a2, int a3, char a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qxtq_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
