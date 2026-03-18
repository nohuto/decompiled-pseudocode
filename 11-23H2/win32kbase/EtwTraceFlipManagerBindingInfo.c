/*
 * XREFs of EtwTraceFlipManagerBindingInfo @ 0x1C0139600
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C00DFA14 (McTemplateK0pq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceFlipManagerBindingInfo(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0pq_EtwWriteTransfer(a1, &FlipManagerBindingInfo, a3, a1, a2);
  return result;
}
