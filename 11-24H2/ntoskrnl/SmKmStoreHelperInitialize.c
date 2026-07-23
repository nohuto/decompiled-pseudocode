/*
 * XREFs of SmKmStoreHelperInitialize @ 0x1403772FC
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140376D70 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall SmKmStoreHelperInitialize(__int64 a1, char a2)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0x90uLL);
  *(_WORD *)(a1 + 9) = 1536;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  result = a1 + 40;
  *(_WORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 34) = 6;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  *(_BYTE *)(a1 + 136) = a2;
  return result;
}
