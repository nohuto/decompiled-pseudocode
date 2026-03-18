/*
 * XREFs of TraceDxgkBlockThread @ 0x1400113A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall TraceDxgkBlockThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (_DWORD)a1 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    return McTemplateK0q_EtwWriteTransfer(a1, &EventBlockThread, a3, (unsigned int)a1);
  return result;
}
