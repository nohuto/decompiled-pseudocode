/*
 * XREFs of ?IsReadyForMaximizeSnapPostTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x1800659E0
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BAF0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow3D::IsReadyForMaximizeSnapPostTransition(CTopLevelWindow3D *this)
{
  char v1; // dl

  v1 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 42) + 116LL) & 0x20000000) == 0 && !*((_BYTE *)this + 536) )
    return *((_QWORD *)this + 43) != 0LL;
  return v1;
}
