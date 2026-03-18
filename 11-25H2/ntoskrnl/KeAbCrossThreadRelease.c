/*
 * XREFs of KeAbCrossThreadRelease @ 0x1404077E4
 * Callers:
 *     ExpReleaseDisownedFastResourceShared @ 0x140407388 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1404074C0 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KiAbCrossThreadRelease @ 0x140407818 (KiAbCrossThreadRelease.c)
 */

__int64 __fastcall KeAbCrossThreadRelease(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( (a2 & 1) != 0 )
    a2 = *(_QWORD *)(a3 + 1136) + 16LL + 88LL * (unsigned __int8)(a2 >> 1);
  return KiAbCrossThreadRelease(a1, a2);
}
