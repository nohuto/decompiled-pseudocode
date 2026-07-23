/*
 * XREFs of LZ4HC_init_internal @ 0x180152E14
 * Callers:
 *     LZ4_compress_HC_extStateHC_fastReset @ 0x180152F04 (LZ4_compress_HC_extStateHC_fastReset.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LZ4HC_init_internal(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 0x40000) + *(unsigned int *)(a1 + 262168) - *(_QWORD *)(a1 + 262152);
  if ( v4 > 0x40000000 )
  {
    memset_thunk_772440563353939046((void *)a1, 0, 0x20000uLL);
    memset_thunk_772440563353939046((void *)(a1 + 0x20000), 255, 0x20000uLL);
    LODWORD(v4) = 0;
  }
  result = (unsigned int)(v4 + 0x10000);
  *(_QWORD *)(a1 + 262152) = a2;
  *(_DWORD *)(a1 + 262176) = result;
  *(_DWORD *)(a1 + 262168) = result;
  *(_DWORD *)(a1 + 262172) = result;
  *(_QWORD *)(a1 + 0x40000) = a2;
  *(_QWORD *)(a1 + 262160) = a2;
  return result;
}
