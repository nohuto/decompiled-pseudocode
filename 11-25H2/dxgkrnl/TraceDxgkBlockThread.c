/*
 * XREFs of TraceDxgkBlockThread @ 0x1400145A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall TraceDxgkBlockThread(__int64 a1)
{
  __int64 result; // rax

  if ( (_DWORD)a1 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    return McTemplateK0q_EtwWriteTransfer(a1, &EventBlockThread);
  return result;
}
