/*
 * XREFs of EtwTraceChangeDisplayModeBroadcast @ 0x140093C20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140092790 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceChangeDisplayModeBroadcast(const GUID *a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    return McTemplateK0_EtwWriteTransfer((__int64)a1, &ChangeDisplayModeBroadcast, a1);
  return result;
}
