/*
 * XREFs of EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd @ 0x1401556B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x140090DE4 (McTemplateK0d_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &DwmSyncFlushForceRenderAndWaitForBatchEnd, a3, a1);
  return result;
}
