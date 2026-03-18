/*
 * XREFs of ?ProcessDelayUnpin@CDDisplayRenderTarget@@UEAAXXZ @ 0x18027F540
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z @ 0x1802BAC58 (-ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z.c)
 */

void __fastcall CDDisplayRenderTarget::ProcessDelayUnpin(CDDisplayRenderTarget *this)
{
  unsigned int v1; // r9d

  v1 = 0;
  if ( *((_DWORD *)this + 8256) != 1 )
  {
    if ( !*((_QWORD *)this + 4139) )
      return;
    v1 = *((_DWORD *)this + 8258);
  }
  CD3DDevice::ProcessDelayUnpinForTarget(
    *(CD3DDevice **)(*((_QWORD *)this + 6) + 64LL),
    *(struct _LUID *)((char *)this + 32984),
    *((_DWORD *)this + 8250),
    v1);
}
