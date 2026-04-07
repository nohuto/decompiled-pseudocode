/*
 * XREFs of ?UpdateBeforeTickResultWorker@CTimelineBase@@AEAAX_N@Z @ 0x18007268C
 * Callers:
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180026AA0 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 * Callees:
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x180027E44 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 */

void __fastcall CTimelineBase::UpdateBeforeTickResultWorker(CTimelineBase *this, char a2)
{
  if ( !a2 )
    CTimelineBase::JumpToFinalValue(this);
  *((_BYTE *)this + 73) = 0;
}
