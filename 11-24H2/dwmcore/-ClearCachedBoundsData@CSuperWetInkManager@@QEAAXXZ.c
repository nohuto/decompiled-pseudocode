/*
 * XREFs of ?ClearCachedBoundsData@CSuperWetInkManager@@QEAAXXZ @ 0x1801EE904
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800817A0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?CleanupComputeScribble@CRenderTargetManager@@QEAAX_N@Z @ 0x18025E3EC (-CleanupComputeScribble@CRenderTargetManager@@QEAAX_N@Z.c)
 */

void __fastcall CSuperWetInkManager::ClearCachedBoundsData(CSuperWetInkManager *this)
{
  _QWORD *v1; // r8
  _QWORD *i; // rdx
  _DWORD *v3; // rax
  bool v4; // zf
  CDeviceManager *v5; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 5);
  for ( i = (_QWORD *)*((_QWORD *)this + 4); i != v1; i += 13 )
  {
    v3 = (_DWORD *)*i;
    v3[21] = 0;
    v3[20] = 0;
    v3[19] = 0;
    v3[18] = 0;
  }
  if ( CSuperWetInkManager::s_cleanupScribble )
  {
    v4 = *(_QWORD *)this == 0LL;
    CSuperWetInkManager::s_cleanupScribble = 0;
    if ( v4 )
      CRenderTargetManager::CleanupComputeScribble(*((CRenderTargetManager **)g_pComposition + 77), 0);
  }
  if ( CSuperWetInkManager::s_lostDevice )
  {
    CSuperWetInkManager::s_lostDevice = 0;
    CRenderTargetManager::CleanupComputeScribble(*((CRenderTargetManager **)g_pComposition + 77), 1);
    CDeviceManager::ReleaseD3D12Resources(v5);
  }
}
