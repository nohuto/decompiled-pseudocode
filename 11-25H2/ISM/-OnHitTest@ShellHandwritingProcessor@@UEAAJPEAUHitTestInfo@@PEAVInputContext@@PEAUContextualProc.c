/*
 * XREFs of ?OnHitTest@ShellHandwritingProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180089CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18011137C (--$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 */

__int64 __fastcall ShellHandwritingProcessor::OnHitTest(
        ShellHandwritingProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  char v7; // [rsp+38h] [rbp+10h] BYREF
  char v8; // [rsp+48h] [rbp+20h] BYREF

  *(_DWORD *)a4 = 0;
  if ( (*(_BYTE *)a2 & 0x10) != 0 && (*((_BYTE *)a2 + 32) & 4) != 0 )
  {
    v8 = 1;
    v7 = 0;
    if ( (int)wil::wnf_query_nothrow<bool>(&WNF_SHEL_SHELLHANDWRITING_ENABLED, &v7, &v8) < 0 || !v7 || v8 )
    {
      *(_DWORD *)a4 = 1;
      *((_BYTE *)this + 48) = 0;
    }
  }
  return 0LL;
}
