/*
 * XREFs of ?Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z @ 0x18010116C
 * Callers:
 *     ?GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180101AD4 (-GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV-$com_p.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180036E6C (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalTimeTrackVisual::Create(struct CGlobalTimeTrackVisual **a1)
{
  int v2; // edi
  CRenderDataVisual *v3; // rax
  CRenderDataVisual *v4; // rbx

  if ( a1 )
  {
    v3 = (CRenderDataVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                WPF::g_pProcessHeap,
                                304LL);
    v4 = v3;
    if ( v3 )
    {
      CRenderDataVisual::CRenderDataVisual(v3);
      *(_QWORD *)v4 = &CGlobalTimeTrackVisual::`vftable';
      *((_QWORD *)v4 + 36) = 0LL;
      *((_QWORD *)v4 + 37) = 0LL;
      v2 = ((__int64 (__fastcall *)(CRenderDataVisual *))*(&CGlobalTimeTrackVisual::`vftable' + 1))(v4);
      if ( v2 >= 0 )
      {
        *a1 = v4;
        return 0;
      }
    }
    else
    {
      v4 = 0LL;
      v2 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 9u);
    *a1 = 0LL;
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 9u);
  }
  return (unsigned int)v2;
}
