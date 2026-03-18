/*
 * XREFs of TraceDxgkPerformanceWarning @ 0x1400511F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall TraceDxgkPerformanceWarning(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    return McTemplateK0q_EtwWriteTransfer(a1, (__int64)"h", a3, a1);
  return result;
}
