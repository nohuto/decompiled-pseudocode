/*
 * XREFs of ?SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z @ 0x18006C2A8
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001BC68 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18001D19C (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18009052C (-OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180024708 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 */

void __fastcall CTopLevelWindow3D::SetWindowData(CTopLevelWindow3D *this, struct CWindowData *a2)
{
  if ( !*((_QWORD *)this + 36) || a2 )
  {
    *((_QWORD *)this + 36) = a2;
    if ( a2 )
      *((_OWORD *)this + 17) = *((_OWORD *)a2 + 3);
  }
  else
  {
    CTopLevelWindow3D::StopAnimation(this);
    *((_QWORD *)this + 36) = 0LL;
  }
}
