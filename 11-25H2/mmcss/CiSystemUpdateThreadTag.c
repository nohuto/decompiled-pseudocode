/*
 * XREFs of CiSystemUpdateThreadTag @ 0x1C0001600
 * Callers:
 *     CiSchedulerAddThread @ 0x1C0001650 (CiSchedulerAddThread.c)
 * Callees:
 *     CiLogThreadBuffering @ 0x1C00010E0 (CiLogThreadBuffering.c)
 */

__int64 __fastcall CiSystemUpdateThreadTag(__int64 a1, unsigned int a2)
{
  if ( byte_1C00090D0 )
    CiLogThreadBuffering(a1, a2 == 1);
  return KeUpdateThreadTag(*(_QWORD *)(a1 + 96), a2);
}
