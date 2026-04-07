/*
 * XREFs of ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x18007BEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800176CC (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_LogVisualBeginAndEndValues@CAnimatedTransitionVisual@@IEAAXI@Z @ 0x18007BF8C (-_LogVisualBeginAndEndValues@CAnimatedTransitionVisual@@IEAAXI@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::OnStoryboardBegin(CAnimatedTransitionVisual *this, unsigned int a2)
{
  int v4; // edi

  v4 = CAnimatedTransitionVisual::EnsureResources(this);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x8Fu, 0LL);
  }
  else
  {
    if ( !*((_BYTE *)this + 920) && *((float *)this + 223) == 0.0 )
    {
      *((_QWORD *)this + 88) = 0LL;
      *((_DWORD *)this + 178) = 0;
      *((_DWORD *)this + 174) = *((_DWORD *)this + 220);
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 0x2000);
    }
    CAnimatedTransitionVisual::_LogVisualBeginAndEndValues(this, a2);
    *((_BYTE *)this + 937) = 1;
  }
  return (unsigned int)v4;
}
