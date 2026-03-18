/*
 * XREFs of ?NotifyOverlayFrame@CGlobalCompositionSurfaceInfo@@UEAAXAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z @ 0x18029CA60
 * Callers:
 *     <none>
 * Callees:
 *     ?AddCompSurfInfoUpdate@CComposition@@QEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x1801A6AD4 (-AddCompSurfInfoUpdate@CComposition@@QEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801EB924 (McTemplateU0x_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::NotifyOverlayFrame(
        CGlobalCompositionSurfaceInfo *this,
        const struct tagCOMPOSITION_TARGET_FLIP_AWAY_FENCE *a2)
{
  CComposition *v3; // rcx

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, const struct tagCOMPOSITION_TARGET_FLIP_AWAY_FENCE *))(**((_QWORD **)this + 16) + 40LL))(
         *((_QWORD *)this + 16),
         a2) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x_EventWriteTransfer((__int64)v3, &CompSurfInfo_NotifyWaitForFlipAway, *((_QWORD *)this + 5));
    CComposition::AddCompSurfInfoUpdate(v3, this);
  }
}
