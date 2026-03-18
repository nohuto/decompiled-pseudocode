/*
 * XREFs of MiZeroCfgSystemWideBitmap @ 0x14047E884
 * Callers:
 *     MiReturnImageBase @ 0x140940000 (MiReturnImageBase.c)
 * Callees:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033D068 (MiZeroCfgSystemWideBitmapWorker.c)
 */

void __fastcall MiZeroCfgSystemWideBitmap(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9

  v2 = qword_140E2D4C8;
  if ( *(_DWORD *)(a1 + 16) == 3 )
    v2 = unk_140E2D460;
  MiZeroCfgSystemWideBitmapWorker(
    (unsigned int *)(v2 + 128),
    2 * (a2 >> 4),
    2 * (((unsigned __int64)*(unsigned int *)(a1 + 8) << 12) & 0xFFFFFFFFFFFFFFFLL));
}
