/*
 * XREFs of MiUpdateChargedWsles @ 0x1404F6004
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x1402DFB90 (MiMakeHyperRangeAccessible.c)
 *     MiMakeZeroedPageTablesEx @ 0x1403A62E0 (MiMakeZeroedPageTablesEx.c)
 *     MiCommitPageTablesForVad @ 0x1408E26C0 (MiCommitPageTablesForVad.c)
 *     MiComputeProcessUserVa @ 0x1408F8A6C (MiComputeProcessUserVa.c)
 *     MiReturnPageTablePageCommitment @ 0x1409DE1C0 (MiReturnPageTablePageCommitment.c)
 *     MiDeleteVadBitmap @ 0x140A37CD0 (MiDeleteVadBitmap.c)
 * Callees:
 *     <none>
 */

volatile signed __int64 *__fastcall MiUpdateChargedWsles(__int64 a1, unsigned __int64 a2)
{
  volatile signed __int64 *result; // rax

  result = (volatile signed __int64 *)&unk_140E38770;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    result = (volatile signed __int64 *)(a1 + 240);
  _InterlockedAdd64(result, a2);
  return result;
}
