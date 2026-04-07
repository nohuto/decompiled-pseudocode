/*
 * XREFs of ?Create@CCompositor@@SAJPEAPEAV1@@Z @ 0x180027B00
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800264FC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B064 (--1-$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Initialize@CCompositor@@IEAAJXZ @ 0x180027E08 (-Initialize@CCompositor@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCompositor::Create(struct CCompositor **a1)
{
  __int64 v2; // rax
  CCompositor *v3; // rbx
  int v4; // eax
  unsigned int v5; // edi
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v7 = 0LL;
  v2 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         48LL);
  v3 = (CCompositor *)v2;
  v7 = v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 16) = 1;
    *(_QWORD *)v2 = &CCompositor::`vftable'{for `Windows::UI::Composition::IInteropCompositorPartnerCallback'};
    *(_QWORD *)(v2 + 8) = &CCompositor::`vftable'{for `CBaseObject'};
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 40) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  v7 = (__int64)v3;
  if ( v3 )
  {
    v4 = CCompositor::Initialize(v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x22u, 0LL);
    }
    else
    {
      v5 = 0;
      v7 = 0LL;
      *a1 = v3;
    }
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x20u, 0LL);
  }
  wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v7);
  return v5;
}
