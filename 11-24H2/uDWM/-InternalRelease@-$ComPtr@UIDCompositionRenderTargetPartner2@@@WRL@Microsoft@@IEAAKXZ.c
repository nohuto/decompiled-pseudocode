/*
 * XREFs of ?InternalRelease@?$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BA6CC
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18008D05C (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800B813C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@@@YAPEAPEAX.c)
 *     ??1?$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B849C (--1-$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
