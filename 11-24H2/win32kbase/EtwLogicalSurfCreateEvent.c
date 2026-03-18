/*
 * XREFs of EtwLogicalSurfCreateEvent @ 0x1400E9670
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1400E0654 (McTemplateK0pq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwLogicalSurfCreateEvent(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0pq_EtwWriteTransfer(a1, &LogicalSurfCreateEvent, a3, a1, a2);
  return result;
}
