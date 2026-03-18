/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@VISwapChainBuffer@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801B6CD4
 * Callers:
 *     ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801B5880 (-EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1801B6214 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wi.c)
 *     ??1?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801B691C (--1-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CDDisplaySwapChainBuffer@@UEAAKXZ @ 0x180250570 (-Release@CDDisplaySwapChainBuffer@@UEAAKXZ.c)
 *     ??4?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802C9AC0 (--4-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 * Callees:
 *     ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x18004C5F0 (-RemoveReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILRefCountBaseT<ISwapChainBuffer,CMilObjectDeleter>::InternalRelease(__int64 a1)
{
  CMILRefCountImpl *v1; // rsi
  unsigned int v3; // ebx

  v1 = (CMILRefCountImpl *)(a1 + 8);
  v3 = CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(a1 + 8));
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference(v1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 224LL))(a1);
    v3 = CMILRefCountImpl::RemoveReference(v1);
    if ( !v3 )
    {
      CMILRefCountImpl::RemoveReference(v1);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 216LL))(a1, 1LL);
    }
  }
  return v3;
}
