/*
 * XREFs of ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18020FBF0
 * Callers:
 *     ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x18020F410 (-ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18020FBCC (-reset@-$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CConversionSwapChain@@UEAAKXZ @ 0x180235610 (-Release@CConversionSwapChain@@UEAAKXZ.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x18023F450 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ??1?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18025B950 (--1-$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$CMILCOMBaseT@VIUnknownWeakRef@@V1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x1800AF020 (-Release@-$CMILCOMBaseT@VIUnknownWeakRef@@V1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18020FC90 (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802DFE50 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMBaseWeakRefSource<CMilObjectDeleter>::InternalRelease(__int64 a1)
{
  CResourceWeakRef *v1; // rbx
  void (__fastcall *v3)(__int64); // rax
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 (__fastcall *v6)(CResourceWeakRef *); // rax

  v1 = *(CResourceWeakRef **)(a1 + 16);
  if ( v1 )
  {
    v3 = *(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL);
    v4 = *(_QWORD *)(a1 + 16);
    if ( (char *)v3 == (char *)CGDISectionBitmapRealization::AddRef )
      CGDISectionBitmapRealization::AddRef(v4);
    else
      v3(v4);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 16));
  }
  v5 = CMILRefCountBaseT<IUnknownWeakRefSource,CMilObjectDeleter>::InternalRelease(a1);
  if ( v1 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 16));
    v6 = *(__int64 (__fastcall **)(CResourceWeakRef *))(*(_QWORD *)v1 + 16LL);
    if ( v6 == CMILCOMBaseT<IUnknownWeakRef,IUnknownWeakRef,CMilObjectDeleter>::Release )
      CMILCOMBaseT<IUnknownWeakRef,IUnknownWeakRef,CMilObjectDeleter>::Release(v1);
    else
      v6(v1);
  }
  return v5;
}
