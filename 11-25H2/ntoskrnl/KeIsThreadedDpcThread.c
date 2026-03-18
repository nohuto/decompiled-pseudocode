/*
 * XREFs of KeIsThreadedDpcThread @ 0x14044EA9C
 * Callers:
 *     MiGroupZeroHugeRange @ 0x14067A224 (MiGroupZeroHugeRange.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsThreadedDpcThread(__int64 a1)
{
  return *(_QWORD *)(a1 + 1376) == (_QWORD)KiExecuteDpc;
}
