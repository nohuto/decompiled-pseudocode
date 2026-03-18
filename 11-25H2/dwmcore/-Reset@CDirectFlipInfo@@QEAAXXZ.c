/*
 * XREFs of ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x180103560
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800C9F20 (-ApplyConfiguration@COverlayContext@@QEAAX_NPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x18020F4BC (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ??1CDirectFlipInfo@@QEAA@XZ @ 0x180257F9C (--1CDirectFlipInfo@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@VCRegion@@@std@@QEAAXXZ @ 0x180103610 (-reset@-$shared_ptr@VCRegion@@@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDirectFlipInfo::Reset(CDirectFlipInfo *this)
{
  if ( *((_DWORD *)this + 12) != 1 && *((_DWORD *)this + 12) != 2 )
  {
    if ( *((_DWORD *)this + 12) != 3 )
    {
      *((_DWORD *)this + 12) = 0;
      return;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 256LL))(
      *((_QWORD *)this + 2),
      *((_QWORD *)this + 3),
      *((unsigned __int8 *)this + 109));
    *((_DWORD *)this + 12) = 2;
    *((_BYTE *)this + 108) = 0;
  }
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 2);
  std::shared_ptr<CRegion>::reset((char *)this + 32);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 23) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_BYTE *)this + 104) = 0;
  *((_WORD *)this + 53) = 256;
  *((_BYTE *)this + 108) = 0;
  *((_DWORD *)this + 12) = 0;
}
