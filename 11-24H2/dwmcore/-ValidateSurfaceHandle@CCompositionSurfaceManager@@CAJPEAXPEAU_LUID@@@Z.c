/*
 * XREFs of ?ValidateSurfaceHandle@CCompositionSurfaceManager@@CAJPEAXPEAU_LUID@@@Z @ 0x1801A4660
 * Callers:
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1801A4530 (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ @ 0x1801A46EC (-TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSurfaceManager::ValidateSurfaceHandle(void *a1, struct _LUID *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  struct IVtrSurfaceManager *VtrSurfaceManager; // rax

  v4 = 0;
  v5 = NtValidateCompositionSurfaceHandle();
  if ( v5 < 0 )
  {
    v4 = v5 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5 | 0x10000000, 0x36u, 0LL);
  }
  else
  {
    VtrSurfaceManager = TryGetVtrSurfaceManager();
    if ( VtrSurfaceManager )
      (*(void (__fastcall **)(struct IVtrSurfaceManager *, void *, struct _LUID *))(*(_QWORD *)VtrSurfaceManager + 40LL))(
        VtrSurfaceManager,
        a1,
        a2);
  }
  return v4;
}
