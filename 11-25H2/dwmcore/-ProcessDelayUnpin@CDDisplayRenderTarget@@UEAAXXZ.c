/*
 * XREFs of ?ProcessDelayUnpin@CDDisplayRenderTarget@@UEAAXXZ @ 0x18028A360
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z @ 0x1802C42B8 (-ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z.c)
 */

void __fastcall CDDisplayRenderTarget::ProcessDelayUnpin(CDDisplayRenderTarget *this)
{
  unsigned int v1; // r9d

  v1 = 0;
  if ( *((_DWORD *)this + 8352) != 1 )
  {
    if ( !*((_QWORD *)this + 4187) )
      return;
    v1 = *((_DWORD *)this + 8354);
  }
  CD3DDevice::ProcessDelayUnpinForTarget(
    *(CD3DDevice **)(*((_QWORD *)this + 6) + 64LL),
    *(struct _LUID *)((char *)this + 33368),
    *((_DWORD *)this + 8346),
    v1);
}
