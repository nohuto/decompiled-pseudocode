/*
 * XREFs of ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1801012AC
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x180061858 (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x180061AA0 (-ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x180100F28 (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180101448 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?NotifyInvalidResource@CGlobalCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x18022FF50 (-NotifyInvalidResource@CGlobalCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180030128 (-clear@-$vector@V-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 *     ?reset@?$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180100A2C (-reset@-$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCManipulation@@@Z @ 0x1801B8A70 (--0-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCManipulation@@@Z.c)
 *     ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x1801E8964 (-DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?erase@?$vector@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18026695C (-erase@-$vector@V-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 *     ?DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x18029C6F8 (-DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::Reset(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // r14
  _QWORD *i; // rsi
  CGlobalComposition *v8; // rax
  __int64 v9; // rdx
  _QWORD *j; // r8
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 186) )
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableDirectFlip(this, 0);
  if ( *((_BYTE *)this + 187) )
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableOverlay(this);
  *((_BYTE *)this + 190) = 1;
  *((_BYTE *)this + 184) = 0;
  *((_DWORD *)this + 44) = 0;
  wil::com_ptr_t<CDecodeBitmap,wil::err_returncode_policy>::reset((CGlobalDrawingContext **)this + 1);
  v4 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *((_DWORD *)this + 11) = 0;
  v5 = *((_QWORD *)this + 6);
  if ( v5 != *((_QWORD *)this + 7) )
    *((_QWORD *)this + 7) = v5;
  *((_BYTE *)this + 188) = 1;
  *((_DWORD *)this + 55) = 0;
  v6 = (_QWORD *)*((_QWORD *)this + 10);
  for ( i = (_QWORD *)*((_QWORD *)this + 9); i != v6; ++i )
  {
    wil::com_ptr_t<CManipulation,wil::err_returncode_policy>::com_ptr_t<CManipulation,wil::err_returncode_policy>(
      &v11,
      *i);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 80LL))(
      v11,
      (*(_QWORD *)this + 16LL) & -(__int64)(*(_QWORD *)this != 0LL));
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v11);
  }
  if ( !a2 )
    std::vector<wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>>::clear((__int64)this + 72);
  *((_BYTE *)this + 183) = a2;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *(_OWORD *)((char *)this + 132) = 0LL;
  *(_QWORD *)((char *)this + 148) = 0LL;
  *((_DWORD *)this + 39) = 0;
  v8 = g_pComposition;
  v9 = *(_QWORD *)this;
  *((_QWORD *)this + 20) = 0LL;
  for ( j = (_QWORD *)*((_QWORD *)v8 + 744); j != *((_QWORD **)v8 + 745); ++j )
  {
    if ( *j == v9 )
    {
      std::vector<wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>>::erase((char *)v8 + 5952, &v11);
      return;
    }
  }
}
