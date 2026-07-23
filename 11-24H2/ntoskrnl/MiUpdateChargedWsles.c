/*
 * XREFs of MiUpdateChargedWsles @ 0x1404F3904
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x140241470 (MiMakeHyperRangeAccessible.c)
 *     MiMakeZeroedPageTablesEx @ 0x14026D5D0 (MiMakeZeroedPageTablesEx.c)
 *     MiCommitPageTablesForVad @ 0x140919270 (MiCommitPageTablesForVad.c)
 *     MiComputeProcessUserVa @ 0x14091AEC4 (MiComputeProcessUserVa.c)
 *     MiReturnPageTablePageCommitment @ 0x1409D7D90 (MiReturnPageTablePageCommitment.c)
 *     MiDeleteVadBitmap @ 0x140A2CD84 (MiDeleteVadBitmap.c)
 * Callees:
 *     <none>
 */

volatile signed __int64 *__fastcall MiUpdateChargedWsles(__int64 a1, unsigned __int64 a2)
{
  volatile signed __int64 *result; // rax

  result = (volatile signed __int64 *)&unk_140E388B0;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    result = (volatile signed __int64 *)(a1 + 240);
  _InterlockedAdd64(result, a2);
  return result;
}
