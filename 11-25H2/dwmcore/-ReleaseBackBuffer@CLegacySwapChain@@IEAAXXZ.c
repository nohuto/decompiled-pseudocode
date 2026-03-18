/*
 * XREFs of ?ReleaseBackBuffer@CLegacySwapChain@@IEAAXXZ @ 0x1801C5CC8
 * Callers:
 *     ?ResetBuffers@CLegacySwapChain@@MEAAJXZ @ 0x1801C6190 (-ResetBuffers@CLegacySwapChain@@MEAAJXZ.c)
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1802D2C58 (--1CLegacySwapChain@@MEAA@XZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacySwapChain::ReleaseBackBuffer(CLegacySwapChain *this)
{
  __int64 *v1; // rbx
  __int64 v2; // r9

  v1 = (__int64 *)((char *)this + 296);
  v2 = *((_QWORD *)this + 37);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)v2 + 80LL))(
      *((_QWORD *)this + 37),
      ((unsigned __int64)this + 280) & -(__int64)(this != 0LL));
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
  }
}
