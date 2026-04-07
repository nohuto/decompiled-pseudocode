/*
 * XREFs of ?OnSnapshotStart@CTopLevelWindow@@QEAAXXZ @ 0x18000727C
 * Callers:
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x180007130 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnSnapshotStart(CTopLevelWindow *this)
{
  *((_BYTE *)this + 201) |= 0x80u;
}
