/*
 * XREFs of ?ApplyClockBoost@CRenderTargetManager@@AEAA_NXZ @ 0x180102D10
 * Callers:
 *     ?AdvanceFrame@CRenderTargetManager@@QEAA_N_N@Z @ 0x1800F2B5C (-AdvanceFrame@CRenderTargetManager@@QEAA_N_N@Z.c)
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x180102E70 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 *     ?GetCompositorClockBoost@CComposition@@QEBA_NXZ @ 0x180102DE0 (-GetCompositorClockBoost@CComposition@@QEBA_NXZ.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180103FC0 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CRenderTargetManager::ApplyClockBoost(CRenderTargetManager *this)
{
  BOOL CompositorClockBoost; // esi
  bool result; // al
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp

  CompositorClockBoost = CComposition::GetCompositorClockBoost(this);
  if ( !*((_BYTE *)this + 749) && CompositorClockBoost == *((_BYTE *)this + 755) )
    return 0;
  if ( *((_DWORD *)g_pComposition + 1623) && (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    McTemplateU0t_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &ClockBoostChanged, CompositorClockBoost);
  *((_BYTE *)this + 744) = 1;
  v4 = (_QWORD *)*((_QWORD *)this + 3);
  v5 = (_QWORD *)*((_QWORD *)this + 4);
  while ( v4 != v5 )
  {
    (*(void (__fastcall **)(_QWORD, BOOL))(*(_QWORD *)*v4 + 192LL))(*v4, CompositorClockBoost);
    ++v4;
  }
  CRenderTargetManager::EndTargetEnumeration(this);
  result = 1;
  *((_BYTE *)this + 749) = 0;
  *((_BYTE *)this + 755) = CompositorClockBoost;
  return result;
}
