/*
 * XREFs of MiUpdateChargedWsles @ 0x1404F37B0
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x1402B94E0 (MiMakeHyperRangeAccessible.c)
 *     MiMakeZeroedPageTablesEx @ 0x14038F57C (MiMakeZeroedPageTablesEx.c)
 *     MiCommitPageTablesForVad @ 0x140900E00 (MiCommitPageTablesForVad.c)
 *     MiComputeProcessUserVa @ 0x140904FA4 (MiComputeProcessUserVa.c)
 *     MiReturnPageTablePageCommitment @ 0x1409E3F50 (MiReturnPageTablePageCommitment.c)
 *     MiDeleteVadBitmap @ 0x140A33648 (MiDeleteVadBitmap.c)
 * Callees:
 *     <none>
 */

volatile signed __int64 *__fastcall MiUpdateChargedWsles(__int64 a1, unsigned __int64 a2)
{
  volatile signed __int64 *result; // rax

  result = (volatile signed __int64 *)&unk_140E38530;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    result = (volatile signed __int64 *)(a1 + 240);
  _InterlockedAdd64(result, a2);
  return result;
}
