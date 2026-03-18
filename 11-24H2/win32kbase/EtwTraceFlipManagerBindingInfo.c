/*
 * XREFs of EtwTraceFlipManagerBindingInfo @ 0x1400E0590
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1400E0654 (McTemplateK0pq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerBindingInfo(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0pq_EtwWriteTransfer(a1, &FlipManagerBindingInfo, a3, a1, a2);
  return result;
}
