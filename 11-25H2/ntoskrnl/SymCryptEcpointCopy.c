/*
 * XREFs of SymCryptEcpointCopy @ 0x140528194
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140527550 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140527A60 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointTransform @ 0x140528618 (SymCryptEcpointTransform.c)
 *     SymCryptShortWeierstrassSetDistinguished @ 0x140529970 (SymCryptShortWeierstrassSetDistinguished.c)
 *     SymCryptShortWeierstrassAdd @ 0x14052A400 (SymCryptShortWeierstrassAdd.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x14052A9C8 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 */

void *__fastcall SymCryptEcpointCopy(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  void *result; // rax

  if ( a2 != a3 )
  {
    *a3 = *a2;
    return memmove(a3 + 32, a2 + 32, (*(_DWORD *)(a1 + 16) * (*(_DWORD *)(a1 + 8) & 0xFu)) << 6);
  }
  return result;
}
