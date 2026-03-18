/*
 * XREFs of EtwTraceDITSpeedHitTestFailedRevalidation @ 0x1C0138EB0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C00DF816 (McTemplateK0p_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceDITSpeedHitTestFailedRevalidation(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return McTemplateK0p_EtwWriteTransfer(a1, &DITSpeedHitTestFailedRevalidation, &W32kControlGuid, a1);
  return result;
}
