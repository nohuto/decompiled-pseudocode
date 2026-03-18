/*
 * XREFs of GETCLIENTWNDINFO @ 0x14026C270
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     GetWndScrollBarInfoCrossProcess @ 0x1402149C4 (GetWndScrollBarInfoCrossProcess.c)
 *     GetWndSBParmsCrossProcess @ 0x140219F38 (GetWndSBParmsCrossProcess.c)
 *     GetSharedPropForFilteredProcesses @ 0x1402BF1AC (GetSharedPropForFilteredProcesses.c)
 *     SetSharedPropForFilteredProcesses @ 0x1402BF27C (SetSharedPropForFilteredProcesses.c)
 * Callees:
 *     ?GETCLIENTWNDINFOOFFSET@@YAHPEBUtagWND@@@Z @ 0x14026C2A4 (-GETCLIENTWNDINFOOFFSET@@YAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall GETCLIENTWNDINFO(const struct tagWND *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx

  v1 = 0LL;
  v2 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 296LL);
  if ( v2 )
    return v2 + (int)GETCLIENTWNDINFOOFFSET(a1);
  return v1;
}
