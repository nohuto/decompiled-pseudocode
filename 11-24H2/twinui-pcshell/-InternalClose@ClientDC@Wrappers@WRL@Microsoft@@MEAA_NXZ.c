/*
 * XREFs of ?InternalClose@ClientDC@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x180684C60
 * Callers:
 *     ??1ClientDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180684858 (--1ClientDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::WRL::Wrappers::ClientDC::InternalClose(Microsoft::WRL::Wrappers::ClientDC *this)
{
  return ReleaseDC(*((HWND *)this + 2), *((HDC *)this + 1)) != 0;
}
