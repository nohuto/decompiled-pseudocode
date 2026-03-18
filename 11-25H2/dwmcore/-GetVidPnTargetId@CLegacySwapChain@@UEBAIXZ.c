/*
 * XREFs of ?GetVidPnTargetId@CLegacySwapChain@@UEBAIXZ @ 0x1801FA280
 * Callers:
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x1801C1038 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@0IPEAPEAUIDXGIOutputDWM@@@Z @ 0x18020A2E0 (-GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@0IPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::GetVidPnTargetId(CLegacySwapChain *this)
{
  CDisplayManager *v3; // rcx
  struct IDXGIOutputDWM *v4[2]; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v5[12]; // [rsp+40h] [rbp-E8h] BYREF
  int v6; // [rsp+4Ch] [rbp-DCh]

  if ( *((_DWORD *)this + 15) == -1 )
  {
    v4[0] = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)v4);
    if ( (int)CDisplayManager::GetDXGIOutput(
                v3,
                *(struct _LUID *)((char *)this + 80),
                *(struct _LUID *)((char *)this + 52),
                *((_DWORD *)this + 12),
                v4) >= 0 )
    {
      memset_0(v5, 0, 0xC8uLL);
      if ( (*(int (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)v4[0] + 32LL))(v4[0], v5) >= 0 )
        *((_DWORD *)this + 15) = v6;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v4);
  }
  return *((unsigned int *)this + 15);
}
