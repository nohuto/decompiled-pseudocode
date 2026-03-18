/*
 * XREFs of EtwTraceDCompCommitBatchEvent @ 0x1400B9450
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qpqt_EtwWriteTransfer @ 0x1400B948C (McTemplateK0qpqt_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceDCompCommitBatchEvent(int a1, int a2, int a3, int a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) != 0 )
    return McTemplateK0qpqt_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4 != 0);
  return result;
}
