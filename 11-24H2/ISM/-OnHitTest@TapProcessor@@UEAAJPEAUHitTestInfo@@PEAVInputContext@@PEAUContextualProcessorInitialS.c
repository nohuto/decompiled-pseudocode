/*
 * XREFs of ?OnHitTest@TapProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801B1E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TapProcessor::OnHitTest(
        TapProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  *(_DWORD *)a4 = 0;
  if ( (*(_DWORD *)a2 & *((_DWORD *)this + 8)) != 0 && (*(_DWORD *)a2 & 0x4000) == 0 )
    *(_DWORD *)a4 = 3;
  *((_DWORD *)this + 17) = 0;
  return 0LL;
}
