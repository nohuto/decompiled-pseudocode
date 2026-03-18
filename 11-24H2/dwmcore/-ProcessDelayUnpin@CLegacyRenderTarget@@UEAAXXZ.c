/*
 * XREFs of ?ProcessDelayUnpin@CLegacyRenderTarget@@UEAAXXZ @ 0x18027E9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z @ 0x1802BAC58 (-ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRenderTarget::ProcessDelayUnpin(CLegacyRenderTarget *this)
{
  unsigned int v1; // edi
  CD3DDevice *v3; // rax

  v1 = 0;
  if ( *((_DWORD *)this + 8252) != 1 )
  {
    if ( !*((_QWORD *)this + 4137) )
      return;
    v1 = *((_DWORD *)this + 8254);
  }
  v3 = (CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 40LL))(*((_QWORD *)this + 5) + 24LL);
  CD3DDevice::ProcessDelayUnpinForTarget(v3, *(struct _LUID *)((char *)this + 32968), *((_DWORD *)this + 8246), v1);
}
