/*
 * XREFs of EtwTraceGreMovePointerEnd @ 0x1400E24A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1400E24D4 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceGreMovePointerEnd(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0qqq_EtwWriteTransfer(a1, (unsigned int)"P", a3, a1, a2, a3);
  return result;
}
