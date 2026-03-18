/*
 * XREFs of EtwTraceEndPointerMessageRetrieve @ 0x1400FF1A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400FF25C (McTemplateK0pqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceEndPointerMessageRetrieve(int a1, char a2, int a3)
{
  __int64 result; // rax
  char v4; // al
  void *v5; // rdx

  result = (unsigned int)(a3 - 577);
  if ( a3 == 577 || a3 == 581 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    {
      v4 = a2;
      v5 = &EndPointerUpdateMessageRetrieve;
      return McTemplateK0pqq_EtwWriteTransfer(a1, (_DWORD)v5, a3, a1, v4, a3);
    }
  }
  else if ( (Microsoft_Windows_Win32kEnableBits & 0x40000) != 0 )
  {
    v4 = a2;
    v5 = &EndPointerMessageRetrieve;
    return McTemplateK0pqq_EtwWriteTransfer(a1, (_DWORD)v5, a3, a1, v4, a3);
  }
  return result;
}
