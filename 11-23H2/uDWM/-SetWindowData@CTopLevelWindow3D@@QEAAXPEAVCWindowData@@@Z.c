/*
 * XREFs of ?SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z @ 0x1800E72A8
 * Callers:
 *     ??1CWindowData@@QEAA@XZ @ 0x180010A48 (--1CWindowData@@QEAA@XZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180049060 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18004C100 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 */

void __fastcall CTopLevelWindow3D::SetWindowData(CTopLevelWindow3D *this, struct CWindowData *a2, __int64 a3)
{
  if ( !*((_QWORD *)this + 42) || a2 )
  {
    *((_QWORD *)this + 42) = a2;
    if ( a2 )
      *((_OWORD *)this + 20) = *((_OWORD *)a2 + 3);
  }
  else
  {
    CTopLevelWindow3D::StopAnimation(this, 0LL, a3);
    *((_QWORD *)this + 42) = a2;
  }
}
