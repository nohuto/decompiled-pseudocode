/*
 * XREFs of ?StopImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJXZ @ 0x1800BD7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplayBlackCurtainAnimatedVisual::StopImpl(CDisplayBlackCurtainAnimatedVisual *this)
{
  __int64 v1; // rax
  bool v2; // zf
  char v3; // al

  v1 = *((_QWORD *)this + 55);
  *((_QWORD *)this + 55) = 0LL;
  if ( v1 )
  {
    v2 = (*(_DWORD *)(v1 + 8))-- == 1;
    v3 = CDesktopManager::s_fTimelineDirty;
    if ( v2 )
      v3 = 1;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  return 0LL;
}
