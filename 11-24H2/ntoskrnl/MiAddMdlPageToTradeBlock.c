/*
 * XREFs of MiAddMdlPageToTradeBlock @ 0x14043A090
 * Callers:
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAddMdlPageToTradeBlock(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 56);
  if ( result )
  {
    *(_QWORD *)(result + 8 * ((unsigned __int64)*(unsigned int *)(result + 40) >> 12) + 48) = a2;
    *(_DWORD *)(result + 40) += 4096;
  }
  return result;
}
