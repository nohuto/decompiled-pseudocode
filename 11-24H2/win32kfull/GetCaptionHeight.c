/*
 * XREFs of GetCaptionHeight @ 0x140073078
 * Callers:
 *     xxxCalcClientRect @ 0x1400712A8 (xxxCalcClientRect.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1401B1824 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxMenuBarDraw @ 0x1401FBF4C (xxxMenuBarDraw.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x140249264 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     xxxDrawWindowFrame @ 0x140255644 (xxxDrawWindowFrame.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 */

__int64 __fastcall GetCaptionHeight(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  int v4; // r8d
  unsigned int WindowDpiLastNotify; // eax
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v2 + 16) & 8) == 0 )
    return 0LL;
  v3 = *(_DWORD *)(v2 + 288);
  v4 = v3 & 0xF;
  if ( *(char *)(v2 + 24) < 0 )
  {
    if ( v4 == 3 )
    {
      WindowDpiLastNotify = (v3 >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v2 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (v3 & 0xF) == 0
           && (v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 496LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) + 272LL);
    }
    v6 = 22LL;
  }
  else
  {
    if ( v4 == 3 )
    {
      WindowDpiLastNotify = (v3 >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v2 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (v3 & 0xF) == 0
           && (v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 496LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v8 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) + 272LL);
    }
    v6 = 2LL;
  }
  return GetDpiDependentMetric(v6, WindowDpiLastNotify);
}
