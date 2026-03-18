/*
 * XREFs of EtwTraceDockState @ 0x1401B4420
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x140090DE4 (McTemplateK0d_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceDockState(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &SystemDockState, a3, a1);
  return result;
}
