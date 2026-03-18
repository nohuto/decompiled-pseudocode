/*
 * XREFs of EtwTraceStartProcessQueuedMouseEvents @ 0x1C00AD5F0
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0052A60 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF238 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceStartProcessQueuedMouseEvents(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &StartProcessQueuedMouseEvents, &W32kControlGuid);
  return result;
}
