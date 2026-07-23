/*
 * XREFs of LZ4_resetStreamHC_fast @ 0x180152FC8
 * Callers:
 *     LZ4_compress_HC_extStateHC_fastReset @ 0x180152F04 (LZ4_compress_HC_extStateHC_fastReset.c)
 * Callees:
 *     LZ4_initStreamHC @ 0x180152F88 (LZ4_initStreamHC.c)
 */

unsigned __int64 __fastcall LZ4_resetStreamHC_fast(__int64 a1)
{
  unsigned __int64 result; // rax

  if ( *(_BYTE *)(a1 + 262183) )
  {
    result = (unsigned __int64)LZ4_initStreamHC((_WORD *)a1);
  }
  else
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 0x40000) - *(_DWORD *)(a1 + 262152));
    *(_DWORD *)(a1 + 262168) += result;
    *(_QWORD *)(a1 + 262152) = 0LL;
    *(_QWORD *)(a1 + 0x40000) = 0LL;
    *(_QWORD *)(a1 + 262184) = 0LL;
  }
  *(_WORD *)(a1 + 262180) = 9;
  return result;
}
