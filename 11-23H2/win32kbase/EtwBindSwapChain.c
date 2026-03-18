/*
 * XREFs of EtwBindSwapChain @ 0x1C016B550
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0px_EtwWriteTransfer @ 0x1C013CEA4 (McTemplateK0px_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwBindSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0px_EtwWriteTransfer(a1, &BindSwapChain, a3, a1, a2);
  return result;
}
