/*
 * XREFs of ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180033F9C
 * Callers:
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180001FF0 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000ECF0 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180011ED4 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@.c)
 *     ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x180027A44 (-_EnsureResources@CLivePreview@@AEAAJXZ.c)
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x18002BA68 (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18004D01C (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x1800A2B40 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A7F04 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ @ 0x1801027B4 (-TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AU-$IVec.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180104184 (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180036E6C (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataVisual::Create(struct CRenderDataVisual **a1)
{
  CRenderDataVisual *v2; // rax
  CRenderDataVisual *v3; // rax
  struct CRenderDataVisual *v4; // rdi
  int v5; // ebx

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x15u, 0LL);
    return (unsigned int)v5;
  }
  v2 = (CRenderDataVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                              WPF::g_pProcessHeap,
                              288LL);
  if ( !v2 )
  {
    v4 = 0LL;
    goto LABEL_9;
  }
  v3 = CRenderDataVisual::CRenderDataVisual(v2);
  v4 = v3;
  if ( !v3 )
  {
LABEL_9:
    v5 = -2147024882;
    goto LABEL_7;
  }
  v5 = (*(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)v3 + 8LL))(v3);
  if ( v5 >= 0 )
  {
    *a1 = v4;
    return 0;
  }
LABEL_7:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x15u, 0LL);
  *a1 = 0LL;
  if ( v4 )
    CBaseObject::Release(v4);
  return (unsigned int)v5;
}
