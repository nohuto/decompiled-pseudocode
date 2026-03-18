/*
 * XREFs of ?IssueFlipManagerWaitForFlipAway@CTokenManager@@UEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@_K@Z @ 0x140098320
 * Callers:
 *     <none>
 * Callees:
 *     ?IssueFlipManagerWaitForFlipAway@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@_K@Z @ 0x140098840 (-IssueFlipManagerWaitForFlipAway@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSIT.c)
 */

__int64 __fastcall CTokenManager::IssueFlipManagerWaitForFlipAway(
        CTokenManager *this,
        struct FlipManagerObject *a2,
        const struct tagCOMPOSITION_TARGET_FLIP_AWAY_FENCE *a3,
        unsigned __int64 a4)
{
  return CAdapterCollection::IssueFlipManagerWaitForFlipAway((CTokenManager *)((char *)this + 112), a2, a3, a4);
}
