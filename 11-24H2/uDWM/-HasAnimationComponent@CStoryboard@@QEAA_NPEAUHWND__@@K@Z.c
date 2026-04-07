/*
 * XREFs of ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x180053638
 * Callers:
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x180012D24 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x180053554 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ?FindAnimationStoryboard@CAnimationScheduler@@QEAAPEAVCStoryboard@@QEAUHWND__@@HK@Z @ 0x1800A82F0 (-FindAnimationStoryboard@CAnimationScheduler@@QEAAPEAVCStoryboard@@QEAUHWND__@@HK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CStoryboard::HasAnimationComponent(CStoryboard *this, HWND a2, int a3)
{
  char v3; // r10
  unsigned int i; // r9d
  __int64 v5; // rax

  v3 = 0;
  for ( i = 0; i < *((_DWORD *)this + 30); ++i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 12) + 8LL * i);
    if ( a2 == *(HWND *)(v5 + 16) && (a3 & *(_DWORD *)(v5 + 24)) == a3 )
      return 1;
  }
  return v3;
}
