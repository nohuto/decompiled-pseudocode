/*
 * XREFs of ?OnSwipe@EdgyProcessorTarget@@AEAA?AW4State@1@_NH@Z @ 0x1801ABB5C
 * Callers:
 *     ?OnFlick@EdgyProcessorTarget@@AEAAJXZ @ 0x1801AB904 (-OnFlick@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?OnHorizontalDrag@EdgyProcessorTarget@@AEAAJXZ @ 0x1801ABAB4 (-OnHorizontalDrag@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?OnVerticalDrag@EdgyProcessorTarget@@AEAAJXZ @ 0x1801ABDFC (-OnVerticalDrag@EdgyProcessorTarget@@AEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SelectCandidate@EdgyImpl@@QEAA_NPEBUD2D_VECTOR_2F@@@Z @ 0x1801AC8C8 (-SelectCandidate@EdgyImpl@@QEAA_NPEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnSwipe(__int64 a1, char a2, int a3)
{
  unsigned int v3; // edi
  const char *v5; // r9
  __int128 v6; // xmm1
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct D2D_VECTOR_2F v9; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v9 = 0LL;
  if ( a3 )
  {
    if ( a2 )
      v9.x = (float)a3;
    else
      v9.y = (float)a3;
    if ( EdgyImpl::SelectCandidate((EdgyImpl *)(*(_QWORD *)(a1 + 120) + 80LL), &v9) )
    {
      if ( *(_DWORD *)(a1 + 48) == -1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x343,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
          v5);
      v3 = 2;
      v6 = *(_OWORD *)(a1 + 64);
      *(_OWORD *)(a1 + 80) = *(_OWORD *)(a1 + 48);
      *(_OWORD *)(a1 + 96) = v6;
    }
  }
  return v3;
}
