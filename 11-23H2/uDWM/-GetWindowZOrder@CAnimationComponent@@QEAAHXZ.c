/*
 * XREFs of ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ @ 0x180014FE0
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180014E94 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800152B0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall CAnimationComponent::GetWindowZOrder(CAnimationComponent *this)
{
  HWND v1; // rdx
  struct CWindowData *WindowDataByHwnd; // rax
  unsigned int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD *v8; // r8
  bool v9; // zf

  v1 = (HWND)*((_QWORD *)this + 2);
  if ( v1 == HWND_MESSAGE|0x2LL )
    return 0x7FFFFFFFLL;
  if ( *((_DWORD *)this + 15) == 0x80000000 )
  {
    WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                         v1);
    v4 = 0;
    if ( WindowDataByHwnd )
    {
      v5 = *((_QWORD *)WindowDataByHwnd + 55);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 24);
        if ( v6 )
        {
          if ( *((_BYTE *)this + 136) )
          {
            *((_DWORD *)this + 15) = -5;
          }
          else
          {
            v8 = *(_QWORD **)(v6 + 48);
            v9 = *(_DWORD *)(v6 + 72) == 0;
            if ( *(_DWORD *)(v6 + 72) )
            {
              do
              {
                if ( v5 == *v8 )
                  break;
                ++v4;
                ++v8;
              }
              while ( v4 < *(_DWORD *)(v6 + 72) );
              v9 = v4 == *(_DWORD *)(v6 + 72);
            }
            if ( !v9 )
              *((_DWORD *)this + 15) = v4;
          }
        }
      }
    }
    else
    {
      *((_DWORD *)this + 15) = -10;
    }
  }
  return *((unsigned int *)this + 15);
}
