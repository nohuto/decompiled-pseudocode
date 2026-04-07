/*
 * XREFs of ?ScheduleToRun@CStoryboard@@QEAAXXZ @ 0x180044D0C
 * Callers:
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x180044F24 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x180043DF4 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 */

void __fastcall CStoryboard::ScheduleToRun(__m128i *this, __int64 a2)
{
  if ( this[1].m128i_i32[2] <= 1u )
  {
    this[1].m128i_i32[2] = 2;
    CStoryboard::_LogStoryboardEvent(this, a2);
  }
}
