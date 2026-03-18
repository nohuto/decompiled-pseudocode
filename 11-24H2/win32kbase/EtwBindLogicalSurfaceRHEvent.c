/*
 * XREFs of EtwBindLogicalSurfaceRHEvent @ 0x1401CD7A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0px_EtwWriteTransfer @ 0x1400ED870 (McTemplateK0px_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwBindLogicalSurfaceRHEvent(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0px_EtwWriteTransfer(a1, &BindLogicalSurfaceRHEvent, a3, a1, a2);
  return result;
}
