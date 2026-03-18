/*
 * XREFs of CiSystemUpdateThreadTag @ 0x140001600
 * Callers:
 *     CiSchedulerAddThread @ 0x140001650 (CiSchedulerAddThread.c)
 * Callees:
 *     CiLogThreadBuffering @ 0x1400010E0 (CiLogThreadBuffering.c)
 */

__int64 __fastcall CiSystemUpdateThreadTag(__int64 a1, unsigned int a2)
{
  if ( byte_14000A0D0 )
    CiLogThreadBuffering(a1, a2 == 1);
  return KeUpdateThreadTag(*(_QWORD *)(a1 + 96), a2);
}
