/*
 * XREFs of EtwTraceUiLimitWriteClipboard @ 0x1401B5410
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qm_EtwWriteTransfer @ 0x1401323C0 (McTemplateK0qm_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceUiLimitWriteClipboard(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
    return McTemplateK0qm_EtwWriteTransfer(a1, &UiLimitWriteClipboard, a3, a1, a2);
  return result;
}
