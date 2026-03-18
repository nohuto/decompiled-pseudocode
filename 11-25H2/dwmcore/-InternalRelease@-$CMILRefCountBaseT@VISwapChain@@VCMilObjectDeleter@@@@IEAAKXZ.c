/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@VISwapChain@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801A8EB0
 * Callers:
 *     ?reset@?$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801A8E6C (-reset@-$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCCompSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A8E90 (--1-$com_ptr_t@VCCompSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CDDARenderTarget@@UEAA@XZ @ 0x1801A9C18 (--1CDDARenderTarget@@UEAA@XZ.c)
 *     ?Release@CCompSwapChain@@UEAAKXZ @ 0x18025BB60 (-Release@CCompSwapChain@@UEAAKXZ.c)
 *     ?Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1802D15D4 (-Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 * Callees:
 *     ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800CF050 (-RemoveReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILRefCountBaseT<ISwapChain,CMilObjectDeleter>::InternalRelease(__int64 a1)
{
  CMILRefCountImpl *v1; // rsi
  unsigned int v3; // ebx

  v1 = (CMILRefCountImpl *)(a1 + 16);
  v3 = CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(a1 + 16));
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference(v1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
    v3 = CMILRefCountImpl::RemoveReference(v1);
    if ( !v3 )
    {
      CMILRefCountImpl::RemoveReference(v1);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 144LL))(a1, 1LL);
    }
  }
  return v3;
}
