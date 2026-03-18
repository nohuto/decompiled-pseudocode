/*
 * XREFs of ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180203920
 * Callers:
 *     ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x180188F50 (-ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1802038FC (-reset@-$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CConversionSwapChain@@UEAAKXZ @ 0x18022A140 (-Release@CConversionSwapChain@@UEAAKXZ.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x180235DA0 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ??1?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180250300 (--1-$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$CMILCOMBaseT@VIUnknownWeakRef@@V1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18007CFE0 (-Release@-$CMILCOMBaseT@VIUnknownWeakRef@@V1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1802039C0 (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802D6BB0 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMBaseWeakRefSource<CMilObjectDeleter>::InternalRelease(__int64 a1, __int64 a2, __int64 a3)
{
  CResourceWeakRef *v3; // rbx
  void (__fastcall *v5)(__int64); // rax
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 (__fastcall *v8)(CResourceWeakRef *); // rax

  v3 = *(CResourceWeakRef **)(a1 + 16);
  if ( v3 )
  {
    v5 = *(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL);
    v6 = *(_QWORD *)(a1 + 16);
    if ( (char *)v5 == (char *)CGDISectionBitmapRealization::AddRef )
      CGDISectionBitmapRealization::AddRef(v6, a2, a3);
    else
      v5(v6);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 16));
  }
  v7 = CMILRefCountBaseT<IUnknownWeakRefSource,CMilObjectDeleter>::InternalRelease(a1);
  if ( v3 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 16));
    v8 = *(__int64 (__fastcall **)(CResourceWeakRef *))(*(_QWORD *)v3 + 16LL);
    if ( v8 == CMILCOMBaseT<IUnknownWeakRef,IUnknownWeakRef,CMilObjectDeleter>::Release )
      CMILCOMBaseT<IUnknownWeakRef,IUnknownWeakRef,CMilObjectDeleter>::Release(v3);
    else
      v8(v3);
  }
  return v7;
}
