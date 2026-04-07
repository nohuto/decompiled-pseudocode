/*
 * XREFs of ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x180035AB0
 * Callers:
 *     ?CloneVisualTree@CWindowBorder@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180006590 (-CloneVisualTree@CWindowBorder@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x180038EF0 (-Initialize@CTopLevelWindow@@EEAAJXZ.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x1800A2B40 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180104184 (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180035BC0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x180039B40 (--0CVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowBorder::Create(struct CWindowBorder **a1)
{
  CVisual *v2; // rax
  CVisual *v3; // rbx
  int v4; // edi

  if ( !a1 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x16u, 0LL);
    return (unsigned int)v4;
  }
  v2 = (CVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    352LL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x160uLL);
    CVisual::CVisual(v3);
    *(_QWORD *)v3 = &CWindowBorder::`vftable';
    *((_QWORD *)v3 + 31) = 0LL;
    *((_QWORD *)v3 + 32) = 0LL;
    *((_QWORD *)v3 + 33) = 0LL;
    *((_QWORD *)v3 + 34) = 0LL;
    *((_QWORD *)v3 + 35) = 0LL;
    *((_QWORD *)v3 + 36) = 0LL;
    *((_QWORD *)v3 + 37) = 0LL;
    v4 = CVisual::Initialize(v3);
    if ( v4 >= 0 )
    {
      *a1 = v3;
      return 0;
    }
  }
  else
  {
    v3 = 0LL;
    v4 = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x16u, 0LL);
  *a1 = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v4;
}
